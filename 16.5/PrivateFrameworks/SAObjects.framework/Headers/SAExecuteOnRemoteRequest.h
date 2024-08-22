// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAEXECUTEONREMOTEREQUEST_H
#define SAEXECUTEONREMOTEREQUEST_H

@class NSData;


#import "SABaseClientBoundCommand.h"
#import "SARemoteDevice.h"

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) BOOL requiresResponseFromRemote;
@property (copy, nonatomic) NSData *serializedCommand;
@property (nonatomic) BOOL suppressResponse;
@property (nonatomic) BOOL useGuaranteedDelivery;


+(id)executeOnRemoteRequest;
+(id)executeOnRemoteRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif