// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTYLESELECTORVIEWCONTROLLER_H
#define ICSTYLESELECTORVIEWCONTROLLER_H

@class ICNAViewController, NSArray, UIView, NSLayoutConstraint, UIButton, NSIndexSet, NSString, UILabel, UINavigationBar, UIScrollView;
@protocol UIScrollViewDelegate, ICStyleSelectorDelegate;



@interface ICStyleSelectorViewController : ICNAViewController <UIScrollViewDelegate>



@property (readonly, nonatomic) NSArray *biusButtons;
@property (weak, nonatomic) UIView *biusContainer; // ivar: _biusContainer
@property (retain, nonatomic) NSLayoutConstraint *biusContainerTopConstraintLandscape; // ivar: _biusContainerTopConstraintLandscape
@property (weak, nonatomic) UIButton *boldButton; // ivar: _boldButton
@property (retain, nonatomic) NSLayoutConstraint *boldButtonWidthConstraintLandscape; // ivar: _boldButtonWidthConstraintLandscape
@property (weak, nonatomic) UIButton *bulletedListButton; // ivar: _bulletedListButton
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) BOOL configuredForLandscape; // ivar: _configuredForLandscape
@property (nonatomic) NSUInteger currentBIUS; // ivar: _currentBIUS
@property (retain, nonatomic) NSIndexSet *currentStyles; // ivar: _currentStyles
@property (weak, nonatomic) UIButton *dashedListButton; // ivar: _dashedListButton
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ICStyleSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id *elementForAXFocusOnDismissal; // ivar: _elementForAXFocusOnDismissal
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (weak, nonatomic) UIView *headerView; // ivar: _headerView
@property (weak, nonatomic) UIButton *indentLeftButton; // ivar: _indentLeftButton
@property (weak, nonatomic) UIButton *indentRightButton; // ivar: _indentRightButton
@property (readonly, nonatomic) NSArray *indentationButtons;
@property (weak, nonatomic) UIView *indentationContainer; // ivar: _indentationContainer
@property (weak, nonatomic) UIButton *italicButton; // ivar: _italicButton
@property (readonly, nonatomic) NSArray *listButtons;
@property (weak, nonatomic) UIView *listsContainer; // ivar: _listsContainer
@property (weak, nonatomic) NSLayoutConstraint *listsContainerBottomConstraint; // ivar: _listsContainerBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *listsContainerLeadingConstraintLandscape; // ivar: _listsContainerLeadingConstraintLandscape
@property (weak, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (readonly, nonatomic) NSArray *nonStyleButtons;
@property (weak, nonatomic) UIButton *numberedListButton; // ivar: _numberedListButton
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // ivar: _scrollViewHeightConstraint
@property (weak, nonatomic) NSLayoutConstraint *scrollViewTopConstraint; // ivar: _scrollViewTopConstraint
@property (weak, nonatomic) UIButton *strikethroughButton; // ivar: _strikethroughButton
@property (readonly, nonatomic) CGFloat styleButtonPadding;
@property (retain, nonatomic) NSArray *styleButtons; // ivar: _styleButtons
@property (weak, nonatomic) UIScrollView *styleScrollView; // ivar: _styleScrollView
@property (retain, nonatomic) UIView *styleSelectionHighlight; // ivar: _styleSelectionHighlight
@property (retain, nonatomic) NSArray *styles; // ivar: _styles
@property (readonly) Class superclass;
@property (weak, nonatomic) UIButton *underlineButton; // ivar: _underlineButton


-(BOOL)_canShowWhileLocked;
-(BOOL)currentBIUSContainsStyle:(NSUInteger)arg0 ;
-(BOOL)currentNamedStylesContainsStyle:(unsigned int)arg0 ;
-(BOOL)isInPopover;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)menuElementStateWithEnabled:(BOOL)arg0 ;
-(id)biusStyleActionWithStyleBIUS:(NSUInteger)arg0 ;
-(id)fontForTTNamedStyle:(unsigned int)arg0 ;
-(id)imageForButton:(id)arg0 ;
-(id)imageNameForButton:(id)arg0 ;
-(id)makeInlineMenuWithCurrentBIUS:(NSUInteger)arg0 currentStyles:(id)arg1 ;
-(id)makeShortcutMenu;
-(id)namedStyleActionWithNamedStyle:(unsigned int)arg0 ;
-(id)nibBundle;
-(id)styleButtonForStyle:(unsigned int)arg0 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)applyAccessibilityInfo;
-(void)configureForOrientation;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)didSelectBulletedList:(id)arg0 ;
-(void)didSelectDashedList:(id)arg0 ;
-(void)didSelectDone:(id)arg0 ;
-(void)didSelectNumberedList:(id)arg0 ;
-(void)didSelectStyle:(id)arg0 ;
-(void)indentLeft:(id)arg0 ;
-(void)indentRight:(id)arg0 ;
-(void)populateStyleScrollView;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollCurrentStyleToVisible:(BOOL)arg0 ;
-(void)setUpNonStyleButtons;
-(void)toggleBIUS:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonEnabledState;
-(void)updateHeaderVisibility;
-(void)updateListStyleSelectedState;
-(void)updateNamedStyleSelectedState;
-(void)updateStyleSelectionHighlightAnimated:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif