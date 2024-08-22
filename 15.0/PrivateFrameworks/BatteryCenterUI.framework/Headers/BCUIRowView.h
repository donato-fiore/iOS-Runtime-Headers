// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCUIROWVIEW_H
#define BCUIROWVIEW_H

@class UIView, UIImageView, UILabel, NSNumberFormatter, NSMutableDictionary, NSString, UIImage, NSArray;
@protocol MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying, UIViewControllerTransitionCoordinator;


#import "BCUIBatteryView.h"

@interface BCUIRowView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>

 {
    UIImageView *_glyphImageView;
    UILabel *_nameLabel;
    UILabel *_percentChargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    BCUIBatteryView *_batteryView;
    UIView *_separator;
    NSMutableDictionary *_categoriesToVisualStylingProvider;
    NSString *_contentSizeCategory;
}


@property (nonatomic, getter=isCharging) BOOL charging; // ivar: _charging
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIImage *glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLowCharge) BOOL lowCharge; // ivar: _lowCharge
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger percentCharge; // ivar: _percentCharge
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic) CGFloat scaleFactor;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator;


-(id)_effectiveContentSizeCategoryForTraitCollection:(id)arg0 ;
-(id)_lazyPercentChargeFormatter;
-(id)_percentChargeString:(NSInteger)arg0 ;
-(id)_visualStylingProviderForCategory:(NSInteger)arg0 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_configureBatteryViewIfNecessary;
-(void)_configureGlyphImageViewIfNecessary;
-(void)_configureNameLabelIfNecessary;
-(void)_configurePercentChargeLabelIfNecessary;
-(void)_configureSeparatorIfNecessary;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif