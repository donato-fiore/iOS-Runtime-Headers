// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIPAGE_H
#define RUIPAGE_H

@class UIViewController, UIBarButtonItem, NSMutableArray, NSArray, NSString, NSDictionary, UIView, RUIElement<RUITopLevelPageElement>, UILabel, UIToolbar;
@protocol UIWebViewDelegate;


#import "RUITableView.h"
#import "RUIWebView.h"
#import "RUIPasscodeView.h"
#import "RUISpinnerView.h"
#import "RUIBarButtonItem.h"
#import "RUIMultiChoiceElement.h"
#import "RUIObjectModel.h"
#import "RUIPageElement.h"
#import "RUIPage.h"
#import "RUIStyle.h"

@interface RUIPage : UIViewController <UIWebViewDelegate>

 {
    RUITableView *_tableViewOM;
    RUIWebView *_webViewOM;
    RUIPasscodeView *_passcodeViewOM;
    RUISpinnerView *_spinnerViewOM;
    UIBarButtonItem *_middleFlexSpace;
    UIBarButtonItem *_leftFlexSpace;
    NSMutableArray *_didAppearCallbacks;
    CGFloat _lastKnownPageWidth;
}


@property (readonly, nonatomic) NSArray *accessoryViews;
@property (readonly, nonatomic) NSString *activityIndicatorStyle;
@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *backButtonTitle; // ivar: _backButtonTitle
@property (readonly, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSArray *childPages; // ivar: _childPages
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) UIEdgeInsets customEdgeInsets; // ivar: _customEdgeInsets
@property (nonatomic) CGFloat customMargin; // ivar: _customMargin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesBackButton; // ivar: _hidesBackButton
@property (retain, nonatomic) NSDictionary *leftNavigationBarButton;
@property (retain, nonatomic) RUIBarButtonItem *leftNavigationBarButtonItem; // ivar: _leftNavigationBarButtonItem
@property (retain, nonatomic) NSDictionary *leftToolbarButton;
@property (retain, nonatomic) RUIBarButtonItem *leftToolbarButtonItem; // ivar: _leftToolbarButtonItem
@property (retain, nonatomic) UIBarButtonItem *leftToolbarItem; // ivar: _leftToolbarItem
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (copy, nonatomic) NSString *loadingTitle; // ivar: _loadingTitle
@property (retain, nonatomic) NSDictionary *middleToolbarButton;
@property (retain, nonatomic) RUIBarButtonItem *middleToolbarButtonItem; // ivar: _middleToolbarButtonItem
@property (retain, nonatomic) UIBarButtonItem *middleToolbarItem; // ivar: _middleToolbarItem
@property (retain, nonatomic) RUIMultiChoiceElement *multiChoiceElement; // ivar: _multiChoiceElement
@property (readonly, nonatomic) BOOL navBarIndicatorHidesLeftButton;
@property (copy, nonatomic) NSString *navSubTitle; // ivar: _navSubTitle
@property (copy, nonatomic) NSString *navTitle; // ivar: _navTitle
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (retain, nonatomic) RUIPageElement *pageElement; // ivar: _pageElement
@property (copy, nonatomic) NSString *pageID; // ivar: _pageID
@property (readonly, weak, nonatomic) RUIPage *parentPage; // ivar: _parentPage
@property (readonly, nonatomic) RUIPasscodeView *passcodeViewOM;
@property (retain, nonatomic) RUIElement<RUITopLevelPageElement> *primaryElement; // ivar: _primaryElement
@property (retain, nonatomic) NSDictionary *rightNavigationBarButton;
@property (retain, nonatomic) RUIBarButtonItem *rightNavigationBarButtonItem; // ivar: _rightNavigationBarButtonItem
@property (retain, nonatomic) NSDictionary *rightToolbarButton;
@property (retain, nonatomic) RUIBarButtonItem *rightToolbarButtonItem; // ivar: _rightToolbarButtonItem
@property (retain, nonatomic) UIBarButtonItem *rightToolbarItem; // ivar: _rightToolbarItem
@property (nonatomic) BOOL showsTitlesAsHeaderViews; // ivar: _showsTitlesAsHeaderViews
@property (readonly, nonatomic) RUISpinnerView *spinnerViewOM;
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) RUITableView *tableViewOM;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) UIEdgeInsets titleLabelPadding;
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (copy, nonatomic) NSString *validationFunction; // ivar: _validationFunction
@property (readonly, nonatomic) RUIWebView *webViewOM;


-(BOOL)_shouldShowMultiChoiceElement;
-(BOOL)hasChoiceView;
-(BOOL)hasMultiChoiceView;
-(BOOL)hasPasscodeView;
-(BOOL)hasSpinnerView;
-(BOOL)hasTableView;
-(BOOL)hasWebView;
-(BOOL)multiChoiceViewFloatsAboveKeyboard;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_childElements;
-(id)elementsWithName:(id)arg0 ;
-(id)flexibleSpace;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)subElementWithID:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_addChildPage:(id)arg0 ;
-(void)_barButtonPressed:(id)arg0 isRight:(BOOL)arg1 isNavbar:(BOOL)arg2 ;
-(void)_handlePageUpdateRequestedNotification:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_leftNavigationBarButtonPressed:(id)arg0 ;
-(void)_leftToolbarButtonPressed:(id)arg0 ;
-(void)_middleToolbarButtonPressed:(id)arg0 ;
-(void)_reloadTitleLabel;
-(void)_rightNavigationBarButtonPressed:(id)arg0 ;
-(void)_rightToolbarButtonPressed:(id)arg0 ;
-(void)_setContentInset:(CGFloat)arg0 ;
-(void)_setupMultiChoiceView;
-(void)_setupMultiChoiceViewAsStickyBottomTray;
-(void)_updateLoadingUI;
-(void)_updateParentPage;
-(void)_updateToolbar;
-(void)_updateWithCompletedChild:(id)arg0 ;
-(void)addDidAppearBlock:(id)arg0 ;
-(void)dealloc;
-(void)dismissIfPresentedWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)setButton:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setHasToolbar;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif