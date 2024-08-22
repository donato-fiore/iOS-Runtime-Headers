// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKEXTRALARGETIMEVIEW_H
#define NTKEXTRALARGETIMEVIEW_H

@class UIView, CLKDevice, NSString;
@protocol NTKTimeView;


#import "NTKDigitalTimeLabel.h"

@interface NTKExtraLargeTimeView : UIView <NTKTimeView>

 {
    CLKDevice *_device;
    BOOL _statusBarVisible;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeHourView; // ivar: _timeHourView
@property (retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView; // ivar: _timeMinuteView


-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(void)_configureTimeLabelsFont;
-(void)cancelWristRaiseAnimation;
-(void)layoutSubviews;
-(void)performWristRaiseAnimation;
-(void)prepareWristRaiseAnimation;
-(void)setBottomColor:(id)arg0 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setStatusBarVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setTopColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif