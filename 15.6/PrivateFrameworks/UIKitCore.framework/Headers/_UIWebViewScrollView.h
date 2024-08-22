// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWEBVIEWSCROLLVIEW_H
#define _UIWEBVIEWSCROLLVIEW_H



#import "UIWebScrollView.h"
#import "_UIWebViewScrollViewDelegateForwarder.h"
#import "UIWebBrowserView.h"

@interface _UIWebViewScrollView : UIWebScrollView {
    _UIWebViewScrollViewDelegateForwarder *_forwarder;
    BOOL _bouncesSetExplicitly;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    UIWebBrowserView *_browserView;
}




-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(id)delegate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContentInsetAdjustmentBehaviorInternal:(NSInteger)arg0 ;
-(void)_setWebView:(id)arg0 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg0 ;
-(void)dealloc;
-(void)setBounces:(BOOL)arg0 ;
-(void)setBouncesHorizontally:(BOOL)arg0 ;
-(void)setBouncesVertically:(BOOL)arg0 ;
-(void)setContentInsetAdjustmentBehavior:(NSInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif