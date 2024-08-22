// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSTATEROUTEPREVIEW_H
#define MNNAVIGATIONSTATEROUTEPREVIEW_H

@class NSArray;


#import "MNNavigationState.h"
#import "MNNavigationSessionManager.h"

@interface MNNavigationStateRoutePreview : MNNavigationState {
    NSArray *_previewRoutes;
    NSUInteger _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}




-(BOOL)requiresHighMemoryThreshold;
-(BOOL)shouldClearStoredRoutes;
-(NSUInteger)desiredLocationProviderType;
-(NSUInteger)type;
-(id)initWithStateManager:(id)arg0 previewRoutes:(id)arg1 selectedRouteIndex:(NSUInteger)arg2 ;
-(id)simulationLocationProvider;
-(id)traceManager;
-(void)enterState;
-(void)leaveState;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)setRoutesForPreview:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)startNavigationWithDetails:(id)arg0 activeBlock:(id)arg1 ;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;


@end


#endif