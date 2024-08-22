// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVAGENTPREVIEWNONUISERVICESERVERCONNECTION_H
#define UVAGENTPREVIEWNONUISERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection, UVAgentPreviewNonUIServiceProtocol;


#import "UVBSConnection.h"

@interface UVAgentPreviewNonUIServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentPreviewNonUIServiceProtocol>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activate;
-(void)performUpdate:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendEndpoint:(id)arg0 context:(id)arg1 contentIdentifier:(id)arg2 ;


@end


#endif