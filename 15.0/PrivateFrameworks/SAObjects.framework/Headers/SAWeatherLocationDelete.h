// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERLOCATIONDELETE_H
#define SAWEATHERLOCATIONDELETE_H



#import "SADomainCommand.h"
#import "SAWeatherLocation.h"

@interface SAWeatherLocationDelete : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;


+(id)locationDelete;
+(id)locationDeleteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif