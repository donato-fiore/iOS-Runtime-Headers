// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCUIROWVIEW_H
#define BCUIROWVIEW_H

@class UIView, UIImageView, UILabel, NSNumberFormatter, _UIStaticBatteryView, NSMutableDictionary, NSString, UIImage, NSArray;
@protocol MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying, UIViewControllerTransitionCoordinator;



@interface BCUIRowView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>

 {
    UIImageView *_glyphImageView;
    UILabel *_nameLabel;
    UILabel *_percentChargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    _UIStaticBatteryView *_batteryView;
    UIView *_separator;
    NSMutableDictionary *_categoriesToVisualStylingProvider;
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
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator;


+(BOOL)isAX3PlusLayoutRequiredForContentSizeCategory:(id)arg0 ;
-(id)_lazyPercentChargeFormatter;
-(id)_percentChargeString:(NSInteger)arg0 ;
-(id)_visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_batteryViewFrameforContentSize:(id)arg0 percentChargeLabelFrame:(struct CGRect )arg1 ;
-(struct CGRect )_glyphImageViewFrameForContentSizeCategory:(id)arg0 ;
-(struct CGRect )_nameLabelFrameForContentSize:(id)arg0 percentChargeLabelFrame:(struct CGRect )arg1 ;
-(struct CGRect )_percentChargeLabelFrameForContentSizeCategory:(id)arg0 ;
-(struct CGRect )_sepatorFrameForContentSize:(id)arg0 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_configureBatteryViewIfNecessary;
-(void)_configureGlyphImageViewIfNecessary;
-(void)_configureNameLabelIfNecessary;
-(void)_configurePercentChargeLabelIfNecessary;
-(void)_configureSeparatorIfNecessary;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_updateBatteryViewIfNeccessary;
-(void)_updateGlyphImageViewIfNecessary:(id)arg0 ;
-(void)_updateNameLabelIfNecessary:(id)arg0 ;
-(void)_updatePercentChargeLabelIfNecessary:(id)arg0 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif