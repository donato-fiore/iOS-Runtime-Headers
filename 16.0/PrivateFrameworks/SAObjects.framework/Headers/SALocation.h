// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCATION_H
#define SALOCATION_H

@class NSNumber, NSString, NSArray, NSData;
@protocol SAAceComparable;


#import "SADomainObject.h"
#import "SADistance.h"

@interface SALocation : SADomainObject <SAAceComparable>



@property (copy, nonatomic) NSNumber *accuracy;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entryPoints;
@property (copy, nonatomic) NSData *forwardGeoData;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *regionType;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSNumber *travelDistance;
@property (copy, nonatomic) NSNumber *travelTime;


+(id)location;
+(id)locationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif