// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARCARDACTIONSVIEW_H
#define CNAVATARCARDACTIONSVIEW_H

@class UIView, NSArray, NSString, NSIndexPath, UISelectionFeedbackGenerator, UIGestureRecognizer;
@protocol UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate, CNAvatarCardActionsViewDelegate;


#import "CNQuickActionsManager.h"
#import "CNAvatarCardActionsTableView.h"

@interface CNAvatarCardActionsView : UIView <UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate>



@property (copy, nonatomic) NSArray *actionCategories; // ivar: _actionCategories
@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) CGRect actionsImageFrame; // ivar: _actionsImageFrame
@property (retain, nonatomic) CNQuickActionsManager *actionsManager; // ivar: _actionsManager
@property (nonatomic) BOOL actionsReversed; // ivar: _actionsReversed
@property (nonatomic) BOOL bypassActionValidation; // ivar: _bypassActionValidation
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarCardActionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissesBeforePerforming; // ivar: _dismissesBeforePerforming
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *highlightedIndexPath; // ivar: _highlightedIndexPath
@property (nonatomic) CGPoint initialLocation; // ivar: _initialLocation
@property (readonly, nonatomic, getter=isPerformingAction) BOOL performingAction;
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior; // ivar: _retargetBehavior
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // ivar: _rolloverGestureRecognizer
@property (retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // ivar: _selectionGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) CNAvatarCardActionsTableView *tableView; // ivar: _tableView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)performHighlightedAction;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_actionAtIndexPath:(id)arg0 ;
-(id)_effectiveManagerActions;
-(id)_indexPathForGestureRecognizer:(id)arg0 ;
-(id)actionsManager:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)actionsManager:(id)arg0 presentingViewControllerForAction:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg0 forAction:(id)arg1 ;
-(void)_dismissCardAnimated:(BOOL)arg0 ;
-(void)_performActionAtIndexPath:(id)arg0 ;
-(void)_startTrackingRolloverOnCellAtIndexPath:(id)arg0 withGestureRecognizer:(id)arg1 ;
-(void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg0 withGestureRecognizer:(id)arg1 ;
-(void)_updateActionsWithBlock:(id)arg0 ;
-(void)_updateAllSeparators;
-(void)_updateCellSeparator:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_updateFromActions:(id)arg0 toActions:(id)arg1 matchingOldIndex:(NSInteger)arg2 toNewActionIndex:(NSInteger)arg3 invertedAnimation:(BOOL)arg4 ;
-(void)_updateWithActions:(id)arg0 withBlock:(id)arg1 ;
-(void)refreshActions;
-(void)reloadData;
-(void)reloadDataWithBlock:(id)arg0 ;
-(void)reset;
-(void)resetWithBlock:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg0 ;
-(void)stopTrackingRollover;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateRollover:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif