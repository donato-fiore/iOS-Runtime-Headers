// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTUIWORLDCLOCKCELLVIEW_H
#define MTUIWORLDCLOCKCELLVIEW_H

@class UIView, NSTimeZone, UILabel;
@protocol MTClock, MTUIWorldClockCellViewDelegate;


#import "MTUIDigitalClockLabel.h"

@interface MTUIWorldClockCellView : UIView <MTClock>

 {
    NSTimeZone *_timeZone;
    NSInteger _nowInMinutes;
    BOOL _editing;
}


@property (readonly, nonatomic) UILabel *combinedLabel; // ivar: _combinedLabel
@property (weak, nonatomic) NSObject<MTUIWorldClockCellViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MTUIDigitalClockLabel *digitalClock; // ivar: _digitalClock
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (readonly, nonatomic) NSInteger runMode;
@property (nonatomic) BOOL shouldStackViews; // ivar: _shouldStackViews
@property (readonly, nonatomic) BOOL started; // ivar: _started


+(CGFloat)defaultHeight;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg0 withTimeZoneOffset:(NSInteger)arg1 timeZoneAbbreviation:(id)arg2 spaceBeforeTimeDesignator:(BOOL)arg3 ;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg0 withTimeZoneOffset:(NSInteger)arg1 timeZoneAbbreviation:(id)arg2 spaceBeforeTimeDesignator:(BOOL)arg3 hoursOnly:(BOOL)arg4 ;
-(CGFloat)coarseUpdateInterval;
-(CGFloat)updateInterval;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureFonts;
-(void)handleTextSizeChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)localeChange:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTimeZone:(id)arg0 ;
-(void)significantTimeChange:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateLabelAdjustFontSize;
-(void)updateTime;
-(void)updateTimeContinuously:(NSInteger)arg0 ;


@end


#endif