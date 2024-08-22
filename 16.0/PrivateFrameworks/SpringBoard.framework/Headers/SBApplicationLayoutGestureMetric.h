// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONLAYOUTGESTUREMETRIC_H
#define SBAPPLICATIONLAYOUTGESTUREMETRIC_H

@class PETScalarEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETScalarEventTracker *_pinGestureCompletionTracker;
    PETScalarEventTracker *_unpinGestureCompletionTracker;
    PETScalarEventTracker *_movePIPGestureCompletionTracker;
    PETScalarEventTracker *_moveSideGestureCompletionTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(NSUInteger)_moveActionForInitialFloatingConfig:(NSInteger)arg0 finalConfig:(NSInteger)arg1 ;
-(NSUInteger)_moveActionForInitialSpaceConfig:(NSInteger)arg0 finalConfig:(NSInteger)arg1 ;
-(id)init;


@end


#endif