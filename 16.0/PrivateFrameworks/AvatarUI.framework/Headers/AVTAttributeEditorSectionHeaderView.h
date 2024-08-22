// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTATTRIBUTEEDITORSECTIONHEADERVIEW_H
#define AVTATTRIBUTEEDITORSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIButton, NSString, UILabel;
@protocol AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorSectionSupplementalPicker;



@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (weak, nonatomic) NSObject<AVTAttributeEditorSectionHeaderViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *displayString;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker; // ivar: _supplementalPicker


+(id)reuseIdentifier;
-(BOOL)isRTL;
-(id)chevronImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createAccessoryButtonIfNeeded;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonForSelectedSectionItem;
-(void)updateMenu;


@end


#endif