// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFFAKEMEDIAACCESSORYITEM_H
#define HFFAKEMEDIAACCESSORYITEM_H



#import "HFItem.h"

@interface HFFakeMediaAccessoryItem : HFItem

@property (nonatomic) NSInteger mediaAccessoryItemType; // ivar: _mediaAccessoryItemType


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)createControlItemsWithOptions:(id)arg0 ;
-(id)description;
-(id)initWithMediaAccessoryItemType:(NSInteger)arg0 ;


@end


#endif