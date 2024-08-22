// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILISTLOCKUPCOLLECTIONVIEWCELLVIEW_H
#define VUILISTLOCKUPCOLLECTIONVIEWCELLVIEW_H

@class UIView;


#import "VUIBaseView.h"
#import "FocusableTextView.h"
#import "VUIButton.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"

@interface VUIListLockupCollectionViewCellView : VUIBaseView

@property (retain, nonatomic) FocusableTextView *descriptionTextView; // ivar: _descriptionTextView
@property (nonatomic) NSInteger imagePosition; // ivar: _imagePosition
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (retain, nonatomic) VUIButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) VUIButton *secondaryButton; // ivar: _secondaryButton
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)vui_prepareForReuse;
-(void)vui_setHighlighted:(BOOL)arg0 ;


@end


#endif