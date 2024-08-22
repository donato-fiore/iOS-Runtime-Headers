// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPLICATIONMANIFESTFETCHER_H
#define SFAPPLICATIONMANIFESTFETCHER_H

@class _WKApplicationManifest, WKWebView;

#import <Foundation/Foundation.h>


@interface SFApplicationManifestFetcher : NSObject {
    id *_completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    NSInteger _state;
}




-(id)initWithWebView:(id)arg0 ;
-(void)getApplicationManifestWithCompletionHandler:(id)arg0 ;


@end


#endif