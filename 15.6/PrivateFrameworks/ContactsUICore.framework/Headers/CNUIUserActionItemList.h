// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIUSERACTIONITEMLIST_H
#define CNUIUSERACTIONITEMLIST_H

@class UIImage, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CNUIUserActionItemList : NSObject

@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithItems:(id)arg0 type:(id)arg1 icon:(id)arg2 ;


@end


#endif