// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISENSORATTRIBUTIONCOMPACTCONTROL_H
#define CCUISENSORATTRIBUTIONCOMPACTCONTROL_H

@class UIControl, NSSet, NSUUID, UIView, UIImageView, UILabel, SBFView, NSString;
@protocol CCUISensorAttributionCompactControlDelegate;



@interface CCUISensorAttributionCompactControl : UIControl {
    CGSize _singleIndicatorSize;
    NSSet *_attributions;
    NSSet *_displayedAttributions;
    NSUUID *_touchUUID;
    CGFloat _touchDownDate;
}


@property (readonly, nonatomic) int activeIndicatorsCount;
@property (nonatomic) BOOL alwaysHidesSensorIcons; // ivar: _alwaysHidesSensorIcons
@property (readonly, nonatomic) UIView *cameraIndicatorView; // ivar: _cameraIndicatorView
@property (retain, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
@property (retain, nonatomic) UIView *chevronWrapperView; // ivar: _chevronWrapperView
@property (nonatomic) NSObject<CCUISensorAttributionCompactControlDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) SBFView *descriptionLabelWrapperView; // ivar: _descriptionLabelWrapperView
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic, getter=isDisplayingSensorStatus) BOOL displayingSensorStatus;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) CGFloat fixedHeight;
@property (readonly, nonatomic) UIView *locationIndicatorView; // ivar: _locationIndicatorView
@property (nonatomic) CGFloat maximumAllowableWidth; // ivar: _maximumAllowableWidth
@property (readonly, nonatomic) UIView *micIndicatorView; // ivar: _micIndicatorView
@property (nonatomic) BOOL showingCamera; // ivar: _showingCamera
@property (nonatomic) BOOL showingLocation; // ivar: _showingLocation
@property (nonatomic) BOOL showingMicrophone; // ivar: _showingMicrophone


-(CGFloat)_layoutSingleIndicatorView:(id)arg0 trailingX:(CGFloat)arg1 visible:(BOOL)arg2 ;
-(CGFloat)_visibleIndicatorsWidth;
-(id)_configureIndicatorViewForType:(NSUInteger)arg0 ;
-(id)_fontForTitleLabel;
-(id)_rightChevronImage;
-(id)clone;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsMaximumAllowableWidth;
-(void)_configureChevronViews;
-(void)_configureChevronWrapperAppearance;
-(void)_decideToExpandOrCompactAndForwardToDelegate:(id)arg0 ;
-(void)_layoutChevronViews;
-(void)_layoutDescriptionLabel;
-(void)_layoutIndicatorViews;
-(void)_setBlurRadius:(CGFloat)arg0 ofView:(id)arg1 ;
-(void)_setChevronAlphaForExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateContentIfDisplayedAttributionsAreStaleAndLayout;
-(void)handleTouchCanceled;
-(void)handleTouchDown;
-(void)handleTouchUpInside;
-(void)layoutSubviews;
-(void)sensorAttributionsChanged:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif