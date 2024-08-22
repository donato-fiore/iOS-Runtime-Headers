// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUILABEL_H
#define AAUILABEL_H

@class UILabel;



@interface AAUILabel : UILabel

@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets


-(id)initWithCoder:(id)arg0 ;
-(id)initWithEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif