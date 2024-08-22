// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHREMOTECONFIGURATION_H
#define SHREMOTECONFIGURATION_H

@class AMSBag, AMSBagValue, ICLightweightMusicSubscriptionStatusRequest;

#import <Foundation/Foundation.h>

#import "SHMusicSubscriptionStatus.h"

@interface SHRemoteConfiguration : NSObject

@property (retain, nonatomic) AMSBag *amsBag; // ivar: _amsBag
@property (retain, nonatomic) AMSBagValue *campaignTokenBagValue; // ivar: _campaignTokenBagValue
@property (retain, nonatomic) AMSBagValue *defaultValuesBagValue; // ivar: _defaultValuesBagValue
@property (retain, nonatomic) AMSBagValue *endpointsBagValue; // ivar: _endpointsBagValue
@property (retain, nonatomic) AMSBagValue *externalHostBagValue; // ivar: _externalHostBagValue
@property (retain, nonatomic) AMSBagValue *featureFlagsBagValue; // ivar: _featureFlagsBagValue
@property (retain, nonatomic) AMSBagValue *internalHostBagValue; // ivar: _internalHostBagValue
@property (retain, nonatomic) AMSBagValue *languageTagBagValue; // ivar: _languageTagBagValue
@property (retain, nonatomic) SHMusicSubscriptionStatus *musicSubscriptionStatus; // ivar: _musicSubscriptionStatus
@property (retain, nonatomic) AMSBagValue *shazamOfferAPIEndpointsBagValue; // ivar: _shazamOfferAPIEndpointsBagValue
@property (retain, nonatomic) AMSBagValue *shazamOfferAPIHostsBagValue; // ivar: _shazamOfferAPIHostsBagValue
@property (retain, nonatomic) ICLightweightMusicSubscriptionStatusRequest *subscriptionRequest; // ivar: _subscriptionRequest


+(id)sharedInstance;
-(id)initWithBag:(id)arg0 ;
-(void)campaignTokenWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)defaultValuesWithCompletion:(id)arg0 ;
-(void)didChangeMusicSubscriptionStatus:(id)arg0 ;
-(void)endpointsWithCompletion:(id)arg0 ;
-(void)featureFlagsWithCompletion:(id)arg0 ;
-(void)fetchMusicSubscriptionStatus;
-(void)hostForClientType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)populateRemoteConfiguration;
-(void)shazamOfferAPIHostWithCompletion:(id)arg0 ;
-(void)shazamOfferAPIURLPathWithCompletion:(id)arg0 ;


@end


#endif