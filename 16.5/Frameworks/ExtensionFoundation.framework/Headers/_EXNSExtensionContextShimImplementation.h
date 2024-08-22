// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXNSEXTENSIONCONTEXTSHIMIMPLEMENTATION_H
#define _EXNSEXTENSIONCONTEXTSHIMIMPLEMENTATION_H

@class NSUUID, NSXPCConnection, NSString, NSArray;
@protocol _NSExtensionContextInternalImplementation, _EXNSExtensionShimExtensionXPCProtocol;

#import <Foundation/Foundation.h>

#import "_EXNSExtensionShimExtension.h"
#import "_EXSceneSession.h"

@interface _EXNSExtensionContextShimImplementation : NSObject <_NSExtensionContextInternalImplementation, _EXNSExtensionShimExtensionXPCProtocol>



@property (readonly, copy) NSUUID *_UUID; // ivar: _UUID
@property (retain) id *__principalObject; // ivar: __principalObject
@property (readonly) NSXPCConnection *_auxiliaryConnection;
@property (readonly) ? _extensionHostAuditToken; // ivar: _extensionHostAuditToken
@property (readonly) id *_principalObject;
@property (copy, setter=_setRequestCleanUpBlock:) id *_requestCleanUpBlock; // ivar: _requestCleanUpBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) _EXNSExtensionShimExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *inputItems;
@property (weak) _EXSceneSession *sceneSession; // ivar: _sceneSession
@property (readonly) Class superclass;


+(id)makeContextWithSceneSession:(id)arg0 ;
-(BOOL)shoudAcceptConnection:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 extensionContext:(id)arg3 ;
-(id)initWithSceneSession:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)beginContextRequest:(id)arg0 endpoint:(id)arg1 reply:(id)arg2 ;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeRequestReturningItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif