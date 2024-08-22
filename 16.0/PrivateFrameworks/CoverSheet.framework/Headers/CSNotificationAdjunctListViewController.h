// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSNOTIFICATIONADJUNCTLISTVIEWCONTROLLER_H
#define CSNOTIFICATIONADJUNCTLISTVIEWCONTROLLER_H

@class NSArray, NSString, UIViewController, NSMutableDictionary, PRWidgetMetricsProvider;
@protocol CSAdjunctListModelDelegate, CSFocusActivityDelegate, SBFActionProviding, CSNotificationAdjunctListViewControllerDelegate, CSRemoteContentInlineProviding;


#import "CSCoverSheetViewControllerBase.h"
#import "CSAdjunctListModel.h"
#import "CSContentActionInterpreter.h"
#import "CSAdjunctListActionManager.h"
#import "CSFocusActivityManager.h"
#import "CSNowPlayingController.h"
#import "CSRemoteContentInlineManager.h"

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate, CSFocusActivityDelegate>

 {
    CSAdjunctListModel *_model;
    BOOL _isFocusActivityIndicatorVisible;
    BOOL _isNowPlayingVisible;
    NSArray *_viewsPreferringProminentPresentationAndDismissal;
}


@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter; // ivar: _actionInterpreter
@property (retain, nonatomic) CSAdjunctListActionManager *actionManager; // ivar: _actionManager
@property (nonatomic) BOOL allowsAddRemoveAnimations; // ivar: _allowsAddRemoveAnimations
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
@property (retain, nonatomic) CSRemoteContentInlineManager *remoteContentInlineManager; // ivar: _remoteContentInlineManager
@property (weak, nonatomic) NSObject<CSRemoteContentInlineProviding> *remoteContentInlineProvider; // ivar: _remoteContentInlineProvider
@property (nonatomic) BOOL respondingToSubviewLayoutChange; // ivar: _respondingToSubviewLayoutChange
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly, nonatomic) CGSize sizeToMimic; // ivar: _sizeToMimic
@property (readonly) Class superclass;
@property (weak, nonatomic) PRWidgetMetricsProvider *widgetMetricsProvider; // ivar: _widgetMetricsProvider


+(Class)viewClass;
-(BOOL)_canAnimate;
-(BOOL)handleEvent:(id)arg0 ;
-(NSUInteger)_preferredIndexForItem:(id)arg0 ;
-(id)_createItemViewForHost:(id)arg0 recipe:(NSInteger)arg1 ;
-(id)_groupNameBase;
-(id)_stackView;
-(id)init;
-(struct CGAffineTransform )_disappearedTransformForContentWithHeight:(CGFloat)arg0 ;
-(struct CGSize )sizeToMimicForHost:(id)arg0 ;
-(struct CGSize )stackViewContentSize;
-(void)_didUpdateDisplay;
-(void)_insertItem:(id)arg0 atPreferredIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_removeItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setIsFocusActivityIndicatorVisible:(BOOL)arg0 ;
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