// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAPPLICATIONMANIFESTFETCHER_H
#define WBSAPPLICATIONMANIFESTFETCHER_H

@class _WKApplicationManifest, WKWebView;

#import <Foundation/Foundation.h>


@interface WBSApplicationManifestFetcher : NSObject {
    id *_completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    NSInteger _state;
}




-(id)initWithWebView:(id)arg0 ;
-(void)getApplicationManifestWithCompletionHandler:(id)arg0 ;


@end


#endif