// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUISENSORSTATUSVIEW_H
#define CCUISENSORSTATUSVIEW_H

@class UIView;


#import "CCUISensorStatusButton.h"

@interface CCUISensorStatusView : UIView

@property (retain, nonatomic) CCUISensorStatusButton *cameraSensorStatusButton; // ivar: _cameraSensorStatusButton
@property (nonatomic, getter=isDisplayingSensorStatus) BOOL displayingSensorStatus; // ivar: _displayingSensorStatus
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) CCUISensorStatusButton *micSensorStatusButton; // ivar: _micSensorStatusButton


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleSensorStatusButtonTap:(id)arg0 ;
-(void)_openPreferencesForBundleIdentifier:(id)arg0 ;
-(void)configureStatusForSensorType:(NSUInteger)arg0 sensorActivityData:(id)arg1 ;
-(void)layoutSubviews;
-(void)resetStatusForSensorType:(NSUInteger)arg0 ;


@end


#endif