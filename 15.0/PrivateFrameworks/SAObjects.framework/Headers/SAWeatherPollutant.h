// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERPOLLUTANT_H
#define SAWEATHERPOLLUTANT_H

@class NSNumber, NSString;


#import "SADomainObject.h"

@interface SAWeatherPollutant : SADomainObject

@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *name;


+(id)pollutant;
+(id)pollutantWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif