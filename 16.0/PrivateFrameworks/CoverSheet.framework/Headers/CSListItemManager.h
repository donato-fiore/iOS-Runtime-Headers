// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLISTITEMMANAGER_H
#define CSLISTITEMMANAGER_H

@class NSArray, NSString, NSMutableDictionary, PRWidgetMetricsProvider;
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
@property (readonly, nonatomic) BOOL isPresentingSupplementaryContent;
@property (weak, nonatomic) NSObject<CSListItemContaining> *itemContainer; // ivar: _itemContainer
@property (readonly, nonatomic) NSUInteger itemCount;
@property (nonatomic) BOOL listHasNotificationContent; // ivar: _listHasNotificationContent
@property (retain, nonatomic) CSListItem *nowPlayingItem;
@property (retain, nonatomic) NSArray *providers; // ivar: _providers
@property (readonly) Class superclass;
@property (weak, nonatomic) PRWidgetMetricsProvider *widgetMetricsProvider; // ivar: _widgetMetricsProvider


+(id)itemManagerWithItemContainer:(id)arg0 ;
+(id)itemManagerWithItemContainer:(id)arg0 itemProviders:(id)arg1 ;
-(id)_initWithItemContainer:(id)arg0 itemProviders:(id)arg1 ;
-(void)addItem:(id)arg0 ;
-(void)cancelTouchesForItem:(id)arg0 ;
-(void)didAddNewSceneHostEnvironment;
-(void)handleRemovedItemsWithContentHosts:(id)arg0 ;
-(void)item:(id)arg0 requestsAuthenticationAndPerformBlock:(id)arg1 ;
-(void)item:(id)arg0 requestsModalPresentationOfViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeItem:(id)arg0 ;
-(void)significantUserInteractionBeganForItem:(id)arg0 ;
-(void)significantUserInteractionEndedForItem:(id)arg0 ;
-(void)updateItem:(id)arg0 ;


@end


#endif