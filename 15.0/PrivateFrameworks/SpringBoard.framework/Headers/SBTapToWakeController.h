// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTAPTOWAKECONTROLLER_H
#define SBTAPTOWAKECONTROLLER_H

@class NSString, SBIdleTimerDefaults, SBFTapToWakeGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBTapToWakeDelegate;

#import <Foundation/Foundation.h>


@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTapToWakeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults; // ivar: _idleTimerDefaults
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer; // ivar: _pencilToWakeGestureRecognizer
@property (nonatomic, getter=isScreenOff) BOOL screenOff; // ivar: _screenOff
@property (readonly, nonatomic) BOOL shouldTapToWake; // ivar: _shouldTapToWake
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer; // ivar: _tapToWakeGestureRecognizer


+(BOOL)isTapToWakeSupported;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)_evaluateEnablement;
-(void)pencilToWakeDidRecognize:(id)arg0 ;
-(void)tapToWakeDidRecognize:(id)arg0 ;


@end


#endif