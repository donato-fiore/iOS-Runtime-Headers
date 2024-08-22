// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPERSONITEMPROVIDER_H
#define HFPERSONITEMPROVIDER_H

@class HMHome, NSMutableSet, HMPersonManager;


#import "HFItemProvider.h"

@interface HFPersonItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *personItems; // ivar: _personItems
@property (retain, nonatomic) HMPersonManager *personManager; // ivar: _personManager


-(id)initWithHome:(id)arg0 personManager:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif