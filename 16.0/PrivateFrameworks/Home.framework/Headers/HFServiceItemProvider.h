// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICEITEMPROVIDER_H
#define HFSERVICEITEMPROVIDER_H

@class HMHome, NSMutableSet, NSArray;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFServiceItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (retain, nonatomic) NSMutableSet *serviceItems; // ivar: _serviceItems
@property (retain, nonatomic) NSArray *serviceTypes; // ivar: _serviceTypes
@property (copy, nonatomic) id *sourceServiceGenerator; // ivar: _sourceServiceGenerator
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 serviceTypes:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif