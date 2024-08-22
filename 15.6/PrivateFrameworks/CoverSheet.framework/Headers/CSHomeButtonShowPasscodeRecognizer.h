// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSHOMEBUTTONSHOWPASSCODERECOGNIZER_H
#define CSHOMEBUTTONSHOWPASSCODERECOGNIZER_H

@class NSString, BSTimer;
@protocol SBHomeButtonShowPasscodeRecognizer, SBHomeButtonShowPasscodeRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer>

 {
    NSString *_simplePublicDescription;
    NSUInteger _state;
    BOOL _fingerWasOnInitially;
    BOOL _fingerHasLifted;
    BSTimer *_minimumTimer;
    NSString *_terminalStateReasoning;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeButtonShowPasscodeRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_state;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFingerOn:(BOOL)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_invalidateMinimumTimer;
-(void)_minimumTimerFired;
-(void)_reallySetState:(NSUInteger)arg0 forReason:(id)arg1 ;
-(void)_simulateTimerFiring;
-(void)_switchedFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)noteAuthenticated:(BOOL)arg0 ;


@end


#endif