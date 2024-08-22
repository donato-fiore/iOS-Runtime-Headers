// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNNAVIGATIONSTATEROUTEPREVIEWGUIDANCE_H
#define MNNAVIGATIONSTATEROUTEPREVIEWGUIDANCE_H



#import "MNNavigationStateGuidance.h"

@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance



-(NSUInteger)type;
-(id)initWithStateManager:(id)arg0 navigationSessionManager:(id)arg1 startDetails:(id)arg2 ;
-(void)enterState;
-(void)setGuidanceType:(NSUInteger)arg0 ;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;


@end


#endif