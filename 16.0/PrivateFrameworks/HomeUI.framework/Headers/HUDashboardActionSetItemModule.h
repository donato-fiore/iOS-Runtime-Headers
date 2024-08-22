// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDACTIONSETITEMMODULE_H
#define HUDASHBOARDACTIONSETITEMMODULE_H

@class HFItemModule, HFActionSetItemProvider, NSString, NAFuture, HFPredictedActionSetItemProvider, NSSet;
@protocol HFItemHiding, HFPredictionsManagerDelegate, HFCharacteristicValueSource;


#import "HUDashboardContext.h"

@interface HUDashboardActionSetItemModule : HFItemModule <HFItemHiding, HFPredictionsManagerDelegate>



@property (retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider; // ivar: _actionSetItemProvider
@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *initialPredictionUpdateFuture; // ivar: _initialPredictionUpdateFuture
@property (retain, nonatomic) HFPredictedActionSetItemProvider *predictedActionSetItemProvider; // ivar: _predictedActionSetItemProvider
@property (readonly, nonatomic) NSSet *predictedActionSetItems;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(BOOL)showPredictedScenes;
-(BOOL)supportsReorderingForItem:(id)arg0 ;
-(id)_itemComparator:(SEL)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_reorderableHomeKitItemListKey;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;
-(void)_updateFilters;
-(void)predictionsManagerDidUpdatePredictions:(id)arg0 ;


@end


#endif