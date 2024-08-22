// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICELLACCESSORY_H
#define _UICELLACCESSORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UICellAccessory : NSObject

@property (readonly, nonatomic) BOOL alwaysNeedsLayout; // ivar: _alwaysNeedsLayout
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat reservedLayoutWidth; // ivar: _reservedLayoutWidth
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(id)accessoryWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif