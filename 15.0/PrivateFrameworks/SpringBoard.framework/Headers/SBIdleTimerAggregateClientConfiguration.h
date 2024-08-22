// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERAGGREGATECLIENTCONFIGURATION_H
#define SBIDLETIMERAGGREGATECLIENTCONFIGURATION_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIdleTimerTimeoutRange.h"
#import "SBIdleTimerConfigurationDisablesTimerSetting.h"
#import "SBIdleTimerTimeoutPrecedenceSettings.h"

@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding>

 {
    SBIdleTimerTimeoutRange *_resolvedExpirationTimeoutRange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIdleTimerConfigurationDisablesTimerSetting *disableTimerSetting; // ivar: _disableTimerSetting
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *maxExpirationTimeoutSettings; // ivar: _maxExpirationTimeoutSettings
@property (readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *minExpirationTimeoutSettings; // ivar: _minExpirationTimeoutSettings
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)expirationTimeoutIntervalRangeForPrecedence:(NSUInteger)arg0 ;
-(id)resolvedExpirationTimeoutRange;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setDisablesTimerWithPrecedence:(NSUInteger)arg0 ;
-(void)setMaxExpirationTimeout:(CGFloat)arg0 ifLeastForPrecedence:(NSUInteger)arg1 ;
-(void)setMaxExpirationTimeout:(CGFloat)arg0 withPrecedence:(NSUInteger)arg1 ;
-(void)setMinExpirationTimeout:(CGFloat)arg0 ifGreatestForPrecedence:(NSUInteger)arg1 ;
-(void)setMinExpirationTimeout:(CGFloat)arg0 withPrecedence:(NSUInteger)arg1 ;


@end


#endif