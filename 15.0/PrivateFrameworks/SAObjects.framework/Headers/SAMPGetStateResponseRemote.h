// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPGETSTATERESPONSEREMOTE_H
#define SAMPGETSTATERESPONSEREMOTE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"
#import "SAMPGetState.h"

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (retain, nonatomic) SAMPGetState *getState;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) CGFloat routeTimeout;


+(id)getStateResponseRemoteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif