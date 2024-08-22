// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRELECTROCARDIOGRAMSESSIONSIMULATIONVIEW_H
#define HRELECTROCARDIOGRAMSESSIONSIMULATIONVIEW_H

@class UIView;


#import "HRElectrocardiogramSessionScreenView.h"

@interface HRElectrocardiogramSessionSimulationView : UIView

@property (nonatomic) CGFloat cornerRadius;
@property (readonly, nonatomic) BOOL isLargeDevice; // ivar: _isLargeDevice
@property (readonly, nonatomic) HRElectrocardiogramSessionScreenView *screenView; // ivar: _screenView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 isLargeDevice:(BOOL)arg1 ;
-(void)_setUpUI;
-(void)layoutSubviews;
-(void)setTimeRemaining:(CGFloat)arg0 ;


@end


#endif