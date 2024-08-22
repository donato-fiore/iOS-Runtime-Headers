// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXNOTIFICATIONSERVICEEXTENSIONVOIPXPCHOST_H
#define CXNOTIFICATIONSERVICEEXTENSIONVOIPXPCHOST_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, CXNotificationServiceExtensionHostDelegate, CXNotificationServiceExtensionVoIPXPC;

#import <Foundation/Foundation.h>


@interface CXNotificationServiceExtensionVoIPXPCHost : NSObject <NSXPCListenerDelegate, CXNotificationServiceExtensionHostDelegate, CXNotificationServiceExtensionVoIPXPC>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXNotificationServiceExtensionHostDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)notificationServiceExtension:(id)arg0 reply:(id)arg1 ;
-(void)notificationServiceExtensionHost:(id)arg0 didReceiveIncomingMessage:(id)arg1 forBundleIdentifier:(id)arg2 reply:(id)arg3 ;


@end


#endif