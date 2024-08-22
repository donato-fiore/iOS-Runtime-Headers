// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEDITORDRAWERHOSTINGVIEWCONTROLLER_H
#define WFEDITORDRAWERHOSTINGVIEWCONTROLLER_H

@class UIViewController;
@protocol WFActionDrawerDelegate, WFActionDrawerScrollViewObserver;


#import "WFActionDrawerResultsController.h"

@interface WFEditorDrawerHostingViewController : UIViewController {
    ? hostingViewController;
    ? state;
}


@property (nonatomic, weak) NSObject<WFActionDrawerDelegate> *delegate; // ivar: delegate
@property (nonatomic) CGFloat headerHeight; // ivar: headerHeight
@property (nonatomic) NSUInteger navigationStyle; // ivar: navigationStyle
@property (nonatomic, retain) WFActionDrawerResultsController *resultsController; // ivar: resultsController
@property (nonatomic, weak) NSObject<WFActionDrawerScrollViewObserver> *scrollViewObserver; // ivar: scrollViewObserver


-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithResultsController:(id)arg0 ;
-(void)clearSearchBar;
-(void)didTransitionToVisibility:(NSUInteger)arg0 ;
-(void)focusSearchBar;
-(void)loadView;
-(void)performScrollingTest:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif