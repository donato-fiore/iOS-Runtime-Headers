// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPREDICTEDACTIONSETITEMPROVIDER_H
#define HFPREDICTEDACTIONSETITEMPROVIDER_H

@class NSMutableSet, HMHome, NSArray;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"
#import "HFPredictionsManager.h"

@interface HFPredictedActionSetItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (readonly, nonatomic) NSArray *orderedItems;
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (retain, nonatomic) NSArray *predictions; // ivar: _predictions
@property (retain, nonatomic) HFPredictionsManager *predictionsManager; // ivar: _predictionsManager
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchUserActionPredictions;
-(id)init;
-(id)initWithHome:(id)arg0 predictionsManagerDelegate:(id)arg1 itemCount:(NSUInteger)arg2 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif