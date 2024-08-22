// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSELECTABLEROOMTRANSFORMITEM_H
#define HFSELECTABLEROOMTRANSFORMITEM_H



#import "HFTransformItem.h"
#import "HFRoomItem.h"

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (readonly, nonatomic) HFRoomItem *roomItem;


-(id)initWithRoomItem:(id)arg0 accessoryVendor:(id)arg1 ;
// -(id)initWithSourceItem:(id)arg0 updateOptionsTransformBlock:(id)arg1 resultsTransformBlock:(unk)arg2  ;


@end


#endif