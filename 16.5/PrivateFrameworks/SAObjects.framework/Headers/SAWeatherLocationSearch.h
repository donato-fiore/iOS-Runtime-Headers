// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERLOCATIONSEARCH_H
#define SAWEATHERLOCATIONSEARCH_H

@class NSURL, NSString;


#import "SADomainCommand.h"

@interface SAWeatherLocationSearch : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *locationId;


+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif