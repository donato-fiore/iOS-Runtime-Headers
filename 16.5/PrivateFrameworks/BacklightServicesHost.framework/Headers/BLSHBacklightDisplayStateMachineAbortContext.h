// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTDISPLAYSTATEMACHINEABORTCONTEXT_H
#define BLSHBACKLIGHTDISPLAYSTATEMACHINEABORTCONTEXT_H

@class NSString;
@protocol BLSHWatchdogAbortContext;

#import <Foundation/Foundation.h>


@interface BLSHBacklightDisplayStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext>

 {
    NSInteger _displayMode;
    NSInteger _transitioningToDisplayMode;
    NSInteger _lastSteadyStateDisplayMode;
    NSInteger _backlightFactor;
    BOOL _isFlipbookEnabled;
    BOOL _showingBlankingWindow;
    BOOL _isCABlanked;
    BOOL _displayIsOff;
    BOOL _sleepRequested;
    BOOL _sleepImminent;
    CGFloat _timeInSleepImminent;
}


@property (readonly, nonatomic) NSUInteger abortReason; // ivar: _abortReason
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent; // ivar: _hasEnsureFlipbookCurrent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void payload; // ivar: _payload
@property (readonly, nonatomic) unsigned int payloadSize; // ivar: _payloadSize
@property (readonly) Class superclass;


-(id)initWithDisplayMode:(NSInteger)arg0 transitioningToDisplayMode:(NSInteger)arg1 lastSteadyStateDisplayMode:(NSInteger)arg2 isFlipbookEnabled:(BOOL)arg3 showingBlankingWindow:(BOOL)arg4 backlightFactor:(NSInteger)arg5 isCABlanked:(BOOL)arg6 displayIsOff:(BOOL)arg7 sleepRequested:(BOOL)arg8 sleepImminent:(BOOL)arg9 timeInSleepImminent:(CGFloat)arg10 hasEnsureFlipbookCurrent:(BOOL)arg11 ;
-(void)_populatePayload;
-(void)dealloc;
-(void)setSleepImminentAbortReason;


@end


#endif