// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISENSORATTRIBUTIONSENSORBUTTON_H
#define CCUISENSORATTRIBUTIONSENSORBUTTON_H

@class UIButton, UILabel, UIView, CCUISensorActivityData;



@interface CCUISensorAttributionSensorButton : UIButton

@property (nonatomic) CGRect cachedExpandedRect; // ivar: _cachedExpandedRect
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIView *indicatorView; // ivar: _indicatorView
@property (readonly, nonatomic) CCUISensorActivityData *sensorActivityData; // ivar: _sensorActivityData
@property (readonly, nonatomic) UIView *sensorIconView;
@property (readonly, nonatomic) NSUInteger sensorType;


-(BOOL)scalesLargeContentImage;
-(BOOL)showsLargeContentViewer;
-(CGFloat)_indicatorWidth;
-(id)_fontForTitleLabel;
-(id)initWithSensorActivityData:(id)arg0 ;
-(id)largeContentTitle;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enableUserInteractionForLargeContentViewerIfNeeded;
-(void)_layoutDescriptionLabel;
-(void)_layoutIndicatorView;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif