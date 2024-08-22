// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIAACCESSCONTROLEDITORITEMPROVIDER_H
#define HFMEDIAACCESSCONTROLEDITORITEMPROVIDER_H

@class NSArray, HMHome, NSMutableDictionary;


#import "HFStaticItemProvider.h"
#import "HFStaticItem.h"

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider

@property (copy, nonatomic) NSArray *accessControlItems; // ivar: _accessControlItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableDictionary *itemForIdentifier; // ivar: _itemForIdentifier
@property (copy, nonatomic) HFStaticItem *passwordEnableItem; // ivar: _passwordEnableItem
@property (copy, nonatomic) HFStaticItem *passwordItem; // ivar: _passwordItem


-(id)_buildItems;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)items;


@end


#endif