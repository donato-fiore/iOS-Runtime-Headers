// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSIRIWORKFLOWRUNNERCLIENT_H
#define WFSIRIWORKFLOWRUNNERCLIENT_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, WFSiriUIPresenterInterface, WFSiriWorkflowRunnerClientDelegate;


#import "WFWorkflowRunnerClient.h"

@interface WFSiriWorkflowRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFSiriUIPresenterInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSiriWorkflowRunnerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListener *dialogRequestListener; // ivar: _dialogRequestListener
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithAutoShortcutIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 ;
-(id)initWithWorkflowName:(id)arg0 executionContext:(NSInteger)arg1 airPlayRouteIDs:(id)arg2 ;
-(void)executeIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 withNameOverride:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleUserActivityData:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)openApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openInteractionInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openUrl:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)punchOutRequestedWithCompletionHandler:(id)arg0 ;
-(void)showDialogRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)speakTextWithUtterance:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif