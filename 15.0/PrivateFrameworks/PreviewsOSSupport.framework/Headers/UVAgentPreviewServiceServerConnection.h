// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVAGENTPREVIEWSERVICESERVERCONNECTION_H
#define UVAGENTPREVIEWSERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection, UVAgentPreviewServiceProtocol;


#import "UVBSConnection.h"

@interface UVAgentPreviewServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentPreviewServiceProtocol>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;


-(void)activate;
-(void)initializeWithClientContext:(id)arg0 ;
-(void)sendMessageType:(id)arg0 messagePayload:(id)arg1 fence:(id)arg2 reply:(id)arg3 ;
-(void)sendMessageType:(id)arg0 messagePayload:(id)arg1 reply:(id)arg2 ;


@end


#endif