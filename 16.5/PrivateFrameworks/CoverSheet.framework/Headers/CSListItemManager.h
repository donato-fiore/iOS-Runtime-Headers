// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLISTITEMMANAGER_H
#define CSLISTITEMMANAGER_H

@class NSArray, NSString, NSMutableDictionary, NSDictionary;
@protocol CSListItemManaging, CSListItemContaining;

#import <Foundation/Foundation.h>

#import "CSListItem.h"

@interface CSListItemManager : NSObject <CSListItemManaging>

 {
    CSListItem *_nowPlayingItem;
}


@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *identifiersToItems; // ivar: _identifiersToItems
@property (retain, nonatomic) NSDictionary *identifiersToProviders; // ivar: _identifiersToProviders
@property (readonly, nonatomic) BOOL isPresentingSupplementaryContent;
@property (weak, nonatomic) NSObject<CSListItemContaining> *itemContainer; // ivar: _itemContainer
@property (readonly, nonatomic) NSUInteger itemCount;
@property (nonatomic) BOOL listHasNotificationContent; // ivar: _listHasNotificationContent
@property (retain, nonatomic) CSListItem *nowPlayingItem;
@property (readonly) Class superclass;


+(id)itemManagerWithItemContainer:(id)arg0 ;
+(id)itemManagerWithItemContainer:(id)arg0 itemProviders:(id)arg1 ;
-(id)_initWithItemContainer:(id)arg0 itemProviders:(id)arg1 ;
-(id)itemsGroupSortComparatorForListSectionIdentifier:(SEL)arg0 ;
-(id)itemsViewControllerSortComparatorForListSectionIdentifier:(SEL)arg0 ;
-(void)_restrictsTouches:(BOOL)arg0 forSpecificContentHost:(id)arg1 ;
-(void)addItem:(id)arg0 ;
-(void)cancelTouchesForItem:(id)arg0 ;
-(void)didAddNewSceneHostEnvironment;
-(void)handleRemovedItemsWithContentHosts:(id)arg0 ;
-(void)item:(id)arg0 requestsAuthenticationAndPerformBlock:(id)arg1 ;
-(void)item:(id)arg0 requestsModalPresentationOfViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeItem:(id)arg0 ;
-(void)restrictsTouches:(BOOL)arg0 onHostedSceneOfContentHost:(id)arg1 ;
-(void)restrictsTouchesOnAllHostedScenes:(BOOL)arg0 ;
-(void)significantUserInteractionBeganForItem:(id)arg0 ;
-(void)significantUserInteractionEndedForItem:(id)arg0 ;
-(void)supplementaryViewsContainer:(id)arg0 requestsCancelTouches:(BOOL)arg1 onSupplementaryViewController:(id)arg2 ;
-(void)supplementaryViewsContainer:(id)arg0 requestsCancelTouchesOnAllSupplementaryViewControllers:(BOOL)arg1 ;
-(void)updateItem:(id)arg0 ;
-(void)willPresentPosterSwitcher;


@end


#endif