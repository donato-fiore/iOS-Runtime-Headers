// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKIMPACTEFFECTHAPTICSGENERATOR_H
#define CKIMPACTEFFECTHAPTICSGENERATOR_H

@protocol CK_UIFeedBackImpactBehavior;

#import <Foundation/Foundation.h>


@interface CKImpactEffectHapticsGenerator : NSObject

@property (retain, nonatomic) NSObject<CK_UIFeedBackImpactBehavior> *expressiveSendFeedbackImpactBehavior; // ivar: _expressiveSendFeedbackImpactBehavior
@property (nonatomic) CGFloat feedbackImpactBehaviorDispatchDelay; // ivar: _feedbackImpactBehaviorDispatchDelay
@property (nonatomic) BOOL sendFeedbackImpactBehavior; // ivar: _sendFeedbackImpactBehavior


-(id)init;
-(void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg0 ;
-(void)cleanUpImpactBehaviorFeedback;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg0 ;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg0 cleanUpOnSend:(BOOL)arg1 ;
-(void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg0 ;


@end


#endif