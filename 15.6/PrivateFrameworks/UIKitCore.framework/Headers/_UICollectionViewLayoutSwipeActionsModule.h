// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLAYOUTSWIPEACTIONSMODULE_H
#define _UICOLLECTIONVIEWLAYOUTSWIPEACTIONSMODULE_H

@class NSString;
@protocol UISwipeActionHost_Internal;

#import <Foundation/Foundation.h>

#import "UICollectionViewLayout.h"
#import "UISwipeActionController.h"

@interface _UICollectionViewLayoutSwipeActionsModule : NSObject <UISwipeActionHost_Internal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UICollectionViewLayout *host; // ivar: _host
@property (nonatomic) BOOL layoutUpdateOrRefreshPending; // ivar: _layoutUpdateOrRefreshPending
@property (readonly) Class superclass;
@property (retain, nonatomic) UISwipeActionController *swipeActionController; // ivar: _swipeActionController


-(BOOL)_canSwipeItemAtIndexPath:(id)arg0 ;
-(BOOL)hasActiveSwipe;
-(BOOL)swipeActionController:(id)arg0 insertActionsView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(BOOL)swipeActionController:(id)arg0 mayBeginSwipeForItemAtIndexPath:(id)arg1 ;
-(NSInteger)layoutDirectionForSwipeActionController:(id)arg0 ;
-(id)_cellWithCustomGroupingAtIndexPath:(id)arg0 ;
-(id)gestureRecognizerViewForSwipeActionController:(id)arg0 ;
-(id)initWithHost:(id)arg0 ;
-(id)itemContainerViewForSwipeActionController:(id)arg0 ;
-(id)propertyAnimatorForCollectionViewUpdates:(id)arg0 withCustomAnimator:(id)arg1 ;
-(id)swipeActionController:(id)arg0 indexPathForTouchLocation:(struct CGPoint )arg1 ;
-(id)swipeActionController:(id)arg0 leadingSwipeConfigurationForItemAtIndexPath:(id)arg1 ;
-(id)swipeActionController:(id)arg0 trailingSwipeConfigurationForItemAtIndexPath:(id)arg1 ;
-(id)swipeActionController:(id)arg0 viewForItemAtIndexPath:(id)arg1 ;
-(id)swipeViewManipulatorForSwipeActionController:(id)arg0 ;
-(struct UIEdgeInsets )swipeActionController:(id)arg0 extraInsetsForItemAtIndexPath:(id)arg1 ;
-(void)_invalidateSwipeActionsLayoutRefreshingActiveConfigurations:(BOOL)arg0 ;
-(void)_transformLayoutAttributes:(id)arg0 ofSeparatorAtBottom:(BOOL)arg1 forSwipeOccurrence:(id)arg2 isDisappearing:(BOOL)arg3 ;
-(void)_updateSwipeActionsConfiguration:(id)arg0 forIndexPath:(id)arg1 ;
-(void)editingStateDidChange;
-(void)processLayoutInvalidationWithContext:(id)arg0 updateConfigurations:(BOOL)arg1 ;
-(void)revealTrailingSwipeActionsForIndexPath:(id)arg0 ;
-(void)swipeActionController:(id)arg0 cleanupActionsView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)swipeActionController:(id)arg0 didBeginSwipeForItemAtIndexPath:(id)arg1 ;
-(void)swipeActionController:(id)arg0 didEndSwipeForItemAtIndexPath:(id)arg1 ;
-(void)swipeActionController:(id)arg0 swipeOccurrence:(id)arg1 didChangeStateFrom:(NSInteger)arg2 to:(NSInteger)arg3 ;
-(void)swipeActionController:(id)arg0 willBeginSwipeForItemAtIndexPath:(id)arg1 ;
-(void)swipeItemAtIndexPath:(id)arg0 direction:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)teardown;
-(void)transformCellLayoutAttributes:(id)arg0 isDisappearing:(BOOL)arg1 ;
-(void)transformDecorationLayoutAttributes:(id)arg0 isDisappearing:(BOOL)arg1 ;
-(void)updateWithUpdateItems:(id)arg0 ;


@end


#endif