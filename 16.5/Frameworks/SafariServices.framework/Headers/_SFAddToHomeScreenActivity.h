// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFADDTOHOMESCREENACTIVITY_H
#define _SFADDTOHOMESCREENACTIVITY_H

@class UIAddToHomeScreenActivity, WKWebView;



@interface _SFAddToHomeScreenActivity : UIAddToHomeScreenActivity {
    WKWebView *_webView;
}




-(BOOL)_showsInSystemActionGroup;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityType;
-(id)initWithWebView:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif