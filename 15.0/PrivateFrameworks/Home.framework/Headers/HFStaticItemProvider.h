// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSTATICITEMPROVIDER_H
#define HFSTATICITEMPROVIDER_H

@class NSSet;


#import "HFItemProvider.h"

@interface HFStaticItemProvider : HFItemProvider

@property (nonatomic) BOOL hasProvidedItems; // ivar: _hasProvidedItems
@property (retain, nonatomic) NSSet *staticItems; // ivar: _staticItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 items:(id)arg1 ;
-(id)initWithItems:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif