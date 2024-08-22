// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGPICKERLABELEDCELLVIEW_H
#define PREDITINGPICKERLABELEDCELLVIEW_H

@class UIButton, UILabel;



@interface PREditingPickerLabeledCellView : UIButton

@property (readonly, nonatomic) UILabel *contentLabel; // ivar: _contentLabel
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif