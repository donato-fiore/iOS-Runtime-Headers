// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUIPRESENTER_H
#define WFUIPRESENTER_H

@class NSXPCListenerEndpoint, NSXPCConnection;
@protocol WFUIPresenterDelegate, WFUIPresenterInterface;

#import <Foundation/Foundation.h>


@interface WFUIPresenter : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSObject<WFUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSObject<WFUIPresenterInterface> *localPresenter; // ivar: _localPresenter
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)defaultPresenter;
-(BOOL)showWebPage:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithLocalPresenter:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;
-(void)beginPersistentModeWithRunningContext:(id)arg0 attributions:(id)arg1 completionHandler:(id)arg2 ;
-(void)completePersistentModeWithSuccess:(BOOL)arg0 runningContext:(id)arg1 completion:(id)arg2 ;
-(void)dismissPresentedContentForRunningContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeConnectionIfNecessary;
-(void)showDialogRequest:(id)arg0 runningContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif