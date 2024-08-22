// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKCOMPANIONVIEWSERVICECONNECTIONSERVERSERVICE_H
#define NPKCOMPANIONVIEWSERVICECONNECTIONSERVERSERVICE_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, NPKCompanionViewServiceConnectionServerDelegate, NPKCompanionViewServiceConnectionServerServiceDelegate;

#import <Foundation/Foundation.h>


@interface NPKCompanionViewServiceConnectionServerService : NSObject <NSXPCListenerDelegate, NPKCompanionViewServiceConnectionServerDelegate>

 {
    NSXPCListener *_xpcListener;
    NSMutableSet *_connectionServers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKCompanionViewServiceConnectionServerServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_addServer:(id)arg0 ;
-(void)_removeServer:(id)arg0 ;
-(void)dealloc;
-(void)handleCompanionItemSelectionRequestDidCancelForRequestIdentifier:(id)arg0 ;
-(void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)arg0 serviceProviderData:(id)arg1 forRequestIdentifier:(id)arg2 ;
-(void)handleCompanionValueEntryRequestDidCancelForRequestIdentifier:(id)arg0 ;
-(void)handleCompanionValueEntryRequestFinishedWithCurrencyAmount:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)viewServiceConnectionServer:(id)arg0 didRequestPresentRemotePassItemSelectionViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id)arg3 ;
-(void)viewServiceConnectionServer:(id)arg0 didRequestPresentRemotePassValueEntryViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id)arg3 ;


@end


#endif