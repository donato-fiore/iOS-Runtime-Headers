// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUILAUNCHTVREMOTE_H
#define SAUILAUNCHTVREMOTE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUILaunchTVRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteId;


+(id)launchTVRemote;
+(id)launchTVRemoteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif