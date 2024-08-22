// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRUISIRIMANAGER_H
#define TVRUISIRIMANAGER_H

@class SiriActivationAssertion;
@protocol SiriActivationButtonEventListenerDelegate, _TVRUIEventDelegate;

#import <Foundation/Foundation.h>


@interface TVRUISiriManager : NSObject <SiriActivationButtonEventListenerDelegate>



@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonActionsDelegate; // ivar: _buttonActionsDelegate
@property (retain, nonatomic) SiriActivationAssertion *siriAssertion; // ivar: _siriAssertion


+(id)sharedManager;
-(void)_activateSiriAssertion;
-(void)_donateTipsTrigger;
-(void)_registerForSiriButtonEvents;
-(void)_releaseSiriAssertion;
-(void)_unregisterForSiriButtonEvents;
-(void)buttonEventListenerDidReceiveButtonDownWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)buttonEventListenerDidReceiveButtonLongPressWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)buttonEventListenerDidReceiveButtonUpWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)registerForSiriEvents;
-(void)unregisterForSiriEvents;


@end


#endif