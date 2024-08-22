// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDOWNLOADCURRENTPAGEACTIVITY_H
#define _SFDOWNLOADCURRENTPAGEACTIVITY_H

@class UIApplicationExtensionActivity, WKWebView;



@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity {
    WKWebView *_webView;
}




-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif