// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUPNEXTMEMORIESGENERATIONREQUEST_H
#define PXUPNEXTMEMORIESGENERATIONREQUEST_H

@class NSSet, PLPhotoAnalysisServiceClient, PHPhotoLibrary, NSArray, PHMemory;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXUpNextMemoriesGenerationRequest : NSObject

@property (readonly, nonatomic) NSSet *memoryLocalIdentifiersToAvoid; // ivar: _memoryLocalIdentifiersToAvoid
@property (readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient; // ivar: _photoAnalysisServiceClient
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs; // ivar: _recentlyUsedAppleMusicSongIDs
@property (retain, nonatomic) NSArray *recentlyUsedFlexSongIDs; // ivar: _recentlyUsedFlexSongIDs
@property (readonly, nonatomic) PHMemory *rootMemory; // ivar: _rootMemory
@property (readonly, nonatomic) NSUInteger targetUpNextMemoryCount; // ivar: _targetUpNextMemoryCount
@property (nonatomic) BOOL wantsVerboseDebugInfo; // ivar: _wantsVerboseDebugInfo
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_fetchEphemeralMemoriesWithLocalIdentifiers:(id)arg0 ;
-(id)_fetchOverrideMemories;
-(id)fetchUpNextMemoriesWithError:(*id)arg0 ;
-(id)init;
-(id)initWithRootMemory:(id)arg0 avoidMemoriesWithLocalIdentifiers:(id)arg1 targetUpNextMemoryCount:(NSUInteger)arg2 musicCurationParameters:(id)arg3 ;
-(void)startGenerationWithCompletionHandler:(id)arg0 ;


@end


#endif