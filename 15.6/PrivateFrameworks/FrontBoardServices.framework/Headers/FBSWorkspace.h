// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSWORKSPACE_H
#define FBSWORKSPACE_H

@class NSMutableDictionary, BSServiceConnectionEndpointMonitor, NSString, BSServiceConnectionEndpoint, NSArray;
@protocol BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding, FBSWorkspaceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSSerialQueue.h"

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding>

 {
    FBSSerialQueue *_callOutQueue;
    id<FBSWorkspaceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint; // ivar: _defaultShellEndpoint
@property (readonly, nonatomic) NSObject<FBSWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *scenes;
@property (readonly) Class superclass;


+(id)_sharedWorkspaceIfExists;
+(void)_registerBlockForWorkspaceCreation:(id)arg0 ;
-(id)_initWithOptions:(id)arg0 ;
-(id)_initWithSerialQueue:(id)arg0 ;
-(id)_queue_scenesClientForEndpoint:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithSerialQueue:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_activate;
-(void)_activate:(BOOL)arg0 ;
-(void)_calloutQueue_executeCalloutFromSource:(id)arg0 withBlock:(id)arg1 ;
-(void)_queue_registerSource:(id)arg0 ;
-(void)_queue_unregisterSource:(id)arg0 ;
-(void)_registerSource:(id)arg0 ;
-(void)_registerSourceEndpoint:(id)arg0 ;
-(void)_unregisterSource:(id)arg0 ;
-(void)dealloc;
-(void)enumerateScenesWithBlock:(id)arg0 ;
-(void)monitor:(id)arg0 didReceiveEndpoint:(id)arg1 ;
-(void)monitor:(id)arg0 willLoseEndpoint:(id)arg1 ;
-(void)requestDestructionOfScene:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSceneCreationWithIdentifier:(id)arg0 initialClientSettings:(id)arg1 completion:(id)arg2 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg0 completion:(id)arg1 ;
-(void)requestSceneFromEndpoint:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;


@end


#endif