// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSELFTRIGGERDETECTORENABLEDPOLICYGIBRALTAR_H
#define CSSELFTRIGGERDETECTORENABLEDPOLICYGIBRALTAR_H

@class CSPolicy;



@interface CSSelfTriggerDetectorEnabledPolicyGibraltar : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy; // ivar: _voiceTriggerEnabledPolicy


-(id)init;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(void)_subscribeEventMonitors;


@end


#endif