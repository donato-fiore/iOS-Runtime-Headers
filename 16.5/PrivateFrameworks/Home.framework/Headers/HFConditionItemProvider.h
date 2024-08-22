// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCONDITIONITEMPROVIDER_H
#define HFCONDITIONITEMPROVIDER_H

@class NSMutableSet, NSSet, HMHome;


#import "HFItemProvider.h"

@interface HFConditionItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *conditionItems; // ivar: _conditionItems
@property (retain, nonatomic) NSSet *conditions; // ivar: _conditions
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)init;
-(id)initWithConditions:(id)arg0 home:(id)arg1 ;
-(id)items;
-(id)reloadItems;


@end


#endif