// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIWEBCARDSECTIONVIEW_H
#define SEARCHUIWEBCARDSECTIONVIEW_H

@class NUIContainerBoxView, NSString, WKWebView;
@protocol NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler;


#import "SearchUICardSectionView.h"

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>



@property (nonatomic) CGFloat contentHeight; // ivar: _contentHeight
@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)replaceSemanticColor:(id)arg0 withColor:(id)arg1 inString:(id)arg2 ;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif