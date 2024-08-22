// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPRESSSEQUENCERECOGNIZER_H
#define SBPRESSSEQUENCERECOGNIZER_H

@class BSAbsoluteMachTimer, NSMutableArray;
@protocol SBPressSequenceRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "SBPressTuple.h"
#import "SBPressSequenceValidator.h"

@interface SBPressSequenceRecognizer : NSObject {
    CGFloat _lastPressDownEvent;
    CGFloat _lastPressUpEvent;
    BSAbsoluteMachTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
}


@property (weak, nonatomic) NSObject<SBPressSequenceRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger numberOfPresses; // ivar: _numberOfPresses
@property (readonly, nonatomic) SBPressSequenceValidator *validator; // ivar: _validator


-(CGFloat)_watchdogTimeIntervalFromDelay:(CGFloat)arg0 ;
-(id)init;
-(id)initWithValidator:(id)arg0 numberOfPresses:(NSUInteger)arg1 ;
-(void)_complete;
-(void)_handlePressDownWithTimestamp:(CGFloat)arg0 ;
-(void)_handlePressUpWithTimestamp:(CGFloat)arg0 ;
-(void)_reset;
-(void)_resetAfterDelay:(CGFloat)arg0 ;
-(void)_resetAndNotify;
-(void)_resetWatchdogIfNecessary;
-(void)dealloc;
-(void)registerPressDownWithTimestamp:(CGFloat)arg0 ;
-(void)registerPressUpWithTimestamp:(CGFloat)arg0 ;
-(void)resetWithNewValidator:(id)arg0 numberOfPresses:(NSUInteger)arg1 ;


@end


#endif