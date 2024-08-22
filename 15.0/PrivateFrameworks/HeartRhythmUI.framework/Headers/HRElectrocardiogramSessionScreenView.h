// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRELECTROCARDIOGRAMSESSIONSCREENVIEW_H
#define HRELECTROCARDIOGRAMSESSIONSCREENVIEW_H

@class UIView, UILabel, UIImageView;



@interface HRElectrocardiogramSessionScreenView : UIView

@property (readonly, nonatomic) UILabel *countdownUnitLabel; // ivar: _countdownUnitLabel
@property (readonly, nonatomic) UILabel *countdownValueLabel; // ivar: _countdownValueLabel
@property (readonly, nonatomic) BOOL isLargeDevice; // ivar: _isLargeDevice
@property (readonly, nonatomic) UIImageView *waveformView; // ivar: _waveformView


-(id)initWithLargeDevice:(BOOL)arg0 ;
-(void)_setUpUI;


@end


#endif