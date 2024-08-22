// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYCATEGORYSTATUSITEM_H
#define HFACCESSORYCATEGORYSTATUSITEM_H

@class NSArray, NSString;
@protocol HFReorderableItemListItemProtocol;


#import "HFStatusItem.h"
#import "HFAccessoryTypeGroup.h"

@interface HFAccessoryCategoryStatusItem : HFStatusItem <HFReorderableItemListItemProtocol>



@property (readonly, nonatomic) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (readonly, nonatomic) NSArray *statusItems; // ivar: _statusItems
@property (readonly, copy, nonatomic) NSString *uuidString; // ivar: _uuidString


+(id)statusItemClasses;
-(id)_statusItemOfClass:(Class)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 valueSource:(id)arg2 ;
-(id)sortedActionSetItemsWithProvider:(id)arg0 ;


@end


#endif