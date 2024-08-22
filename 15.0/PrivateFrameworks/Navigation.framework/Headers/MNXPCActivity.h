// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNXPCACTIVITY_H
#define MNXPCACTIVITY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MNXPCActivity : NSObject {
    id *_codeBlock;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger networkRequirements; // ivar: _networkRequirements
@property (readonly, nonatomic) NSUInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, nonatomic) BOOL repeat; // ivar: _repeat
@property (readonly, nonatomic) BOOL runOnBattery; // ivar: _runOnBattery
@property (readonly, nonatomic) NSDate *scheduledDate; // ivar: _scheduledDate
@property (readonly, nonatomic) BOOL shouldWakeDevice; // ivar: _shouldWakeDevice
@property (readonly, nonatomic) CGFloat tolerance; // ivar: _tolerance
@property (readonly, nonatomic) BOOL useCoreDuetPowerBudgeting; // ivar: _useCoreDuetPowerBudgeting


+(void)checkInActivity:(id)arg0 codeBlock:(id)arg1 ;
-(BOOL)_needsNetworkRequirement:(NSUInteger)arg0 ;
-(CGFloat)remainingTime;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 repeat:(BOOL)arg1 shouldWakeDevice:(BOOL)arg2 useCoreDuetPowerBudgeting:(BOOL)arg3 runOnBattery:(BOOL)arg4 tolerance:(CGFloat)arg5 qualityOfService:(NSUInteger)arg6 networkRequirements:(NSUInteger)arg7 ;
-(void)invalidate;
-(void)scheduleForDate:(id)arg0 codeBlock:(id)arg1 ;


@end


#endif