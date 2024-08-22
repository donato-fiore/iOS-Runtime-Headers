// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGBADGE_H
#define _UIDRAGBADGE_H



#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UIDragBadge : UIView

@property (readonly, nonatomic) UIImageView *_imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *_label; // ivar: _label
@property (readonly, nonatomic) CGPoint anchorPointForAlignment;
@property (nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (nonatomic) NSInteger style; // ivar: _style


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(void)_updateForStyle;
-(void)_updateLabelTextFromItemCount;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif