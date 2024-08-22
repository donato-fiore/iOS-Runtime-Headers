// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSWEBCONTAINERVIEW_H
#define PSWEBCONTAINERVIEW_H

@class UIView, NSData, NSString, UIWebView;
@protocol UIWebViewDelegate;



@interface PSWebContainerView : UIView <UIWebViewDelegate>



@property (retain, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWebView *webView; // ivar: _webView


-(BOOL)uiWebView:(id)arg0 previewIsAllowedForPosition:(struct CGPoint )arg1 ;
-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(id)init;
-(void)layoutSubviews;
-(void)setUserStyleSheet:(id)arg0 ;


@end


#endif