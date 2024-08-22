// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCUIRINGITEMVIEW_H
#define BCUIRINGITEMVIEW_H

@class UIView, UILabel, NSNumberFormatter, MTVisualStylingProvider, NSString, UIImage, NSArray;
@protocol MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying, UIViewControllerTransitionCoordinator;


#import "BCUIChargeRing.h"

@interface BCUIRingItemView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>

 {
    BCUIChargeRing *_chargeRing;
    UILabel *_chargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic, getter=isCharging) BOOL charging;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIImage *glyph;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLowCharge) BOOL lowCharge;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger percentCharge;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic) NSInteger ringItemViewStyle; // ivar: _ringItemViewStyle
@property (nonatomic) CGFloat ringLineWidth;
@property (nonatomic) CGFloat ringScale; // ivar: _ringScale
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator; // ivar: _transitionCoordinator


+(BOOL)isAX1PlusLayoutRequiredForContentSizeCategory:(id)arg0 ;
+(BOOL)isAX3PlusLayoutRequiredForContentSizeCategory:(id)arg0 ;
+(CGFloat)_ringLabelPaddingForContentSizeCategory:(id)arg0 ;
-(BOOL)_isPercentSymbolEnabledForRingItemStyle:(NSInteger)arg0 andContentSizeCategory:(id)arg1 ;
-(id)_chargeRing;
-(id)_lazyPercentChargeFormatter;
-(id)_percentChargeString:(NSInteger)arg0 ;
-(id)_visualStylingProviderForCategory:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForChargeLabelWithSize:(struct CGSize )arg0 baseLineOffsetFromBoundsTop:(CGFloat)arg1 chargeRingSize:(struct CGSize )arg2 style:(NSInteger)arg3 inBounds:(struct CGRect )arg4 scale:(CGFloat)arg5 ;
-(struct CGRect )_frameForChargeRingWithSize:(struct CGSize )arg0 chargeLabelSize:(struct CGSize )arg1 style:(NSInteger)arg2 inBounds:(struct CGRect )arg3 scale:(CGFloat)arg4 ;
-(struct CGRect )_largestPossibleFrameForChargeLabelGivenBounds:(struct CGRect )arg0 chargeRingSize:(struct CGSize )arg1 andRingLabelPadding:(CGFloat)arg2 ;
-(struct CGSize )_sizeForChargeLabel:(id)arg0 withStyle:(NSInteger)arg1 inBounds:(struct CGRect )arg2 scale:(CGFloat)arg3 ;
-(struct CGSize )_sizeForChargeRingWithStyle:(NSInteger)arg0 inBounds:(struct CGRect )arg1 withPreferredContentSizeCategory:(id)arg2 ;
-(void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
-(void)_configureChargeLabelForStyle:(NSInteger)arg0 ;
-(void)_stopAutomaticallyUpdatingVisualStyling;
-(void)_updateFontForChargeLabelForStyle:(NSInteger)arg0 andContentSizeCategory:(id)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif