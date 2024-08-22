// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSEGMENTMANAGER_H
#define BMSEGMENTMANAGER_H

@class _PASLock, NSString, NSOrderedSet;
@protocol BMFileManagerDelegate;

#import <Foundation/Foundation.h>

#import "BMFileManager.h"
#import "BMStreamMetadata.h"
#import "BMStoreConfig.h"
#import "BMFrameStore.h"

@interface BMSegmentManager : NSObject <BMFileManagerDelegate>

 {
    BMFileManager *_fileManager;
    NSUInteger _permission;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    BMStoreConfig *_config;
    id *_deviceLockStateRegistration;
    _PASLock *_protectedState;
}


@property (readonly, nonatomic) BOOL canReadOrPruneData;
@property (readonly, nonatomic) BMFrameStore *currentFrameStore; // ivar: _currentFrameStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSegmentName;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSOrderedSet *segmentNames;
@property (readonly) Class superclass;


+(CGFloat)timestampFromSegmentName:(id)arg0 ;
+(NSUInteger)indexOfSegmentContainingEventTime:(CGFloat)arg0 fromSegments:(id)arg1 ;
+(id)segmentNameFromTimestamp:(CGFloat)arg0 ;
-(BOOL)cachingOptionsForMemoryMappingWithFileAttributes:(id)arg0 ;
-(BOOL)removeSegmentNamed:(id)arg0 ;
-(BOOL)shouldCacheFileDescriptors;
-(NSInteger)cachingOptionsForFileHandleWithAttributes:(id)arg0 ;
-(id)_segmentAfterFrameStore:(id)arg0 orCreateSegmentWithTimestamp:(id)arg1 direction:(NSUInteger)arg2 ;
-(id)fileHandleForFile:(id)arg0 createNewFile:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDirectory:(id)arg0 fileManager:(id)arg1 permission:(NSUInteger)arg2 config:(id)arg3 ;
-(id)newFramestoreWithTime:(CGFloat)arg0 segmentNames:(id)arg1 segmentFileHandles:(id)arg2 ;
-(id)nextSegmentAfterFrameStore:(id)arg0 segmentNames:(id)arg1 segmentFileHandles:(id)arg2 direction:(NSUInteger)arg3 ;
-(id)orderedSegmentsInDirectory:(id)arg0 ;
-(id)segmentAfterFrameStore:(id)arg0 direction:(NSUInteger)arg1 ;
-(id)segmentAfterFrameStore:(id)arg0 orCreateSegmentWithTimestamp:(CGFloat)arg1 ;
-(id)segmentContainingTimestamp:(CGFloat)arg0 ;
-(id)segmentWithFilename:(id)arg0 error:(*id)arg1 ;
-(id)segmentWithFilename:(id)arg0 segmentNames:(id)arg1 segmentFileHandles:(id)arg2 createNewFile:(BOOL)arg3 error:(*id)arg4 ;
-(void)_updateSegments;
-(void)dealloc;
-(void)enumerateSegmentsFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)enumerateSegmentsNamesFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)handleDeviceLocking;
-(void)handleDeviceUnlock;
-(void)openFiles:(id)arg0 saveToOpenFiles:(id)arg1 ;
-(void)pruneSegmentsToMaxAge:(CGFloat)arg0 ;
-(void)pruneSegmentsToMaxSizeInBytes:(NSUInteger)arg0 ;
-(void)refreshSegmentsList;
-(void)reverseEnumerateSegmentsFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)reverseEnumerateSegmentsNamesFrom:(CGFloat)arg0 to:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)updateSegmentsWithGuardedDeviceLockStateData:(id)arg0 ;


@end


#endif