// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYVIEWSSECTION_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYVIEWSSECTION_H

@class NSString, NSMutableArray, NSArray, NSDictionary;
@protocol NCNotificationListViewDataSource, NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsContaining, NCNotificationListBaseComponent, NCNotificationListBaseComponentDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationListView.h"
#import "NCNotificationListCache.h"

@interface NCNotificationListSupplementaryViewsSection : NSObject <NCNotificationListViewDataSource, NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsContaining, NCNotificationListBaseComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) CGSize allowedSupplementaryViewSize;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListBaseComponentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionString; // ivar: _descriptionString
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationListView *listView; // ivar: _listView
@property (retain, nonatomic) NCNotificationListCache *notificationListCache; // ivar: _notificationListCache
@property (retain, nonatomic) NSMutableArray *orderedSupplementaryViewsGroups; // ivar: _orderedSupplementaryViewsGroups
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supplementaryViewControllers;
@property (readonly, nonatomic) NSDictionary *supplementaryViewControllersByGroupingIdentifiers;
@property (readonly, nonatomic) NSUInteger supplementaryViewControllersCount;
@property (nonatomic) BOOL supportsCollapsing; // ivar: _supportsCollapsing
@property (nonatomic) BOOL supportsSideSwiping; // ivar: _supportsSideSwiping
@property (nonatomic) BOOL supportsViewGrouping; // ivar: _supportsViewGrouping


+(id)presentableTypes;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldAllowRestackingForNotificationListPresentableGroup:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
-(NSUInteger)_indexOfExistingSupplementaryViewsGroupForGroupingIdentifier:(id)arg0 ;
-(NSUInteger)_indexOfExistingSupplementaryViewsGroupForSupplementaryViewController:(id)arg0 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_logDescription;
-(id)hostingPlatterViewForSupplementaryViewController:(id)arg0 ;
-(id)init;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)clearAll;
-(void)collapseAllExpandedSupplementaryViewsGroups;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertSupplementaryViewController:(id)arg0 withConfiguration:(id)arg1 ;
-(void)notificationListPresentableGroup:(id)arg0 requestsScrollToTopOfCollectionWithCompletion:(id)arg1 ;
-(void)presentViewControllerModally:(id)arg0 fromSupplementaryViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeSupplementaryViewController:(id)arg0 ;
-(void)updateSupplementaryViewController:(id)arg0 withConfiguration:(id)arg1 ;


@end


#endif