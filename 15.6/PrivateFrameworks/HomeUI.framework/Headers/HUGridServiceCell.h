// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDSERVICECELL_H
#define HUGRIDSERVICECELL_H

@class UIView, UIActivityIndicatorView, UILabel, NSString, UIColor, UIVisualEffectView, HFItem, UIImageView;
@protocol HUAccessoryViewCellProtocol, HUIconRenouncing, NACancelable;


#import "HUGridCell.h"
#import "HUVisualEffectContainerView.h"
#import "HUIconView.h"
#import "HUGridServiceCellLayoutOptions.h"
#import "HUGridServiceCellTextView.h"

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol, HUIconRenouncing>



@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *coloredDescriptionLabel; // ivar: _coloredDescriptionLabel
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *defaultDescriptionColor; // ivar: _defaultDescriptionColor
@property (retain, nonatomic) UIColor *defaultNameTextColor; // ivar: _defaultNameTextColor
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *descriptionLabelEffectView; // ivar: _descriptionLabelEffectView
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (retain, nonatomic) HUVisualEffectContainerView *exclamationView; // ivar: _exclamationView
@property (retain, nonatomic) HUVisualEffectContainerView *firmwareUpdateView; // ivar: _firmwareUpdateView
@property (nonatomic) BOOL hasUpdatedUISinceLastReuse; // ivar: _hasUpdatedUISinceLastReuse
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions;
@property (retain, nonatomic) UIView *overrideAccessoryView; // ivar: _overrideAccessoryView
@property (retain, nonatomic) HFItem *serviceItem; // ivar: _serviceItem
@property (retain, nonatomic) HUGridServiceCellTextView *serviceTextView; // ivar: _serviceTextView
@property (nonatomic) BOOL shouldColorDescription; // ivar: _shouldColorDescription
@property (nonatomic) BOOL shouldShowLoadingState; // ivar: _shouldShowLoadingState
@property (nonatomic) BOOL shouldShowRoomName; // ivar: _shouldShowRoomName
@property (nonatomic) BOOL showProgressIndicatorAfterDelay;
@property (retain, nonatomic) NSObject<NACancelable> *showProgressIndicatorAfterDelayToken; // ivar: _showProgressIndicatorAfterDelayToken
@property (nonatomic) BOOL showUpdatingStateAfterDelay;
@property (retain, nonatomic) NSObject<NACancelable> *showUpdatingStateAfterDelayToken; // ivar: _showUpdatingStateAfterDelayToken
@property (nonatomic) BOOL showingProgressIndicator; // ivar: _showingProgressIndicator
@property (nonatomic) BOOL showingUpdatingState; // ivar: _showingUpdatingState
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *supplementaryImageView; // ivar: _supplementaryImageView


+(id)_iconTintColor;
-(NSInteger)_symbolScaleForCurrentEnvironment;
-(id)_backgroundColorForSupplementaryIcon;
-(id)_descriptionTextAttributesWithColor:(id)arg0 ;
-(id)_textConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(void)_createExclamationViewIfNecessary;
-(void)_createFirmwareUpdateViewIfNecessary;
-(void)_setupCommonServiceCell;
-(void)_setupServiceCell;
-(void)_updateAccessoryView;
-(void)_updateExclamationViewColor;
-(void)_updateIconAnimated:(BOOL)arg0 ;
-(void)_updateSecondaryContentDisplayStyle;
-(void)_updateSupplementaryImageViewIfNecessary;
-(void)_updateText;
-(void)displayStyleDidChange;
-(void)dragStateDidChange:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)reclaimIconIfPossible;
-(void)renounceIcon;
-(void)setItem:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif