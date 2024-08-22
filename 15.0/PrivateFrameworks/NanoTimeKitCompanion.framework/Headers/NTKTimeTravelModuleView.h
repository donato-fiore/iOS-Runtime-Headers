// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTIMETRAVELMODULEVIEW_H
#define NTKTIMETRAVELMODULEVIEW_H

@class UIView, UILabel, NSDate, NSDateComponentsFormatter, NSCalendar, CALayer;
@protocol NTKTimeTravelModuleViewTapClient;


#import "NTKModuleView.h"

@interface NTKTimeTravelModuleView : NTKModuleView {
    UIView *_backgroundView;
    UILabel *_timeScrubDifferenceLabel;
    UILabel *_timeScrubNowLabel;
    NSDate *_date;
    NSDateComponentsFormatter *_offsetDateFormatter;
    BOOL _is24HourMode;
    BOOL _shouldUseNowText;
    NSCalendar *_cal;
    CALayer *_borderLayer;
    CGFloat _nowLabelCenterY;
}


@property (weak, nonatomic) NSObject<NTKTimeTravelModuleViewTapClient> *tapDelegate; // ivar: _tapDelegate


+(CGFloat)_actualCornerRadiusForDevice:(id)arg0 ;
+(CGFloat)_defaultHeightForDevice:(id)arg0 ;
+(CGFloat)cornerRadius;
+(id)timeTravelColor;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg0 andOverrideDate:(id)arg1 ;
-(id)initWithMaximumWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutContentView;
-(void)_setupBorder;
-(void)layoutSubviews;
-(void)prepareToAppear;
-(void)scrubToDate:(id)arg0 ;


@end


#endif