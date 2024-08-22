// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSAFARIEXTENSIONSTATEOBSERVER_H
#define WBSSAFARIEXTENSIONSTATEOBSERVER_H

@class WKWebView;

#import <Foundation/Foundation.h>

#import "WBSExtensionsController.h"

@interface WBSSafariExtensionStateObserver : NSObject {
    WKWebView *_webView;
    WBSExtensionsController *_extensionsController;
}




-(BOOL)_shouldObserveExtension:(id)arg0 ;
-(BOOL)_teardownObserverIfNecessary;
-(id)init;
-(id)initWithWebView:(id)arg0 extensionsController:(id)arg1 ;
-(void)_addIDsForExtension:(id)arg0 toSet:(id)arg1 ;
-(void)_addNamesForExtension:(id)arg0 toMap:(id)arg1 ;
-(void)_handleExtensionEnabledStateDidChange:(id)arg0 ;
-(void)_handleExtensionWasAdded:(id)arg0 ;
-(void)_handleExtensionWasRemoved:(id)arg0 ;
-(void)_startObservingExtensionNotifications;
-(void)_stopObservingExtensionNotifications;
-(void)dealloc;
-(void)startObservingExtensionStateChanges;
-(void)stopObservingExtensionStateChanges;


@end


#endif