// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSTATUSITEMMODULE_H
#define HUSTATUSITEMMODULE_H

@class HFItemModule, NSString, NSTimer, HFItem, HFStatusItemProvider;
@protocol HFItemHiding;


#import "HUDashboardContext.h"

@interface HUStatusItemModule : HFItemModule <HFItemHiding>



@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *invalidationTimer; // ivar: _invalidationTimer
@property (retain, nonatomic) HFItem *placeholderItem; // ivar: _placeholderItem
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider; // ivar: _statusItemProvider
@property (readonly) Class superclass;


-(id)_itemsToHideInSet:(id)arg0 ;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;
-(id)statusItems;
-(void)_invalidateItemsIfNecessary;
-(void)_updateInvalidationTimer;
-(void)itemUpdaterDidFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)updateNeedsInvalidation:(BOOL)arg0 forStatusItem:(id)arg1 ;


@end


#endif