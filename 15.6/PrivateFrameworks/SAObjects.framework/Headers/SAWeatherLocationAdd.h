// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAWEATHERLOCATIONADD_H
#define SAWEATHERLOCATIONADD_H



#import "SADomainCommand.h"
#import "SAWeatherLocation.h"

@interface SAWeatherLocationAdd : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;


+(id)locationAdd;
+(id)locationAddWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif