// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFITEMGROUPITEM_H
#define HFITEMGROUPITEM_H

@class NSSet;


#import "HFItem.h"

@interface HFItemGroupItem : HFItem

@property (readonly, nonatomic) NSSet *items; // ivar: _items


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithItems:(id)arg0 ;


@end


#endif