// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMESTATUSITEMMANAGER_H
#define HFHOMESTATUSITEMMANAGER_H

@class NSTimer, HMRoom;


#import "HFItemManager.h"
#import "HFStatusItemProvider.h"

@interface HFHomeStatusItemManager : HFItemManager

@property (retain, nonatomic) NSTimer *invalidationTimer; // ivar: _invalidationTimer
@property (retain, nonatomic) HMRoom *room; // ivar: _room
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider; // ivar: _statusItemProvider


-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(BOOL)shouldPerformInitialLoadOnMainThread;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithRoom:(id)arg0 delegate:(id)arg1 ;
-(id)matchingItemForHomeKitObject:(id)arg0 ;
-(id)statusItems;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_invalidateItemsIfNecessary;
-(void)_updateInvalidationTimer;
-(void)updateNeedsInvalidation:(BOOL)arg0 forStatusItem:(id)arg1 ;


@end


#endif