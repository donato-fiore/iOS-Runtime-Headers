// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBUSINESSMACTOOLBARVIEW_H
#define CKBUSINESSMACTOOLBARVIEW_H

@class UIView, UIImage, NSData, UILabel;



@interface CKBusinessMacToolbarView : UIView

@property (retain, nonatomic) UIImage *bannerImage; // ivar: _bannerImage
@property (retain, nonatomic) NSData *bannerImageData; // ivar: _bannerImageData
@property (nonatomic) CGRect detailsPopoverFrame; // ivar: _detailsPopoverFrame
@property (retain, nonatomic) UILabel *fallbackTitleLabel; // ivar: _fallbackTitleLabel
@property (retain, nonatomic) UIView *leftItemView; // ivar: _leftItemView
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (nonatomic) BOOL showingInStandAloneWindow; // ivar: _showingInStandAloneWindow


-(id)_generateScaledImageFromBannerData;
-(struct CGSize )_maxSizeForImage:(id)arg0 ;
-(void)_updateBannerImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)setFallbackTitle:(id)arg0 ;
-(void)setFallbackTitleColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif