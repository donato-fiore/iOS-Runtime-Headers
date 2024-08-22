// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVDAEMONSERVICECLIENTCONNECTION_H
#define UVDAEMONSERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection, UVDaemonServiceProtocol;


#import "UVBSConnection.h"

@interface UVDaemonServiceClientConnection : UVBSConnection <UVBSClientConnection, UVDaemonServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)create:(*id)arg0 ;
-(void)activate;
-(void)copyURLToAgentIdentifierPayload:(id)arg0 usingData:(id)arg1 replyHandler:(id)arg2 ;
-(void)grantExecutePermissionToAgentIdentifierPayload:(id)arg0 usingData:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendPreviewServiceMessage:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif