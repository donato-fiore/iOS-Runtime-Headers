// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYRESOURCESPRELOADINGCOORDINATOR_H
#define PXSTORYRESOURCESPRELOADINGCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol PXStoryMutableResourcesPreloadingCoordinator, PXChangeObserver, PXStoryQueueParticipant, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXStoryResourcesPreloadingCoordinator : PXObservable <PXStoryMutableResourcesPreloadingCoordinator, PXChangeObserver, PXStoryQueueParticipant>

 {
    NSMutableArray *_infos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)_infoForPreloadingController:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_invalidateInfosOrder;
-(void)_invalidatePreloadingControllers;
-(void)_setNeedsUpdate;
-(void)_updateInfosOrder;
-(void)_updatePreloadingControllers;
-(void)addPreloadingController:(id)arg0 withPriority:(NSInteger)arg1 ;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)removePreloadingController:(id)arg0 ;


@end


#endif