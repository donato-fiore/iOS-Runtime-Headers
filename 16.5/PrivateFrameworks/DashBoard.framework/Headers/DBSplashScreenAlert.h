// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSPLASHSCREENALERT_H
#define DBSPLASHSCREENALERT_H

@class SBSRemoteAlertHandle, NSXPCConnection, NSString, NSXPCListener;
@protocol DBSplashScreenDismissalServer, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface DBSplashScreenAlert : NSObject <DBSplashScreenDismissalServer, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, BSInvalidatable>



@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle; // ivar: _alertHandle
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_showAlertIfNecessary;
-(void)connect;
-(void)invalidate;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif