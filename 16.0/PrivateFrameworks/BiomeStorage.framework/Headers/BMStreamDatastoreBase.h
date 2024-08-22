// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMDATASTOREBASE_H
#define BMSTREAMDATASTOREBASE_H

@class NSString;
@protocol BMFileManagerDelegate;

#import <Foundation/Foundation.h>

#import "BMFileManager.h"
#import "BMStreamMetadata.h"
#import "BMStoreConfig.h"
#import "BMFrameStore.h"
#import "BMPruningPolicy.h"
#import "BMSegmentManager.h"

@interface BMStreamDatastoreBase : NSObject <BMFileManagerDelegate>

 {
    BMFileManager *_fileManager;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BOOL canReadOrPruneData;
@property (readonly, nonatomic) BMStoreConfig *config; // ivar: _config
@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) NSUInteger datastoreVersion; // ivar: _datastoreVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxFileSize; // ivar: _maxFileSize
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) NSUInteger permission; // ivar: _permission
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy; // ivar: _pruningPolicy
@property (readonly, nonatomic) NSString *remoteStreamName; // ivar: _remoteStreamName
@property (readonly, nonatomic) BMSegmentManager *segmentManager; // ivar: _segmentManager
@property (readonly, copy, nonatomic) NSString *streamId; // ivar: _streamId
@property (readonly, nonatomic) NSString *streamPath; // ivar: _streamPath
@property (readonly) Class superclass;


-(BOOL)cachingOptionsForMemoryMappingWithFileAttributes:(id)arg0 ;
-(BOOL)deleteEventAtBookmark:(id)arg0 outTombstoneBookmark:(*id)arg1 ;
-(BOOL)isTombstone;
-(BOOL)saveMetadata:(id)arg0 ;
-(BOOL)updateMetadata:(Class)arg0 ;
-(BOOL)updateMetadata:(Class)arg0 pruningPolicy:(id)arg1 ;
-(BOOL)verifyStreamHealthFrom:(CGFloat)arg0 to:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)writeEventBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 ;
-(BOOL)writeEventBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 outBookmark:(*id)arg4 ;
-(BOOL)writeEventData:(id)arg0 dataVersion:(unsigned int)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)writeEventData:(id)arg0 dataVersion:(unsigned int)arg1 timestamp:(CGFloat)arg2 outBookmark:(*id)arg3 ;
-(BOOL)writeEventWithEventBody:(id)arg0 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 outBookmark:(*id)arg2 ;
-(Class)eventBodyClass;
-(NSInteger)cachingOptionsForFileHandleWithAttributes:(id)arg0 ;
-(id)_bookmarkWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 ;
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
-(id)segmentContainingTimestamp:(CGFloat)arg0 ;
-(id)segmentNames;
-(id)segmentWithFilename:(id)arg0 error:(*id)arg1 ;
-(void)didMarkFrameAsRemovedWithSegmentName:(id)arg0 frame:(id)arg1 reason:(NSUInteger)arg2 outTombstoneBookmark:(*id)arg3 ;
-(void)enumerateEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 shouldDeleteUsingBlock:(id)arg3 ;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 shouldDeleteUsingBlock:(id)arg2 ;
-(void)fetchEventFromFrameStore:(id)arg0 atOffset:(NSUInteger)arg1 withOptions:(NSUInteger)arg2 callback:(id)arg3 ;
-(void)pruneStreamToMaxSegmentAge:(CGFloat)arg0 ;
-(void)pruneStreamToMaxStreamSizeInBytes:(NSUInteger)arg0 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 pruneFutureEvents:(BOOL)arg2 shouldDeleteUsingBlock:(id)arg3 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 pruneFutureEvents:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 pruneFutureEvents:(BOOL)arg3 shouldDeleteUsingBlock:(id)arg4 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 pruneFutureEvents:(BOOL)arg3 usingBlock:(id)arg4 ;
-(void)syncMappedFiles;


@end


#endif