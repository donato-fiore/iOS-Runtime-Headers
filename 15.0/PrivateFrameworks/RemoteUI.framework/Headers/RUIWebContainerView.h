// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUIWEBCONTAINERVIEW_H
#define RUIWEBCONTAINERVIEW_H

@class UIView, NSURL, NSString, UIWebView;
@protocol UIWebViewDelegate, RUIWebContainerViewDelegate;



@interface RUIWebContainerView : UIView <UIWebViewDelegate>

 {
    BOOL _highlighted;
    BOOL _reallyHighlighted;
    NSURL *_baseURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIWebContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWebView *webView; // ivar: _webView


-(BOOL)uiWebView:(id)arg0 previewIsAllowedForPosition:(struct CGPoint )arg1 ;
-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(id)initWithContent:(id)arg0 baseURL:(id)arg1 ;
-(void)layoutSubviews;
-(void)setUserStyleSheet:(id)arg0 ;
-(void)updateContent:(id)arg0 ;
-(void)webViewDidFinishLoad:(id)arg0 ;


@end


#endif