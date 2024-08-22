// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAPPLICATIONMANIFESTFETCHER_H
#define _SFAPPLICATIONMANIFESTFETCHER_H

@class _WKApplicationManifest, WKWebView;

#import <Foundation/Foundation.h>


@interface _SFApplicationManifestFetcher : NSObject {
    id *_completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    NSInteger _state;
}




-(id)initWithWebView:(id)arg0 ;
-(void)getApplicationManifestWithCompletionHandler:(id)arg0 ;


@end


#endif