// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DISCLOSURELABEL_H
#define _DISCLOSURELABEL_H

@class UILabel;



@interface _DisclosureLabel : UILabel

@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif