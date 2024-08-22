// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFROOMBUILDERITEM_H
#define HFROOMBUILDERITEM_H



#import "HFItem.h"
#import "HFRoomBuilder.h"

@interface HFRoomBuilderItem : HFItem

@property (readonly, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithRoomBuilder:(id)arg0 ;


@end


#endif