// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSSOFTWAREUPDATERELEASENOTESDETAIL_H
#define SUSSOFTWAREUPDATERELEASENOTESDETAIL_H

@class PSListController, NSString, WKWebView;
@protocol WKNavigationDelegate;



@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *releaseNotes; // ivar: _releaseNotes
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)init;
-(id)specifiers;
-(void)viewDidLoad;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif