// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVAGENTCONTROLSERVICESERVERCONNECTION_H
#define UVAGENTCONTROLSERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection, UVAgentControlServiceProtocol;


#import "UVBSConnection.h"

@interface UVAgentControlServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentControlServiceProtocol>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activate;
-(void)connectMessagePipeWithEndpoint:(id)arg0 ;
-(void)copyURLWithURLWrapperData:(id)arg0 reply:(id)arg1 ;
-(void)createPreviewAgentWithEndpoint:(id)arg0 forSceneIdentifier:(id)arg1 ;
-(void)grantExecutePermissionWithURLWrapperData:(id)arg0 reply:(id)arg1 ;


@end


#endif