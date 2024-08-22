// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIRESULTSVIEWCONTROLLER_H
#define SEARCHUIRESULTSVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIResponder, UIViewController<SearchUIResultsTableBridgingProtocol>, UISearchTextField, NSArray;
@protocol UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener;


#import "SearchUIBackgroundView.h"

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting>



@property (copy, nonatomic) id *cellWillDisplayHandler; // ivar: cellWillDisplayHandler
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SearchUIResultsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceToTopOfAppIcons;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL immediatelyShowCardForSingleResult; // ivar: _immediatelyShowCardForSingleResult
@property (retain, nonatomic) NSString *previousSearchString; // ivar: _previousSearchString
@property (retain, nonatomic) NSString *queryString;
@property (readonly, nonatomic) UIResponder *responderForKeyboardInput;
@property (retain, nonatomic) UIViewController<SearchUIResultsTableBridgingProtocol> *resultsTableViewController; // ivar: _resultsTableViewController
@property (retain, nonatomic) UISearchTextField *searchField;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL shortenTopFloatingHeader;
@property (nonatomic) BOOL shouldHideResultsUnderKeyboard;
@property (nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; // ivar: _shouldMonitorScrollingPastBottomOfContent
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewDidUpdateHandler; // ivar: tableViewDidUpdateHandler
@property (copy, nonatomic) id *tableViewWillUpdateHandler; // ivar: tableViewWillUpdateHandler
@property (retain, nonatomic) SearchUIBackgroundView *view;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 maxHeight:(CGFloat)arg1 ;
-(id)contentScrollView;
-(id)currentTableModel;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )scrollToIndexPath:(id)arg0 ;
-(void)contentSizeDidChange:(struct CGSize )arg0 animated:(BOOL)arg1 ;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg0 ;
-(void)didPresentToResumeSearch:(BOOL)arg0 ;
-(void)didScrollPastBottomOfContent;
-(void)didTap;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)highlightResult:(id)arg0 ;
-(void)performReturnKeyPressAction;
-(void)performScrollTestWithCompletion:(id)arg0 ;
// -(void)performScrollTestWithHandlerForFirstScrollCompletion:(id)arg0 completion:(unk)arg1  ;
-(void)purgeMemory;
-(void)replaceResult:(id)arg0 withResult:(id)arg1 ;
-(void)restoreResultsIfNeeded;
-(void)tapAtIndexPath:(id)arg0 ;
-(void)toggleShowMoreForSection:(NSUInteger)arg0 ;
-(void)updateWithResultSections:(id)arg0 ;
-(void)updateWithResultSections:(id)arg0 resetScrollPoint:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willDismiss;


@end


#endif