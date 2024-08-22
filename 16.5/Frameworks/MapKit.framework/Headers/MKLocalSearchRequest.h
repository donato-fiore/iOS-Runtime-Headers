// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOCALSEARCHREQUEST_H
#define MKLOCALSEARCHREQUEST_H

@class NSString, CLLocation, NSArray;
@protocol NSCopying, GEOCompletionItem;

#import <Foundation/Foundation.h>

#import "_MKLocalSearchExternalTransitLookupParameters.h"
#import "_MKLocalSearchMerchantParameters.h"
#import "MKPointOfInterestFilter.h"

@interface MKLocalSearchRequest : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL _hasRegion; // ivar: _hasRegion
@property (nonatomic, getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:) BOOL allowPhoneNumberLookupUsingCellular; // ivar: _allowPhoneNumberLookupUsingCellular
@property (retain, nonatomic, getter=_canonicalSearchString, setter=_setCanonicalSearchString:) NSString *canonicalSearchString; // ivar: _canonicalSearchString
@property (retain, nonatomic, getter=_contactsDataString, setter=_setContactsDataString:) NSString *contactsDataString; // ivar: _contactsDataString
@property (retain, nonatomic, getter=_deviceLocation, setter=_setDeviceLocation:) CLLocation *deviceLocation; // ivar: _deviceLocation
@property (retain, nonatomic, getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters; // ivar: _externalTransitLookupParameters
@property (readonly, nonatomic) NSObject<GEOCompletionItem> *geoCompletionItem; // ivar: _geoCompletionItem
@property (nonatomic) BOOL hasSentFeedbackForCompletion; // ivar: _hasSentFeedbackForCompletion
@property (retain, nonatomic, getter=_merchantParameters, setter=_setMerchantParameters:) _MKLocalSearchMerchantParameters *merchantParameters; // ivar: _merchantParameters
@property (retain, nonatomic, getter=_muids, setter=_setMuids:) NSArray *muids; // ivar: _muids
@property (copy, nonatomic) NSString *naturalLanguageQuery; // ivar: _naturalLanguageQuery
@property (retain, nonatomic, getter=_phoneNumbers, setter=_setPhoneNumbers:) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic) ? region; // ivar: _region
@property (nonatomic, getter=_resultProviderID, setter=_setResultProviderID:) int resultProviderID; // ivar: _resultProviderID
@property (nonatomic) NSUInteger resultTypes; // ivar: _resultTypes


+(id)searchRequestWithCompletion:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCompletion:(id)arg0 ;
-(id)initWithMapsURL:(id)arg0 ;
-(id)initWithNaturalLanguageQuery:(id)arg0 ;
-(id)initWithNaturalLanguageQuery:(id)arg0 region:(struct ? )arg1 ;


@end


#endif