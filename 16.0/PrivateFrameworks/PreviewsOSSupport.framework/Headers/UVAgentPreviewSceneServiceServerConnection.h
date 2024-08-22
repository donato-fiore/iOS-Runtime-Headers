// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVAGENTPREVIEWSCENESERVICESERVERCONNECTION_H
#define UVAGENTPREVIEWSCENESERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection, UVAgentPreviewSceneServiceProtocol;


#import "UVBSConnection.h"

@interface UVAgentPreviewSceneServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentPreviewSceneServiceProtocol>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;


-(void)activate;
-(void)generateStaticOutput:(id)arg0 ;
-(void)initializeWithClientContext:(id)arg0 ;
-(void)performUpdate:(id)arg0 sceneContext:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendEndpoint:(id)arg0 context:(id)arg1 contentIdentifier:(id)arg2 ;


@end


#endif