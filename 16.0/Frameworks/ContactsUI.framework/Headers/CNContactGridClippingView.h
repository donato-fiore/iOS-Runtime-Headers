// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTGRIDCLIPPINGVIEW_H
#define CNCONTACTGRIDCLIPPINGVIEW_H

@class UIView, CAShapeLayer;


#import "CNAvatarView.h"

@interface CNContactGridClippingView : UIView

@property (retain, nonatomic) CAShapeLayer *actionsMaskLayer; // ivar: _actionsMaskLayer
@property (weak, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (nonatomic) BOOL masksToAvatar;


-(void)layoutSubviews;


@end


#endif