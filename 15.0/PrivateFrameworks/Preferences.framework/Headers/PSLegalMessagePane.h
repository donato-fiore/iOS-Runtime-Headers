// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSLEGALMESSAGEPANE_H
#define PSLEGALMESSAGEPANE_H

@class UIWebView, NSString;
@protocol UIWebViewDelegate;


#import "PSEditingPane.h"

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate>

 {
    UIWebView *_webView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handlesDoneButton;
-(BOOL)shouldInsetContent;
-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(id)htmlFileLocation;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)markupString;
-(id)scrollViewToBeInsetted;
-(void)dealloc;
-(void)layoutInsetContent:(struct CGRect )arg0 ;
-(void)viewDidBecomeVisible;
-(void)webViewDidFinishLoad:(id)arg0 ;


@end


#endif