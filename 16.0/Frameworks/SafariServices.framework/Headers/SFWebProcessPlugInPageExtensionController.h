// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWEBPROCESSPLUGINPAGEEXTENSIONCONTROLLER_H
#define SFWEBPROCESSPLUGINPAGEEXTENSIONCONTROLLER_H

@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SFWebProcessPlugInPageExtensionController : NSObject {
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    _WKRemoteObjectInterface *_extensionControllerInterface;
    NSMutableDictionary *_extensionToScriptWorldMap;
}




-(id)initWithBrowserContextController:(id)arg0 ;
-(void)_clearExtensionControllerInterface;
-(void)_setUpExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)dealloc;
-(void)evaluateJavaScriptForSharingExtension:(id)arg0 extraArguments:(id)arg1 completionHandler:(id)arg2 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg0 arguments:(id)arg1 ;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg0 javaScript:(id)arg1 ;


@end


#endif