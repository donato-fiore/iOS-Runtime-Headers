// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXTASKTRACKINGCENTER_H
#define SVXTASKTRACKINGCENTER_H

@class NSMutableSet, NSString;
@protocol SVXTaskTrackingDelegate, SVXPerforming, SVXTaskTrackingCenterDelegate;

#import <Foundation/Foundation.h>


@interface SVXTaskTrackingCenter : NSObject <SVXTaskTrackingDelegate>

 {
    id<SVXPerforming> *_performer;
    NSMutableSet *_contexts;
    id<SVXTaskTrackingCenterDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)beginTrackingTaskWithContext:(id)arg0 instrumentationContext:(id)arg1 ;
-(id)initWithPerformer:(id)arg0 delegate:(id)arg1 ;
-(void)_beginContext:(id)arg0 ;
-(void)_endContext:(id)arg0 ;
-(void)_endContextsPassingTest:(id)arg0 ;
-(void)endTrackingAllTasks;
-(void)endTrackingTaskWithContext:(id)arg0 ;
-(void)endTrackingTasksPassingTest:(id)arg0 ;
-(void)getContextsOfAllTrackedTasksUsingBlock:(id)arg0 ;
-(void)taskTracker:(id)arg0 childWillBegin:(id)arg1 ;
-(void)taskTrackerDidEnd:(id)arg0 ;


@end


#endif