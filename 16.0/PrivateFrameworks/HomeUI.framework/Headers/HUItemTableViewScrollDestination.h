// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUITEMTABLEVIEWSCROLLDESTINATION_H
#define HUITEMTABLEVIEWSCROLLDESTINATION_H

@class HFItem;

#import <Foundation/Foundation.h>


@interface HUItemTableViewScrollDestination : NSObject

@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) HFItem *item; // ivar: _item


-(id)initWithItem:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif