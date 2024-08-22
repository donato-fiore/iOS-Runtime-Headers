// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFGENERICACCESSORYITEMPROVIDER_H
#define HFGENERICACCESSORYITEMPROVIDER_H

@class NSMutableSet, HMHome;


#import "HFItemProvider.h"

@interface HFGenericAccessoryItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) NSMutableSet *genericItems; // ivar: _genericItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif