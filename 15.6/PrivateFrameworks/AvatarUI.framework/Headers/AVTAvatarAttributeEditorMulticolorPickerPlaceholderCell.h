// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERPLACEHOLDERCELL_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERPLACEHOLDERCELL_H

@class UICollectionViewCell, UILabel;
@protocol AVTAvatarAttributeEditorSectionItem;



@interface AVTAvatarAttributeEditorMulticolorPickerPlaceholderCell : UICollectionViewCell

@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionItem> *item; // ivar: _item
@property (retain, nonatomic) UILabel *label; // ivar: _label


+(CGFloat)estimatedTitleSpaceForWidth:(CGFloat)arg0 ;
+(CGFloat)estimatedWidthForLabelSize:(struct CGSize )arg0 ;
+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif