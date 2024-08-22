// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LUILOGVIEWERCONTROLLER_H
#define LUILOGVIEWERCONTROLLER_H

@class UIView, NSString, NSDate, NSArray, NSMutableArray, NSMutableSet, UIPageViewController, UIPanGestureRecognizer;
@protocol LUILogViewerViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, LUILogFilterViewControllerDelegate, UISearchBarDelegate, LUILogContentViewControllerDelegate, UIGestureRecognizerDelegate, LUILogViewerControllerDelegate;

#import <Foundation/Foundation.h>

#import "LUILogViewerAssistiveTouch.h"
#import "LUILogContentViewController.h"
#import "LUILogFilterViewController.h"
#import "LUILogViewerView.h"

@interface LUILogViewerController : NSObject <LUILogViewerViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, LUILogFilterViewControllerDelegate, UISearchBarDelegate, LUILogContentViewControllerDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) LUILogViewerAssistiveTouch *assistiveTouch; // ivar: _assistiveTouch
@property (weak, nonatomic) UIView *baseView; // ivar: _baseView
@property (nonatomic) NSInteger currentHighlightIndex; // ivar: _currentHighlightIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LUILogViewerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *firstLogDate; // ivar: _firstLogDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *highlightRanges; // ivar: _highlightRanges
@property (nonatomic) BOOL isFetchingLogs; // ivar: _isFetchingLogs
@property (nonatomic) BOOL isStreaming; // ivar: _isStreaming
@property (retain, nonatomic) NSDate *lastLogDate; // ivar: _lastLogDate
@property (retain, nonatomic) LUILogContentViewController *logContentViewController; // ivar: _logContentViewController
@property (retain, nonatomic) LUILogFilterViewController *logFilterViewController; // ivar: _logFilterViewController
@property (nonatomic) CGFloat logInterval; // ivar: _logInterval
@property (retain, nonatomic) NSMutableArray *logMinutesArray; // ivar: _logMinutesArray
@property (retain, nonatomic) NSMutableSet *logMinutesSet; // ivar: _logMinutesSet
@property (retain, nonatomic) LUILogViewerView *logViewerView; // ivar: _logViewerView
@property (nonatomic) BOOL outsideKeyboardIsShowing; // ivar: _outsideKeyboardIsShowing
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (retain, nonatomic) NSArray *predicates; // ivar: _predicates
@property (readonly) Class superclass;


-(BOOL)_performSearch:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)logFilterViewControllerShouldAllowTextEditing:(id)arg0 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(id)_attributedLogStringFrom:(id)arg0 fontSize:(CGFloat)arg1 ;
-(id)_getLogsFromDate:(id)arg0 predicate:(id)arg1 duplicateHandler:(id)arg2 ;
-(id)currentPredicates:(id)arg0 ;
-(id)init;
-(id)logContentViewControllerLogEndDate:(id)arg0 ;
-(id)logContentViewControllerLogStartDate:(id)arg0 ;
-(id)orderedViewControllers;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(struct _NSRange )_searchRangeForDate:(id)arg0 inText:(id)arg1 ;
-(void)_cleanupHighlight;
-(void)_cleanupLogs;
-(void)_decreaseCurrentHighlightIndex;
-(void)_dismissLogViewerView;
-(void)_grabLogAndUpdateTextView;
-(void)_increaseCurrentHighlightIndex;
-(void)_moveElementsToView:(id)arg0 ;
-(void)_presentLogViewerView;
-(void)_setupInitialHighlight;
-(void)_startStreamLog;
-(void)_stopStreaming;
-(void)_updateHighlight;
-(void)_updateLogFromLastTime;
-(void)assistiveTouchButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)handlePan:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)logContentViewController:(id)arg0 didSelectDateForLog:(id)arg1 ;
-(void)logContentViewController:(id)arg0 didSelectLogOptionWithTimeInterval:(CGFloat)arg1 ;
-(void)logFilterViewController:(id)arg0 didAddPredicates:(id)arg1 ;
-(void)logFilterViewController:(id)arg0 didDeletePredicate:(id)arg1 ;
-(void)logFilterViewControllerApplyButtonTapped:(id)arg0 ;
-(void)logViewerFilterButtonTapped:(id)arg0 ;
-(void)logViewerLeftCaretButtonTapped:(id)arg0 ;
-(void)logViewerRightCaretButtonTapped:(id)arg0 ;
-(void)logViewerViewClearButtontapped:(id)arg0 ;
-(void)logViewerViewCloseButtonTapped:(id)arg0 ;
-(void)logViewerViewLogButtonTapped:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)setup;
-(void)showLogContentPage;
-(void)showLogFilterPage;


@end


#endif