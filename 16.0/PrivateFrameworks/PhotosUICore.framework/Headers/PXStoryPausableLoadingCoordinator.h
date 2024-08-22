// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPAUSABLELOADINGCOORDINATOR_H
#define PXSTORYPAUSABLELOADINGCOORDINATOR_H

@protocol PXStoryLoadingCoordinator, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PXStoryPausableLoadingCoordinator : NSObject <PXStoryLoadingCoordinator>

 {
    NSObject<OS_dispatch_group> *_timelineWorkGroup;
}




-(id)init;
-(void)dispatchTimelineWorkAsyncOnQueue:(id)arg0 block:(id)arg1 ;
-(void)pauseTimelineWork;
-(void)resumeTimelineWork;


@end


#endif