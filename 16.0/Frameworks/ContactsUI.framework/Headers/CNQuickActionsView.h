// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNQUICKACTIONSVIEW_H
#define CNQUICKACTIONSVIEW_H

@class UIView, NSArray, UIAlertController, UICollectionViewFlowLayout, UICollectionView, CNContact, NSString, NSDictionary;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate, CNQuickActionButtonDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer, CNQuickActionsViewDelegate;


#import "CNContactActionsController.h"
#import "CNQuickActionsManager.h"
#import "CNQuickAction.h"

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate, CNQuickActionButtonDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) CNQuickActionsManager *actionsManager; // ivar: _actionsManager
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (nonatomic) CGSize cachedContentSize; // ivar: _cachedContentSize
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // ivar: _collectionLayout
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNQuickActionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interspace;
@property (readonly, nonatomic) CGFloat maximumWidth;
@property (retain, nonatomic) CNQuickAction *performingAction; // ivar: _performingAction
@property (nonatomic) BOOL showBackgroundPlatters; // ivar: _showBackgroundPlatters
@property (nonatomic) BOOL showTitles; // ivar: _showTitles
@property (nonatomic) BOOL sortsWithDuet; // ivar: _sortsWithDuet
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *titleTextAttributes; // ivar: _titleTextAttributes
@property (nonatomic) BOOL useDuetIfAvailable; // ivar: _useDuetIfAvailable


+(BOOL)hasActionsForContact:(id)arg0 ;
+(BOOL)requiresConstraintBasedLayout;
+(id)actionsManagerForContact:(id)arg0 ;
+(id)defaultCategories;
+(id)descriptorForRequiredKeys;
-(BOOL)quickActionButton:(id)arg0 performAction:(id)arg1 ;
-(CGFloat)_widthForButtonCount:(NSInteger)arg0 itemSize:(struct CGSize *)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)actionsManager:(id)arg0 presentingViewControllerForAction:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateActions;
-(void)actionsManager:(id)arg0 actionDidPerform:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)didDisambiguateActionType:(id)arg0 withActionItem:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)reloadData;
-(void)showDisambiguationControllerWithDataSource:(id)arg0 actionType:(id)arg1 onController:(id)arg2 sourceView:(id)arg3 ;
-(void)updateContentSize;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif