// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERREQUESTCONFIGURATION_H
#define SBIDLETIMERREQUESTCONFIGURATION_H

@class ITIdleTimerConfiguration, NSNumber;



@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration

@property (retain, nonatomic, getter=_boxed_maxExpirationTimeout, setter=_setBoxed_maxExpirationTimeout:) NSNumber *boxed_maxExpirationTimeout; // ivar: _boxed_maxExpirationTimeout
@property (retain, nonatomic, getter=_boxed_minExpirationTimeout, setter=_setBoxed_minExpirationTimeout:) NSNumber *boxed_minExpirationTimeout; // ivar: _boxed_minExpirationTimeout
@property (readonly, nonatomic) BOOL hasMaxExpirationTimeout;
@property (readonly, nonatomic) BOOL hasMinExpirationTimeout;
@property (readonly, nonatomic) NSUInteger idleEventMask;
@property (nonatomic) CGFloat maxExpirationTimeout;
@property (nonatomic) CGFloat minExpirationTimeout;
@property (nonatomic) NSUInteger precedence; // ivar: _precedence


+(id)configurationWithIdleEventHandler:(id)arg0 ;
+(id)configurationWithMaximumExpirationTimeout:(CGFloat)arg0 ;
+(id)configurationWithMinimumExpirationTimeout:(CGFloat)arg0 ;
+(id)configurationWithMinimumExpirationTimeout:(CGFloat)arg0 maximumExpirationTimeout:(CGFloat)arg1 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setIdleEventHandler:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif