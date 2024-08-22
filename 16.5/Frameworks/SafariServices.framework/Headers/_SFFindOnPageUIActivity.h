// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFFINDONPAGEUIACTIVITY_H
#define _SFFINDONPAGEUIACTIVITY_H

@class SFActivity;


#import "_SFWebView.h"

@interface _SFFindOnPageUIActivity : SFActivity {
    _SFWebView *_webView;
}




-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)initWithWebView:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)performActivity;


@end


#endif