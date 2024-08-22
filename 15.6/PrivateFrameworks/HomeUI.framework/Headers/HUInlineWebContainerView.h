// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUINLINEWEBCONTAINERVIEW_H
#define HUINLINEWEBCONTAINERVIEW_H

@class UIView, NSString, WKUserContentController, UIFont, WKWebView;
@protocol WKUIDelegate, WKNavigationDelegate, HUInlineWebContainerViewDelegate;



@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate>



@property (copy, nonatomic) NSString *HTMLContent; // ivar: _HTMLContent
@property (readonly, nonatomic) WKUserContentController *contentController; // ivar: _contentController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUInlineWebContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat estimatedHeight; // ivar: _estimatedHeight
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)webView:(id)arg0 shouldPreviewElement:(id)arg1 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setUserStyleSheet;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif