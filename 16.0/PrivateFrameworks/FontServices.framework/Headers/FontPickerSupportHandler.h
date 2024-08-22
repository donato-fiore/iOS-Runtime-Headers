// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FONTPICKERSUPPORTHANDLER_H
#define FONTPICKERSUPPORTHANDLER_H

@class NSXPCConnection, NSString, NSXPCListener;
@protocol FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSXPCListener *listenerForFontServicesDaemon; // ivar: _listenerForFontServicesDaemon
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)pathsContainsFontAsset:(id)arg0 ;
-(id)init;
-(void)activateFontsForFontPickerClient:(id)arg0 reply:(id)arg1 ;
-(void)checkin:(id)arg0 ;
-(void)ping:(id)arg0 reply:(id)arg1 ;
-(void)registeredFontsChanged:(id)arg0 ;


@end


#endif