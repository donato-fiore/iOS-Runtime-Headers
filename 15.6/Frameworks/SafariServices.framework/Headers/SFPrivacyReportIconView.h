// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRIVACYREPORTICONVIEW_H
#define SFPRIVACYREPORTICONVIEW_H

@class UIView, UIImageView, CAGradientLayer;



@interface SFPrivacyReportIconView : UIView {
    UIImageView *_mask;
}


@property (readonly, nonatomic) CAGradientLayer *gradientLayer;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateColors;
-(void)_updateSymbolConfiguration;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif