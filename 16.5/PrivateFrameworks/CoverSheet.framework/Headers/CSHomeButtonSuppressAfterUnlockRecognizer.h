// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSHOMEBUTTONSUPPRESSAFTERUNLOCKRECOGNIZER_H
#define CSHOMEBUTTONSUPPRESSAFTERUNLOCKRECOGNIZER_H

@class BSAbsoluteMachTimer, NSString;
@protocol SBHomeButtonSuppressAfterUnlockRecognizer, SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer>

 {
    BSAbsoluteMachTimer *_timer;
    BOOL _done;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_invalidateTimer;
-(void)_requestEndOfSuppression;
-(void)_startTimer;
-(void)_timerFired;
-(void)dealloc;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;


@end


#endif