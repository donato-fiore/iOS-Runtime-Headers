// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGSETAIRPLAYROUTE_H
#define SASETTINGSETAIRPLAYROUTE_H

@class NSString;


#import "SASettingCommand.h"

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *routeType;


+(id)setAirPlayRoute;
+(id)setAirPlayRouteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif