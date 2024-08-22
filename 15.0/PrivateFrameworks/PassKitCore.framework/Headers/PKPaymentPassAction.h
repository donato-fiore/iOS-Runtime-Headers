// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPASSACTION_H
#define PKPAYMENTPASSACTION_H

@class NSDictionary, NSString, NSDate, NSURL, NSArray, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKTransitCommutePlan.h"
#import "PKEnteredValueActionItem.h"

@interface PKPaymentPassAction : NSObject <NSSecureCoding>

 {
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    NSString *_title;
}


@property (readonly, copy, nonatomic) NSString *actionDescription; // ivar: _actionDescription
@property (copy, nonatomic) NSString *associatedEnteredValueIdentifier; // ivar: _associatedEnteredValueIdentifier
@property (copy, nonatomic) PKTransitCommutePlan *associatedPlan; // ivar: _associatedPlan
@property (copy, nonatomic) NSString *associatedPlanIdentifier; // ivar: _associatedPlanIdentifier
@property (readonly, copy, nonatomic) NSDate *availableFrom; // ivar: _availableFrom
@property (readonly, nonatomic) CGFloat availableFromOffsetFromUTC; // ivar: _availableFromOffsetFromUTC
@property (readonly, copy, nonatomic) NSDate *availableUntil; // ivar: _availableUntil
@property (readonly, copy, nonatomic) NSString *confirmationTitle; // ivar: _confirmationTitle
@property (readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem; // ivar: _enteredValueItem
@property (readonly, nonatomic) NSURL *externalURL; // ivar: _externalURL
@property (readonly, nonatomic) BOOL featured; // ivar: _featured
@property (readonly, copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly, nonatomic) BOOL hasRemoteContent; // ivar: _hasRemoteContent
@property (readonly, copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isActionAvailable;
@property (readonly, copy, nonatomic) NSString *relevantPropertyIdentifier; // ivar: _relevantPropertyIdentifier
@property (nonatomic) BOOL reverseButtonTitleForLegacySuica; // ivar: _reverseButtonTitleForLegacySuica
@property (readonly, copy, nonatomic) NSArray *selectedActionItems; // ivar: _selectedActionItems
@property (readonly, copy, nonatomic) NSArray *serviceProviderAcceptedNetworks; // ivar: _serviceProviderAcceptedNetworks
@property (readonly, nonatomic) NSUInteger serviceProviderCapabilities; // ivar: _serviceProviderCapabilities
@property (readonly, copy, nonatomic) NSString *serviceProviderCountryCode; // ivar: _serviceProviderCountryCode
@property (readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (readonly, copy, nonatomic) NSSet *serviceProviderSupportedCountries; // ivar: _serviceProviderSupportedCountries
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *unavailableAfterReason; // ivar: _unavailableAfterReason
@property (readonly, copy, nonatomic) NSString *unavailableBeforeReason; // ivar: _unavailableBeforeReason
@property (readonly, nonatomic) NSDictionary *vehicleFunctionActions; // ivar: _vehicleFunctionActions


+(BOOL)supportsSecureCoding;
-(id)_localizableKeys;
-(id)actionUpdatedWithDictionary:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)_processLocalizableStrings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif