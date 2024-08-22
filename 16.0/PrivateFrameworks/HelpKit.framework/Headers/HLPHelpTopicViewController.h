// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPTOPICVIEWCONTROLLER_H
#define HLPHELPTOPICVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIBarButtonItem, NSLayoutConstraint, NSString, NSURL, NSArray, NSCache, WKWebView, NSMutableDictionary;
@protocol UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate;


#import "HLPURLSessionItem.h"
#import "HLPHelpTopicHistoryItem.h"
#import "HLPHelpBookController.h"
#import "HLPHelpLoadingView.h"
#import "HLPHelpLocale.h"

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate>

 {
    id *_interactivePopGestureRecognizerDelegate;
    BOOL _canShowTOC;
    BOOL _webViewLoaded;
    BOOL _RTL;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
}


@property (retain, nonatomic) HLPURLSessionItem *URLSessionItem; // ivar: _URLSessionItem
@property (retain, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem; // ivar: _currentTopicHistoryItem
@property (nonatomic) BOOL darkModeEnabled; // ivar: _darkModeEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HLPHelpTopicViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayHelpTopicsOnly; // ivar: _displayHelpTopicsOnly
@property (nonatomic) BOOL fullBookView; // ivar: _fullBookView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HLPHelpBookController *helpBookController; // ivar: _helpBookController
@property (retain, nonatomic) NSURL *helpBookURL; // ivar: _helpBookURL
@property (nonatomic) BOOL hideDoneButton; // ivar: _hideDoneButton
@property (retain, nonatomic) HLPHelpLoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) HLPHelpLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSArray *searchTerms; // ivar: _searchTerms
@property (nonatomic) BOOL showTopicNameAsTitle; // ivar: _showTopicNameAsTitle
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDarkMode; // ivar: _supportsDarkMode
@property (retain, nonatomic) NSCache *topicCache; // ivar: _topicCache
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView
@property (retain, nonatomic) NSMutableDictionary *webViewRequestsMap; // ivar: _webViewRequestsMap


-(id)init;
-(void)_loadWithInfo:(id)arg0 ;
-(void)backButtonTapped;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)forwardButtonTapped;
-(void)helpTopicViewController:(id)arg0 failToLoadWithError:(id)arg1 ;
-(void)helpTopicViewController:(id)arg0 topicLoaded:(id)arg1 ;
-(void)helpTopicViewController:(id)arg0 traitCollectionChanged:(id)arg1 ;
-(void)helpTopicViewControllerContentViewed:(id)arg0 topicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(NSInteger)arg4 fromTopicID:(id)arg5 externalURLString:(id)arg6 ;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg0 ;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg0 ;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg0 ;
-(void)loadHTMLString:(id)arg0 anchor:(id)arg1 ;
-(void)loadHelpTopicItem:(id)arg0 searchTerms:(id)arg1 anchor:(id)arg2 ;
-(void)loadWithInfo:(id)arg0 ;
-(void)logAnalyticsContentViewedWithTopicID:(id)arg0 topicTitle:(id)arg1 source:(id)arg2 fromTopicID:(id)arg3 externalURLString:(id)arg4 ;
-(void)reloadCurrentTopic;
-(void)saveCurrentTopicItem;
-(void)showHelpBookInfo:(id)arg0 ;
-(void)showTableOfContent;
-(void)showWebViewDelay;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundColor;
-(void)updateDoneButton;
-(void)updateHTMLStringPath:(id)arg0 tag:(id)arg1 attribute:(id)arg2 ;
-(void)updateHTMLStringPath:(id)arg0 tag:(id)arg1 attribute:(id)arg2 useScheme:(BOOL)arg3 ;
-(void)updateNavigationButtons;
-(void)updateScrollPositionForCurrentTopicItem;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif