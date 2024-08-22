// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPREDICTIONSITEMPROVIDER_H
#define HFPREDICTIONSITEMPROVIDER_H

@class NSMutableSet, HMHome, NSMutableDictionary, NSArray;


#import "HFItemProvider.h"
#import "HFPredictionsManager.h"

@interface HFPredictionsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger itemLimit; // ivar: _itemLimit
@property (retain, nonatomic) NSMutableDictionary *objectPriorities; // ivar: _objectPriorities
@property (retain, nonatomic) NSArray *predictions; // ivar: _predictions
@property (retain, nonatomic) HFPredictionsManager *predictionsManager; // ivar: _predictionsManager


-(id)_loadHomeKitObjectsWithPredictions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 predictionsManager:(id)arg1 itemLimit:(NSUInteger)arg2 ;
-(id)invalidationReasons;
-(id)itemPriority:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif