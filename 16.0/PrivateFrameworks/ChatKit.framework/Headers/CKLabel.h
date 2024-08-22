// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLABEL_H
#define CKLABEL_H

@class UILabel, NSSet, UIImageView;



@interface CKLabel : UILabel

@property (nonatomic) BOOL shouldHaveRotatedTitleIconImage; // ivar: _shouldHaveRotatedTitleIconImage
@property (nonatomic) CGRect textRectForAccessoryImageView; // ivar: _textRectForAccessoryImageView
@property (nonatomic) NSInteger titleIconImageType; // ivar: _titleIconImageType
@property (retain, nonatomic) NSSet *titleIconImageTypesSupportingRotation; // ivar: _titleIconImageTypesSupportingRotation
@property (retain, nonatomic) UIImageView *titleIconImageView; // ivar: _titleIconImageView


-(BOOL)hasAccessoryImageView;
-(BOOL)isLTR;
-(BOOL)titleIconImageTypeSupportsRotation:(NSInteger)arg0 ;
-(struct CGRect )rectToDrawTextInForRect:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeOfAccessoryImageView;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_rotateTitleIconImageView;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setTextColor:(id)arg0 ;


@end


#endif