// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTINGTABLEVIEWCELL_H
#define MPAVROUTINGTABLEVIEWCELL_H

@class UIImageView, UILabel, NSTimer, UIActivityIndicatorView, UIView, NSString;
@protocol MPAVRoutingThemeableCellView, MPAVRoutingTableViewCellDelegate;


#import "MPAVClippingTableViewCell.h"
#import "MPAVRoutingTableViewCellSubtitleTextState.h"
#import "MPVolumeSlider.h"

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell <MPAVRoutingThemeableCellView>

 {
    UIImageView *_iconImageView;
    UILabel *_routeNameLabel;
    UILabel *_subtitleTextLabel;
    NSTimer *_subtitleTextUpdateTimer;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_smartAudioImageView;
    UIImageView *_checkmarkImageView;
    UIImageView *_chevronImageView;
    UIView *_expandTargetView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPAVRoutingTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconStyle; // ivar: _iconStyle
@property (nonatomic) BOOL isDisplayedAsPicked; // ivar: _isDisplayedAsPicked
@property (nonatomic) NSUInteger mirroringStyle; // ivar: _mirroringStyle
@property (nonatomic) BOOL mirroringSwitchVisible; // ivar: _mirroringSwitchVisible
@property (nonatomic, getter=isPendingSelection) BOOL pendingSelection; // ivar: _pendingSelection
@property (nonatomic) BOOL provideOwnSeparator; // ivar: _provideOwnSeparator
@property (nonatomic, getter=isShowingVolumeSlider) BOOL showingVolumeSlider; // ivar: _showingVolumeSlider
@property (retain, nonatomic) MPAVRoutingTableViewCellSubtitleTextState *subtitleTextState; // ivar: _subtitleTextState
@property (nonatomic) CGFloat subtitleViewAlpha; // ivar: _subtitleViewAlpha
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSmartAudioCheckmarkStyle; // ivar: _useSmartAudioCheckmarkStyle
@property (retain, nonatomic) MPVolumeSlider *volumeSlider; // ivar: _volumeSlider


-(BOOL)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg0 ;
-(id)_batteryTextForRoute:(id)arg0 ;
-(id)_checkmarkAccessibilityLabelForSmartAudio;
-(id)_checkmarkImageForSmartAudio;
-(id)_checkmarkImageNameForSmartAudio;
-(id)_iconImageForRoute:(id)arg0 ;
-(id)_iconImageForRoutes:(id)arg0 ;
-(id)_pairedDeviceTextForRoute:(id)arg0 ;
-(id)iconView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)separatorView;
-(id)subtitleView;
-(id)titleView;
-(id)volumeView;
-(void)_animateSubtitleLabelToNextAvailableText;
-(void)_configureDetailLabel:(id)arg0 ;
-(void)_configureLabel:(id)arg0 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateAccessory;
-(void)_updateSpinnerColor;
-(void)_updateSubtitleTextLabelForRouteItem:(id)arg0 ;
-(void)dealloc;
-(void)didTapToExpand;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryType:(NSInteger)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)updateForEndpoint:(id)arg0 routeItem:(id)arg1 inferLocalizedModelName:(BOOL)arg2 ;


@end


#endif