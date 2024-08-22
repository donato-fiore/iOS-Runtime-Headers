// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFACTIVITYCONDITION_H
#define MFACTIVITYCONDITION_H

@class EFCancelationToken, EFObservable, NSString;
@protocol MFActivityConditionBuilder, MFActivityCondition, EFScheduler;

#import <Foundation/Foundation.h>


@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition>



@property (retain, nonatomic) EFCancelationToken *cancellationToken; // ivar: _cancellationToken
@property (readonly, nonatomic) EFObservable *conditionsObservable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxThermalPressureLevel; // ivar: _maxThermalPressureLevel
@property (nonatomic) float minBatteryLevel; // ivar: _minBatteryLevel
@property (nonatomic) BOOL requireExternalPower; // ivar: _requireExternalPower
@property (nonatomic) BOOL requireLowPowerModeDisabled; // ivar: _requireLowPowerModeDisabled
@property (nonatomic) BOOL requireScreenLocked; // ivar: _requireScreenLocked
@property (nonatomic) BOOL requireWiFi; // ivar: _requireWiFi
@property (nonatomic, getter=isSatisfied) BOOL satisfied; // ivar: _satisfied
@property (retain, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


+(id)alwaysSatisfiedCondition;
-(BOOL)_isValidConfiguration;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(void)dealloc;


@end


#endif