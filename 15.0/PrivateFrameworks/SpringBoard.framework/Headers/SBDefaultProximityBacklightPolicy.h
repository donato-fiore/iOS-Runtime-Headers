// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEFAULTPROXIMITYBACKLIGHTPOLICY_H
#define SBDEFAULTPROXIMITYBACKLIGHTPOLICY_H

@class NSString;
@protocol SBProximityBacklightPolicy, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBIdleTimerGlobalCoordinator.h"

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy>

 {
    SBBacklightController *_backlightController;
    id<BSInvalidatable> *_idleTimerDisableAssertion;
    BOOL _scheduled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIdleTimerGlobalCoordinator *idleTimerGlobalCoordinator; // ivar: _idleTimerGlobalCoordinator
@property (readonly) Class superclass;


-(id)initWithBacklightController:(id)arg0 ;
-(void)_backlightWillUndim:(id)arg0 ;
-(void)_cancelScheduledBacklightFactorToZero;
-(void)_restoreBacklightFactor;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(CGFloat)arg0 ;
-(void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
-(void)_turnBacklightOff;
-(void)dealloc;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;


@end


#endif