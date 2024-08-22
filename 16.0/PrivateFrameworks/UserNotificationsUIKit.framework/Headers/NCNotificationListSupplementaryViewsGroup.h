// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYVIEWSGROUP_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYVIEWSGROUP_H

@class NSString, NSArray, NSMutableArray;
@protocol NCNotificationListSupplementaryHostingViewControllerDelegate, NCNotificationListCellActionProviding;


#import "NCNotificationListPresentableGroup.h"

@interface NCNotificationListSupplementaryViewsGroup : NCNotificationListPresentableGroup <NCNotificationListSupplementaryHostingViewControllerDelegate, NCNotificationListCellActionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *hostingViewControllers;
@property (retain, nonatomic) NSMutableArray *orderedCells; // ivar: _orderedCells
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *supplementaryViewControllers;


+(id)presentableTypes;
-(BOOL)_shouldAllowHostedViewControllersUserInteraction;
-(BOOL)containsSupplementaryViewController:(id)arg0 ;
-(BOOL)shouldContinuePresentingActionButtonsForNotificationListCell:(id)arg0 ;
-(BOOL)shouldImmediatelyReveal;
-(BOOL)shouldShowDefaultActionForNotificationListCell:(id)arg0 ;
-(BOOL)shouldShowSupplementaryActionsForNotificationListCell:(id)arg0 ;
-(BOOL)shouldVerticallyStackActionButtonsForNotificationListCell:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
-(NSUInteger)_existingIndexMatchingSupplementaryViewController:(id)arg0 ;
-(NSUInteger)_indexOfHostingViewController:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_cellAtIndex:(NSUInteger)arg0 ;
-(id)_clearActionForCell:(id)arg0 ;
-(id)_configurationAtIndex:(NSUInteger)arg0 ;
-(id)_configurationForCell:(id)arg0 ;
-(id)_hostingViewControllerAtIndex:(NSUInteger)arg0 ;
-(id)_hostingViewControllerForCell:(id)arg0 ;
-(id)_logDescription;
-(id)_supplementaryViewControllerAtIndex:(NSUInteger)arg0 ;
-(id)clearAllText;
-(id)defaultActionForNotificationListCell:(id)arg0 ;
-(id)headerText;
-(id)hostingPlatterViewForSupplementaryViewController:(id)arg0 ;
-(id)init;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)supplementaryActionsForNotificationListCell:(id)arg0 ;
-(void)_clearCell:(id)arg0 ;
-(void)_matchStyleOfCell:(id)arg0 toHostingViewController:(id)arg1 ;
-(void)_removeSupplementaryViewControllerAtIndex:(NSUInteger)arg0 ;
-(void)_updateHostingViewController:(id)arg0 cell:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_updateUserInteraction;
-(void)clearAll;
-(void)insertSupplementaryViewController:(id)arg0 withConfiguration:(id)arg1 ;
-(void)removeSupplementaryViewController:(id)arg0 ;
-(void)supplementaryHostingViewControllerPreferredContentSizeChanged:(id)arg0 ;
-(void)supplementaryHostingViewControllerWasTapped:(id)arg0 ;
-(void)toggleGroupedState;
-(void)updateSupplementaryViewController:(id)arg0 withConfiguration:(id)arg1 ;


@end


#endif