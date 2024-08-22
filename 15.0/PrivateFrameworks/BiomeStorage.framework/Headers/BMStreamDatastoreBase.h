// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTREAMDATASTOREBASE_H
#define BMSTREAMDATASTOREBASE_H

@class _PASLock, NSString;

#import <Foundation/Foundation.h>

#import "BMStreamMetadata.h"
#import "BMStoreConfig.h"
#import "BMFrameStore.h"
#import "BMPruningPolicy.h"

@interface BMStreamDatastoreBase : NSObject {
    NSUInteger _maxFileSize;
    BOOL _isTombstone;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    id *_lockStateChangeRegistration;
    _PASLock *_deviceLockStateLock;
}


@property (readonly, nonatomic) BOOL canReadOrPruneData;
@property (readonly, nonatomic) BMStoreConfig *config; // ivar: _config
@property (readonly, nonatomic) NSUInteger datastoreVersion; // ivar: _datastoreVersion
@property (retain, nonatomic) BMFrameStore *framesStore; // ivar: _framesStore
@property (readonly, nonatomic) BOOL isRemote; // ivar: _isRemote
@property (readonly, nonatomic) NSUInteger maxFileSize;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) NSUInteger permission; // ivar: _permission
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy; // ivar: _pruningPolicy
@property (readonly, nonatomic) NSString *remoteStreamName; // ivar: _remoteStreamName
@property (readonly, copy, nonatomic) NSString *streamId; // ivar: _streamId
@property (readonly, nonatomic) NSString *streamPath; // ivar: _streamPath


+(CGFloat)timestampWithFilename:(id)arg0 ;
+(NSInteger)fileSizeOfURL:(id)arg0 ;
+(NSUInteger)indexOfSegmentContainingEventTime:(CGFloat)arg0 fromSegments:(id)arg1 ;
+(id)fileNameWithTimestamp:(CGFloat)arg0 ;
+(id)orderedSegmentsInDirectory:(id)arg0 includeZeroSizeSegments:(BOOL)arg1 ;
-(BOOL)_segmentStillExists:(id)arg0 ;
-(BOOL)deleteEventAtBookmark:(id)arg0 outTombstoneBookmark:(*id)arg1 ;
-(BOOL)isNotLastSegment:(id)arg0 ;
-(BOOL)removeFrameStoreFileWithSegmentName:(id)arg0 ;
-(BOOL)saveMetadata:(id)arg0 ;
-(BOOL)shouldCacheFileDescriptors;
-(BOOL)updateMetadata:(Class)arg0 ;
-(BOOL)updateMetadata:(Class)arg0 pruningPolicy:(id)arg1 ;
-(BOOL)writeEventBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 ;
-(BOOL)writeEventBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 outBookmark:(*id)arg4 ;
-(BOOL)writeEventData:(id)arg0 dataVersion:(unsigned int)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)writeEventData:(id)arg0 dataVersion:(unsigned int)arg1 timestamp:(CGFloat)arg2 outBookmark:(*id)arg3 ;
-(BOOL)writeEventWithEventBody:(id)arg0 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 outBookmark:(*id)arg2 ;
-(Class)eventBodyClass;
-(NSUInteger)segmentFileSize:(id)arg0 ;
-(NSUInteger)streamSizeInBytes;
-(id)_bookmarkWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)_localStreamPath;
-(id)_remoteStreamPath;
-(id)effectiveStreamPath;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)fileHandleForFile:(id)arg0 createNewFile:(BOOL)arg1 error:(*id)arg2 ;
-(id)filePathForFilename:(id)arg0 ;
-(id)filelockPath;
-(id)frameStoreOfSegmentContainingEventTime:(CGFloat)arg0 ;
-(id)initWithStream:(id)arg0 permission:(NSUInteger)arg1 config:(id)arg2 ;
-(id)initWithStream:(id)arg0 streamPath:(id)arg1 permission:(NSUInteger)arg2 config:(id)arg3 ;
-(id)loadMetadata;
-(id)newEnumeratorFromBookmark:(id)arg0 ;
-(id)newEnumeratorFromBookmark:(id)arg0 options:(NSUInteger)arg1 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 maxEvents:(NSUInteger)arg2 lastN:(NSUInteger)arg3 options:(NSUInteger)arg4 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 maxEvents:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(id)newFramestoreWithTime:(CGFloat)arg0 ;
-(id)newFramestoreWithTime:(CGFloat)arg0 segmentNames:(id)arg1 segmentFileHandles:(id)arg2 ;
-(id)nextSegmentAfterFrameStore:(id)arg0 segmentNames:(id)arg1 direction:(NSUInteger)arg2 ;
-(id)segmentAfterFrameStore:(id)arg0 createNewSegment:(BOOL)arg1 ;
-(id)segmentAfterFrameStore:(id)arg0 createNewSegment:(BOOL)arg1 direction:(NSUInteger)arg2 ;
-(id)segmentNames;
-(id)segmentWithFilename:(id)arg0 error:(*id)arg1 ;
-(id)segmentWithFilename:(id)arg0 segmentNames:(id)arg1 segmentFileHandles:(id)arg2 createNewFile:(BOOL)arg3 error:(*id)arg4 ;
-(void)dealloc;
-(void)didMarkFrameAsRemovedWithSegmentName:(id)arg0 frame:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)didMarkFrameAsRemovedWithSegmentName:(id)arg0 frame:(id)arg1 reason:(NSUInteger)arg2 outTombstoneBookmark:(*id)arg3 ;
-(void)enumerateEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateSegmentsFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)enumerateSegmentsNamesFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 shouldDeleteUsingBlock:(id)arg3 ;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 shouldDeleteUsingBlock:(id)arg2 ;
-(void)fetchEventFromFrameStore:(id)arg0 atOffset:(NSUInteger)arg1 withOptions:(NSUInteger)arg2 callback:(id)arg3 ;
-(void)handleDeviceLocking;
-(void)handleDeviceUnlock;
-(void)openFiles:(id)arg0 saveToOpenFiles:(id)arg1 ;
-(void)pruneStreamToMaxSegmentAge:(CGFloat)arg0 ;
-(void)pruneStreamToMaxStreamSizeInBytes:(NSUInteger)arg0 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 pruneFutureEvents:(BOOL)arg2 shouldDeleteUsingBlock:(id)arg3 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 pruneFutureEvents:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 pruneFutureEvents:(BOOL)arg3 shouldDeleteUsingBlock:(id)arg4 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 pruneFutureEvents:(BOOL)arg3 usingBlock:(id)arg4 ;
-(void)reverseEnumerateSegmentsFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)reverseEnumerateSegmentsNamesFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)syncMappedFiles;
-(void)updateSegments;
-(void)updateSegmentsWithGuardedDeviceLockStateData:(id)arg0 ;


@end


#endif