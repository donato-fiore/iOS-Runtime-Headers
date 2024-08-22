// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSCRIPTMESSAGE_H
#define WKSCRIPTMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WKFrameInfo.h"
#import "WKWebView.h"
#import "WKContentWorld.h"

@interface WKScriptMessage : NSObject {
    RetainPtr<id> _body;
    WeakObjCPtr<WKWebView> _webView;
    RetainPtr<WKFrameInfo> _frameInfo;
    RetainPtr<NSString> _name;
    RetainPtr<WKContentWorld> _world;
}


@property (readonly, copy, nonatomic) id *body;
@property (readonly, copy, nonatomic) WKFrameInfo *frameInfo;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKContentWorld *world;


-(id)_initWithBody:(id)arg0 webView:(id)arg1 frameInfo:(id)arg2 name:(id)arg3 world:(id)arg4 ;


@end


#endif