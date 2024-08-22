// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRPADDINGLABEL_H
#define HRPADDINGLABEL_H

@class UILabel;



@interface HRPaddingLabel : UILabel

@property (nonatomic) UIEdgeInsets padding; // ivar: _padding


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif