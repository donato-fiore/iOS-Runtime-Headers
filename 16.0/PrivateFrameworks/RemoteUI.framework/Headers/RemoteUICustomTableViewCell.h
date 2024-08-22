// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTEUICUSTOMTABLEVIEWCELL_H
#define REMOTEUICUSTOMTABLEVIEWCELL_H

@class UILabel, UITextField, UIImageView, UIStackView;


#import "RemoteUITableViewCell.h"
#import "RUIImageView.h"

@interface RemoteUICustomTableViewCell : RemoteUITableViewCell

@property (readonly, nonatomic) UILabel *customDetailTextLabel;
@property (retain, nonatomic) UILabel *customDetailTextLabelInternal; // ivar: _customDetailTextLabelInternal
@property (readonly, nonatomic) UITextField *customEditableTextField;
@property (retain, nonatomic) UITextField *customEditableTextFieldInternal; // ivar: _customEditableTextFieldInternal
@property (readonly, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) RUIImageView *customImageViewInternal; // ivar: _customImageViewInternal
@property (readonly, nonatomic) UILabel *customTextLabel;
@property (retain, nonatomic) UILabel *customTextLabelInternal; // ivar: _customTextLabelInternal
@property (readonly, nonatomic) UILabel *customValueLabel;
@property (retain, nonatomic) UILabel *customValueLabelInternal; // ivar: _customValueLabelInternal
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UIStackView *verticalStackView; // ivar: _verticalStackView


-(CGFloat)_defaultImageViewMaxWidth;
-(CGFloat)_imageViewToTextMargin;
-(id)_detailTextLabelInternal;
-(id)_editableTextFieldInternal;
-(id)_imageViewInternal;
-(id)_textLabelInternal;
-(id)_valueLabelInternal;
-(void)_initializeViews;
-(void)addDetailLinkButton:(id)arg0 ;


@end


#endif