// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKEVENTBEHAVIOR_H
#define _UIFEEDBACKEVENTBEHAVIOR_H



#import "UINotificationFeedbackGenerator.h"

@interface _UIFeedbackEventBehavior : UINotificationFeedbackGenerator



+(id)eventBehaviorWithCoordinateSpace:(id)arg0 configuration:(id)arg1 ;
+(void)_privateEventOccurred:(NSInteger)arg0 ;
+(void)eventOccurred:(NSInteger)arg0 ;
-(void)_activateAndPlayEvent:(NSInteger)arg0 ;
-(void)_privateEventOccurred:(NSInteger)arg0 ;
-(void)eventOccurred:(NSInteger)arg0 ;


@end


#endif