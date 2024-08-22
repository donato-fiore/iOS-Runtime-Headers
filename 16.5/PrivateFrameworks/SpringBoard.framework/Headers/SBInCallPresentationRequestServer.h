// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLPRESENTATIONREQUESTSERVER_H
#define SBINCALLPRESENTATIONREQUESTSERVER_H

@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface, BSInvalidatable, OS_dispatch_queue, SBInCallPresentationRequestServerDelegate;

#import <Foundation/Foundation.h>


@interface SBInCallPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface, BSInvalidatable>

 {
    NSMutableArray *_targets;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInCallPresentationRequestServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)activate;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)presentWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif