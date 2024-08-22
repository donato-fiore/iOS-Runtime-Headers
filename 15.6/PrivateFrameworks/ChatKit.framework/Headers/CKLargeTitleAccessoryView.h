// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLARGETITLEACCESSORYVIEW_H
#define CKLARGETITLEACCESSORYVIEW_H

@class UIView, NSArray;



@interface CKLargeTitleAccessoryView : UIView

@property (retain, nonatomic) NSArray *accessoryButtons; // ivar: _accessoryButtons


+(id)newComposeButton;
+(id)newOptionsButton;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif