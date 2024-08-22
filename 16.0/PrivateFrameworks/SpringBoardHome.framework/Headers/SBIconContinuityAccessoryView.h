// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONCONTINUITYACCESSORYVIEW_H
#define SBICONCONTINUITYACCESSORYVIEW_H

@class UIView, UITapGestureRecognizer, NSString, SBFParallaxSettings;
@protocol SBIconAccessoryView, SBIconListLayout;


#import "SBDarkeningImageView.h"
#import "SBHomeScreenMaterialView.h"

@interface SBIconContinuityAccessoryView : UIView <SBIconAccessoryView>



@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, nonatomic) SBDarkeningImageView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NSInteger badgeType; // ivar: _badgeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBHomeScreenMaterialView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;


+(id)_imageForContinuityBadgeType:(NSInteger)arg0 highlighted:(BOOL)arg1 ;
-(BOOL)displayingAccessory;
-(CGFloat)badgeContentScale;
-(id)init;
-(struct CGPoint )accessoryCenterForIconBounds:(struct CGRect )arg0 ;
-(struct CGPoint )layoutOffset;
-(struct CGSize )badgeSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureAnimatedForIcon:(id)arg0 infoProvider:(id)arg1 animator:(id)arg2 ;
-(void)configureForIcon:(id)arg0 infoProvider:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryBrightness:(CGFloat)arg0 ;
-(void)setLegibilityStyle:(NSInteger)arg0 ;


@end


#endif