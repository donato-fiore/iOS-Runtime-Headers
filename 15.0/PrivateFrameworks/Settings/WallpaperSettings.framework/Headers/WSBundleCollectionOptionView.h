// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WSBUNDLECOLLECTIONOPTIONVIEW_H
#define WSBUNDLECOLLECTIONOPTIONVIEW_H

@class UIView, UIButton, NSLayoutConstraint, UILabel, UIStackView, WKWallpaperBundleCollection;
@protocol WSBundleCollectionOptionViewDelegate;



@interface WSBundleCollectionOptionView : UIView

@property (retain, nonatomic) UIButton *_button; // ivar: __button
@property (retain, nonatomic) NSLayoutConstraint *_buttonHeightConstraint; // ivar: __buttonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *_buttonWidthConstraint; // ivar: __buttonWidthConstraint
@property (retain, nonatomic) UILabel *_label; // ivar: __label
@property (retain, nonatomic) UIStackView *_stackView; // ivar: __stackView
@property (readonly, nonatomic) WKWallpaperBundleCollection *bundleCollection; // ivar: _bundleCollection
@property (nonatomic) CGSize canonicalButtonSize; // ivar: _canonicalButtonSize
@property (weak, nonatomic) NSObject<WSBundleCollectionOptionViewDelegate> *delegate; // ivar: _delegate


-(id)_imageForButtonForCurrentInterfaceStyle;
-(id)initWithFrame:(struct CGRect )arg0 bundleCollection:(id)arg1 canonicalButtonSize:(struct CGSize )arg2 ;
-(void)_configureView;
-(void)_userDidTapButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif