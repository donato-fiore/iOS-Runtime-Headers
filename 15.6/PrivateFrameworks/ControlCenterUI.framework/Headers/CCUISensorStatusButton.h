// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUISENSORSTATUSBUTTON_H
#define CCUISENSORSTATUSBUTTON_H

@class UIButton, NSString, UILabel, UIView, CCUISensorActivityData, UIImageView;



@interface CCUISensorStatusButton : UIButton

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIView *indicatorView; // ivar: _indicatorView
@property (copy, nonatomic) CCUISensorActivityData *sensorActivityData; // ivar: _sensorActivityData
@property (retain, nonatomic) UIImageView *settingsLaunchIndicatorImageView; // ivar: _settingsLaunchIndicatorImageView


-(BOOL)scalesLargeContentImage;
-(BOOL)showsLargeContentViewer;
-(CGFloat)_indicatorsWidth;
-(id)_cameraIndicatorImage;
-(id)_fontForTitleLabel;
-(id)_imageSymbolConfiguration;
-(id)_micIndicatorImage;
-(id)_plainCircleImage;
-(id)_rightChevronImage;
-(id)initWithSensorActivityData:(id)arg0 ;
-(id)largeContentTitle;
-(id)sensorDescription;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDescriptionLabelIfNecessary;
-(void)_configureIndicatorViewIfNecessary;
-(void)_configureSettingsLaunchIndicatorImageView;
-(void)_layoutDescriptionLabelIfNecessary;
-(void)_layoutIndicatorViewIfNecessary;
-(void)_layoutSettingsLaunchIndicatorImageView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif