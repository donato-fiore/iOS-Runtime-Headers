// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSNOTIFICATIONADJUNCTLISTVIEWCONTROLLER_H
#define CSNOTIFICATIONADJUNCTLISTVIEWCONTROLLER_H

@class NSString, UIViewController, NSMutableDictionary;
@protocol CSAdjunctListModelDelegate, CSFocusActivityDelegate, SBFActionProviding, CSNotificationAdjunctListViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSAdjunctListModel.h"
#import "CSContentActionInterpreter.h"
#import "CSAdjunctListActionManager.h"
#import "CSFocusActivityManager.h"
#import "CSNowPlayingController.h"
#import "CSSessionManager.h"
#import "CSWidgetMetricsProvider.h"

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate, CSFocusActivityDelegate>

 {
    CSAdjunctListModel *_model;
}


@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter; // ivar: _actionInterpreter
@property (retain, nonatomic) CSAdjunctListActionManager *actionManager; // ivar: _actionManager
@property (weak, nonatomic) NSObject<SBFActionProviding> *contentActionProvider; // ivar: _contentActionProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSNotificationAdjunctListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIViewController *digestOnboardingSuggestionViewController; // ivar: _digestOnboardingSuggestionViewController
@property (retain, nonatomic) CSFocusActivityManager *focusActivityManager; // ivar: _focusActivityManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *identifiersToItems; // ivar: _identifiersToItems
@property (readonly, nonatomic) CGFloat listViewContentAnimationDampingRatio;
@property (readonly, nonatomic) CGFloat listViewContentAnimationDuration;
@property (retain, nonatomic) CSNowPlayingController *nowPlayingController; // ivar: _nowPlayingController
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly, nonatomic, getter=isPresentingTransientContent) BOOL presentingTransientContent;
@property (nonatomic) BOOL respondingToSubviewLayoutChange; // ivar: _respondingToSubviewLayoutChange
@property (retain, nonatomic) CSSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly, nonatomic) CGSize sizeToMimic;
@property (readonly) Class superclass;
@property (weak, nonatomic) CSWidgetMetricsProvider *widgetMetricsProvider;


+(Class)viewClass;
-(BOOL)_canAnimate;
-(BOOL)handleEvent:(id)arg0 ;
-(NSUInteger)_preferredIndexForItem:(id)arg0 ;
-(id)_createItemViewForHost:(id)arg0 recipe:(NSInteger)arg1 ;
-(id)_groupNameBase;
-(id)_stackView;
-(id)init;
-(struct CGAffineTransform )_disappearedTransformForContentWithHeight:(CGFloat)arg0 ;
-(struct CGSize )stackViewContentSize;
-(void)_didUpdateDisplay;
-(void)_insertItem:(id)arg0 atPreferredIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_removeItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateItemsSizeToMimic;
-(void)adjunctListModel:(id)arg0 didAddItem:(id)arg1 ;
-(void)adjunctListModel:(id)arg0 didRemoveItem:(id)arg1 ;
-(void)adjunctListModel:(id)arg0 didUpdateItem:(id)arg1 withItem:(id)arg2 ;
-(void)focusActivityIndicatorDidChangeToVisible:(BOOL)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif