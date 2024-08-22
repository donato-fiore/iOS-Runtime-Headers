// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYLIKEITEMPROVIDER_H
#define HFACCESSORYLIKEITEMPROVIDER_H

@class NSMutableSet, NSArray, HMHome;
@protocol HFAccessoryLikeObjectContainer, HFAccessoryRepresentableObjectFiltering, HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFAccessoryLikeItemProvider : HFItemProvider

@property (readonly, nonatomic) NSObject<HFAccessoryLikeObjectContainer> *accessoryContainer; // ivar: _accessoryContainer
@property (retain, nonatomic) NSObject<HFAccessoryRepresentableObjectFiltering> *accessoryContainerFilter; // ivar: _accessoryContainerFilter
@property (retain, nonatomic) NSMutableSet *accessoryLikeItems; // ivar: _accessoryLikeItems
@property (retain, nonatomic) NSArray *accessoryTypeGroups; // ivar: _accessoryTypeGroups
@property (copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger objectLevel; // ivar: _objectLevel
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)buildItemForAccessoryRepresentable:(id)arg0 ;
-(id)initWithAccessoryContainer:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithRoom:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif