// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICELLVIEWACCESSORY_H
#define _UICELLVIEWACCESSORY_H



#import "UICellAccessory.h"
#import "UIView.h"

@interface _UICellViewAccessory : UICellAccessory

@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) UIView *view;


+(id)accessoryWithIdentifier:(id)arg0 view:(id)arg1 options:(NSInteger)arg2 ;
+(id)accessoryWithIdentifier:(id)arg0 view:(id)arg1 options:(NSInteger)arg2 reservedLayoutWidth:(CGFloat)arg3 ;
-(BOOL)alwaysNeedsLayout;
-(BOOL)isEqual:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif