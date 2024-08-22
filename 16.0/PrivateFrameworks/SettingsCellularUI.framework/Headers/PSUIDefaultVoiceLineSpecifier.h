// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIDEFAULTVOICELINESPECIFIER_H
#define PSUIDEFAULTVOICELINESPECIFIER_H

@class PSSpecifier, NSArray, CTCellularPlanManager, PSSimStatusCache;


#import "PSUICellularPlanManagerCache.h"

@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier

@property (retain, nonatomic) NSArray *cachedPlanItems; // ivar: _cachedPlanItems
@property (retain, nonatomic) NSArray *cachedSubscriptionContexts; // ivar: _cachedSubscriptionContexts
@property (readonly, nonatomic) BOOL isSubcontrollerNeeded;
@property (retain, nonatomic) CTCellularPlanManager *planManager; // ivar: _planManager
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSSimStatusCache *simStatusCache; // ivar: _simStatusCache


-(id)defaultVoiceLine:(id)arg0 ;
-(id)getLogger;
-(id)initSpecifier;
-(id)initWithPlanManagerCache:(id)arg0 planManager:(id)arg1 simStatusCache:(id)arg2 ;
-(id)planItemForListItem:(id)arg0 ;
-(id)subscriptionContextForListItem:(id)arg0 ;
-(void)setDefaultVoiceLine:(id)arg0 specifier:(id)arg1 ;
-(void)updateCachedState;


@end


#endif