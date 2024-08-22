// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFLOWPRESENTER_H
#define AAFLOWPRESENTER_H

@class NSString, SBSRemoteAlertHandle, NSXPCListener;
@protocol SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, AAFlowPresenterProtocol, AAFlowPresenterHostProtocol;

#import <Foundation/Foundation.h>


@interface AAFlowPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, AAFlowPresenterProtocol, AAFlowPresenterHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *presentationCompletion; // ivar: presentationCompletion
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle
@property (retain, nonatomic) NSXPCListener *remoteListener; // ivar: _remoteListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)_callCompletionBlockWithError:(id)arg0 ;
-(void)dealloc;
-(void)flowFinishedWithError:(id)arg0 completion:(id)arg1 ;
-(void)launchProcessWithUserInfo:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif