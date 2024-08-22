// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLURLPREVIEWGENERATOR_H
#define SLURLPREVIEWGENERATOR_H

@class NSString, UIWebView;
@protocol UIWebViewDelegate;

#import <Foundation/Foundation.h>


@interface SLURLPreviewGenerator : NSObject <UIWebViewDelegate>

 {
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) UIWebView *webView; // ivar: _webView


-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_callCompletionWithPreview:(id)arg0 ;
-(void)dealloc;
-(void)loadURL:(id)arg0 completion:(id)arg1 ;
-(void)uiWebView:(id)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(id)arg2 listener:(id)arg3 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg0 ;


@end


#endif