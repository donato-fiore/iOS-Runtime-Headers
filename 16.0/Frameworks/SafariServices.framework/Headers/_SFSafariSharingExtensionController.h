// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSAFARISHARINGEXTENSIONCONTROLLER_H
#define _SFSAFARISHARINGEXTENSIONCONTROLLER_H

@class WKWebView;
@protocol SFSharingExtensionWebProcessController;

#import <Foundation/Foundation.h>


@interface _SFSafariSharingExtensionController : NSObject {
    WKWebView *_webView;
    id<SFSharingExtensionWebProcessController> *_extensionControllerProxy;
}




-(id)_extensionControllerProxy;
-(id)initWithWebView:(id)arg0 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg0 arguments:(id)arg1 ;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg0 javaScript:(id)arg1 ;
-(void)runJavaScriptForSharingExtension:(id)arg0 extraArguments:(id)arg1 completion:(id)arg2 ;


@end


#endif