// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKTERMSPAGEVIEWCONTROLLER_H
#define SKTERMSPAGEVIEWCONTROLLER_H

@class UIViewController, UINavigationBar, NSString, UIToolbar, UIWebView;
@protocol UINavigationBarDelegate, SKTermsPageViewControllerDelegate;



@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate>

 {
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKTermsPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)positionForBar:(id)arg0 ;
-(NSUInteger)edgesForExtendedLayout;
-(id)_markupTermsWithHTML:(id)arg0 ;
-(id)init;
-(id)initWithTerms:(id)arg0 ;
-(void)_buttonAccept:(id)arg0 ;
-(void)_buttonDecline:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg0 withAcceptance:(BOOL)arg1 ;
-(void)_loadSubviews;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif