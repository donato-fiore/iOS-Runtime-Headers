// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSYNTHETICCLICKCONTEXT_H
#define _SFSYNTHETICCLICKCONTEXT_H

@class WKNavigationAction, WKWebView;

#import <Foundation/Foundation.h>


@interface _SFSyntheticClickContext : NSObject

@property (readonly, nonatomic) WKNavigationAction *navigationAction; // ivar: _navigationAction
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 navigationAction:(id)arg1 ;


@end


#endif