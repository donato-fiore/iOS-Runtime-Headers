// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCAPPPICKERVIEWHEADER_H
#define NCAPPPICKERVIEWHEADER_H

@class UICollectionReusableView, UILabel, UIView, UIImageView;



@interface NCAppPickerViewHeader : UICollectionReusableView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_orderingDescriptionLabel;
    UIView *_orderingWarningContainer;
    UILabel *_orderingWarningLabel;
    UIImageView *_orderingWarningIconImageView;
}




+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 supportsSortByAvgNumberOfNotifications:(BOOL)arg1 ;
+(id)_descriptionFont;
+(id)_descriptionText;
+(id)_orderingDescriptionFont;
+(id)_orderingDescriptionText;
+(id)_orderingWarningFont;
+(id)_orderingWarningText;
+(id)_titleFont;
+(id)_titleText;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureSupportsSortByAvgNumberOfNotifications:(BOOL)arg0 ;


@end


#endif