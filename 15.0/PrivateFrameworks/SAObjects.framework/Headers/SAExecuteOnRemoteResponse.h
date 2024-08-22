// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAEXECUTEONREMOTERESPONSE_H
#define SAEXECUTEONREMOTERESPONSE_H

@class NSString;
@protocol SAServerBoundCommand, SAAceCommand;


#import "SABaseCommand.h"
#import "SARemoteDevice.h"

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) BOOL responseFromRemote;
@property (retain, nonatomic) NSObject<SAAceCommand> *result;
@property (readonly) Class superclass;


+(id)executeOnRemoteResponse;
+(id)executeOnRemoteResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif