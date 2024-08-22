// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLOGINPRESENTER_H
#define AKLOGINPRESENTER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, AKLoginPresenterHostInterfaceProtocol;

#import <Foundation/Foundation.h>


@interface AKLoginPresenter : NSObject <NSXPCListenerDelegate, AKLoginPresenterHostInterfaceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *presentationCompletion; // ivar: _presentationCompletion
@property (retain, nonatomic) NSXPCListener *remoteListener; // ivar: _remoteListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)_callCompletionWithResults:(id)arg0 password:(id)arg1 additionalData:(id)arg2 error:(id)arg3 ;
-(void)authenticationRequestFinishedWithResults:(id)arg0 password:(id)arg1 additionalData:(id)arg2 error:(id)arg3 ;
-(void)presentOOPLoginUIWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif