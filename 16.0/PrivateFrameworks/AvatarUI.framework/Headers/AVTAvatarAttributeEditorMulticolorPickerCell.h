// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERCELL_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERCELL_H

@class UICollectionViewCell, UIButton, CALayer, UILabel;
@protocol AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionItem;



@interface AVTAvatarAttributeEditorMulticolorPickerCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (retain, nonatomic) CALayer *colorView; // ivar: _colorView
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorMulticolorPickerCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionItem> *item; // ivar: _item
@property (retain, nonatomic) UILabel *label; // ivar: _label


+(CGFloat)estimatedTitleSpaceForWidth:(CGFloat)arg0 isRemovable:(BOOL)arg1 isSelected:(BOOL)arg2 ;
+(CGFloat)estimatedWidthForLabelSize:(struct CGSize )arg0 isRemovable:(BOOL)arg1 isSelected:(BOOL)arg2 ;
+(id)cellIdentifier;
-(BOOL)isRTL;
-(BOOL)isRemovable;
-(BOOL)isShowingRemoveButton;
-(BOOL)shouldShowColorBorder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyAppearanceForSelected:(BOOL)arg0 ;
-(void)applyDefaultAppearanceForStyle:(NSInteger)arg0 ;
-(void)applySelectedAppearanceForStyle:(NSInteger)arg0 ;
-(void)didTapClearButton:(id)arg0 ;
-(void)layoutForLTR;
-(void)layoutForRTL;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;
-(void)showDropShadow;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColor;
-(void)updateColorViewBorder;


@end


#endif