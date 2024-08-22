// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSELFTRIGGERDETECTORENABLEDPOLICYDARWIN_H
#define CSSELFTRIGGERDETECTORENABLEDPOLICYDARWIN_H

@class CSPolicy;



@interface CSSelfTriggerDetectorEnabledPolicyDarwin : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy; // ivar: _voiceTriggerEnabledPolicy


-(BOOL)_shouldEnableMyriadFriendlySelfTrigger;
-(id)init;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(void)_subscribeEventMonitors;


@end


#endif