// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSIRIUIPRESENTER_H
#define WFSIRIUIPRESENTER_H

@class NSXPCListenerEndpoint, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WFSiriUIPresenter : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithEndpoint:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;
-(void)executeIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 withNameOverride:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleUserActivity:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)openApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openInteractionInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openUrl:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)punchOutRequestedWithCompletionHandler:(id)arg0 ;
-(void)resumeConnectionIfNecessary;
-(void)showDialogRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)speakTextWithUtterance:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif