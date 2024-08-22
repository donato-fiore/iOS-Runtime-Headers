// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACLOCKOBJECT_H
#define SACLOCKOBJECT_H

@class NSNumber, NSString;


#import "SADomainObject.h"

@interface SAClockObject : SADomainObject

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif