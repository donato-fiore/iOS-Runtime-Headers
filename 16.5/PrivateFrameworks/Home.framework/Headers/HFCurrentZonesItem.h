// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCURRENTZONESITEM_H
#define HFCURRENTZONESITEM_H

@class HMRoom;


#import "HFItem.h"

@interface HFCurrentZonesItem : HFItem

@property (readonly, nonatomic) HMRoom *room; // ivar: _room


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithRoom:(id)arg0 ;


@end


#endif