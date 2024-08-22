// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACLOCKSEARCH_H
#define SACLOCKSEARCH_H

@class NSNumber, NSString, NSURL;


#import "SADomainCommand.h"

@interface SAClockSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif