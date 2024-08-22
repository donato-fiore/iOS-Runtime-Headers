// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISENSORATTRIBUTIONPRIVACYHEADERVIEW_H
#define CCUISENSORATTRIBUTIONPRIVACYHEADERVIEW_H

@class SBFView, UIImageView, UILabel;
@protocol CCUISensorAttributionViewAnimating;



@interface CCUISensorAttributionPrivacyHeaderView : SBFView <CCUISensorAttributionViewAnimating>



@property (nonatomic) CGRect cachedExpandedRect; // ivar: cachedExpandedRect
@property (retain, nonatomic) UIImageView *handImageView; // ivar: _handImageView
@property (retain, nonatomic) UILabel *staticPrivacyHeaderLabel; // ivar: _staticPrivacyHeaderLabel


-(id)_filledPrivacyHandImage;
-(id)_imageSymbolConfiguration;
-(id)init;
-(void)setBlurRadius:(CGFloat)arg0 ;
-(void)sizeToFit;


@end


#endif