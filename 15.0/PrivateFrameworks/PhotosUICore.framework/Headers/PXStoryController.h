// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCONTROLLER_H
#define PXSTORYCONTROLLER_H

@class NSString, PXObservable<PXStoryQueueParticipant>;
@protocol PXStoryMutableController, PXChangeObserver, PXStoryQueueParticipant, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXStoryController : PXObservable <PXStoryMutableController, PXChangeObserver, PXStoryQueueParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PXObservable<PXStoryQueueParticipant> *observableModel; // ivar: _observableModel
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)init;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)configureUpdater:(id)arg0 ;
-(void)didPerformChanges;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif