// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHREMOTECONFIGURATION_H
#define SHREMOTECONFIGURATION_H

@class AMSBag, AMSBagValue;

#import <Foundation/Foundation.h>

#import "SHFeatureFlags.h"

@interface SHRemoteConfiguration : NSObject

@property (retain, nonatomic) AMSBag *amsBag; // ivar: _amsBag
@property (retain, nonatomic) AMSBagValue *campaignTokenBagValue; // ivar: _campaignTokenBagValue
@property (retain, nonatomic) AMSBagValue *defaultValuesBagValue; // ivar: _defaultValuesBagValue
@property (retain, nonatomic) AMSBagValue *endpointsBagValue; // ivar: _endpointsBagValue
@property (retain, nonatomic) AMSBagValue *externalHostBagValue; // ivar: _externalHostBagValue
@property (retain, nonatomic) SHFeatureFlags *featureFlags; // ivar: _featureFlags
@property (retain, nonatomic) AMSBagValue *featureFlagsBagValue; // ivar: _featureFlagsBagValue
@property (retain, nonatomic) AMSBagValue *insightsBagValue; // ivar: _insightsBagValue
@property (retain, nonatomic) AMSBagValue *internalHostBagValue; // ivar: _internalHostBagValue
@property (retain, nonatomic) AMSBagValue *languageTagBagValue; // ivar: _languageTagBagValue


+(id)sharedInstance;
-(id)initWithBag:(id)arg0 ;
-(void)campaignTokenWithCompletion:(id)arg0 ;
-(void)defaultValuesWithCompletion:(id)arg0 ;
-(void)endpointsWithCompletion:(id)arg0 ;
-(void)hostForClientType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)insightsWithCompletion:(id)arg0 ;
-(void)populateFeatureFlags;
-(void)populateRemoteConfiguration;


@end


#endif