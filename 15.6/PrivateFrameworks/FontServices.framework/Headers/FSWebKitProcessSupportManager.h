// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSWEBKITPROCESSSUPPORTMANAGER_H
#define FSWEBKITPROCESSSUPPORTMANAGER_H

@class NSString, NSXPCConnection, NSXPCListener;
@protocol FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *hostConnection; // ivar: _hostConnection
@property (retain, nonatomic) NSXPCListener *serverListener; // ivar: _serverListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithXPCEndpoint:(id)arg0 ;
-(void)checkin;
-(void)ping2:(id)arg0 ;
-(void)ping:(id)arg0 ;
-(void)userInstalledFontsInfo:(id)arg0 reply:(id)arg1 ;


@end


#endif