// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DELETEAPPFONTSDIALOGHANDLER_H
#define DELETEAPPFONTSDIALOGHANDLER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, FontInstallViewServiceProtocol;

#import <Foundation/Foundation.h>


@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)doneWithDeleteAppFonts:(BOOL)arg0 ;
-(void)showDialogWithUserInfo:(id)arg0 ;


@end


#endif