// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHGEOSERVICESDATA_H
#define SALOCALSEARCHGEOSERVICESDATA_H

@class NSArray, NSData, NSString;


#import "SADomainObject.h"

@interface SALocalSearchGeoServicesData : SADomainObject

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSData *clientMetadata;
@property (copy, nonatomic) NSString *environment;


+(id)geoServicesData;
+(id)geoServicesDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif