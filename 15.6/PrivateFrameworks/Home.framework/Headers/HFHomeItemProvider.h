// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEITEMPROVIDER_H
#define HFHOMEITEMPROVIDER_H

@class NSMutableSet, HMHomeManager;


#import "HFItemProvider.h"

@interface HFHomeItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) NSMutableSet *homeItems; // ivar: _homeItems
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager


-(id)initWithHomeManager:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif