// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOADINGCONTROLLER_H
#define LOADINGCONTROLLER_H

@class NSURL, NSString, WKWebView;
@protocol LoadingControllerDelegate;

#import <Foundation/Foundation.h>


@interface LoadingController : NSObject {
    NSURL *_URL;
    NSString *_title;
}


@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *URLForStatePersisting;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (weak, nonatomic) NSObject<LoadingControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float estimatedProgress;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *titleForStatePersisting;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)loadRequest:(id)arg0 userDriven:(BOOL)arg1 ;
-(id)loadRequest:(id)arg0 userDriven:(BOOL)arg1 shouldOpenExternalURLs:(BOOL)arg2 ;
-(id)loadRequest:(id)arg0 userDriven:(BOOL)arg1 shouldOpenExternalURLs:(BOOL)arg2 eventAttribution:(id)arg3 ;
-(void)goBack;
-(void)goForward;
-(void)reloadFromOrigin:(BOOL)arg0 ;
-(void)stopLoading;


@end


#endif