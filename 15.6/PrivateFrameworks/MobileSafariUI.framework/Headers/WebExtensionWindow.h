// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBEXTENSIONWINDOW_H
#define WEBEXTENSIONWINDOW_H

@class NSString, NSArray;
@protocol WBSWebExtensionWindow, WBSWebExtensionTab;

#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface WebExtensionWindow : NSObject <WBSWebExtensionWindow>



@property (readonly, nonatomic) NSObject<WBSWebExtensionTab> *activeWebExtensionTab;
@property (readonly, weak, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idForWebExtensions; // ivar: _idForWebExtensions
@property (readonly, nonatomic) BOOL isFocused;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL isPrivateWindow; // ivar: _isPrivateWindow
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *webExtensionTabs;
@property (readonly, nonatomic) CGRect webExtensionWindowGeometry;
@property (readonly, copy, nonatomic) NSString *webExtensionWindowState;
@property (readonly, copy, nonatomic) NSString *webExtensionWindowType;


-(id)initWithBrowserController:(id)arg0 isPrivateWindow:(BOOL)arg1 ;
-(void)createNewTabAtIndex:(id)arg0 url:(id)arg1 makeActive:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)validateToolbarItemForExtension:(id)arg0 ;


@end


#endif