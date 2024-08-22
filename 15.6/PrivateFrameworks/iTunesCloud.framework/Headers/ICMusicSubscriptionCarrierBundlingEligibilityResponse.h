// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONCARRIERBUNDLINGELIGIBILITYRESPONSE_H
#define ICMUSICSUBSCRIPTIONCARRIERBUNDLINGELIGIBILITYRESPONSE_H

@class NSString, NSError, NSURL;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject

@property (readonly, nonatomic) NSString *SMSSessionIdentifier; // ivar: _SMSSessionIdentifier
@property (readonly, nonatomic) NSInteger carrierBundlingStatusType; // ivar: _carrierBundlingStatusType
@property (readonly, nonatomic) NSString *cellularProviderName; // ivar: _cellularProviderName
@property (readonly, nonatomic) CGFloat delayInterval; // ivar: _delayInterval
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFamilySubscription) BOOL familySubscription; // ivar: _familySubscription
@property (readonly, nonatomic) NSString *headerEnrichmentMessage; // ivar: _headerEnrichmentMessage
@property (readonly, nonatomic) NSString *headerEnrichmentSessionIdentifier; // ivar: _headerEnrichmentSessionIdentifier
@property (readonly, nonatomic) NSURL *headerEnrichmentURL; // ivar: _headerEnrichmentURL
@property (readonly, nonatomic) BOOL needsHeaderEnrichment; // ivar: _needsHeaderEnrichment
@property (readonly, nonatomic) BOOL needsSilentSMS; // ivar: _needsSilentSMS
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSString *silentSMSMessage; // ivar: _silentSMSMessage
@property (readonly, nonatomic) NSString *silentSMSNumber; // ivar: _silentSMSNumber
@property (readonly, nonatomic) BOOL wantsDelayedRetry; // ivar: _wantsDelayedRetry


-(id)initWithEligibilityDictionary:(id)arg0 cellularProviderName:(id)arg1 phoneNumber:(id)arg2 ;


@end


#endif