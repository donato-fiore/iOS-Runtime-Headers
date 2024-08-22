// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCCMOSAICITEM_H
#define HUCCMOSAICITEM_H

@class HFItem<HFHomeKitItemProtocol>;
@protocol HUCCMosaicOrderable;

#import <Foundation/Foundation.h>


@interface HUCCMosaicItem : NSObject <HUCCMosaicOrderable>



@property (retain, nonatomic) HFItem<HFHomeKitItemProtocol> *baseItem; // ivar: _baseItem
@property (nonatomic) CGFloat itemPriority; // ivar: _itemPriority
@property (nonatomic) NSUInteger itemSize; // ivar: _itemSize
@property (nonatomic) NSUInteger itemType; // ivar: _itemType


-(id)init;
-(id)initWithBaseItem:(id)arg0 ;


@end


#endif