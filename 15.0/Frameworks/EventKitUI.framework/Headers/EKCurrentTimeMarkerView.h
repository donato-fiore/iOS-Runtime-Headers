// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCURRENTTIMEMARKERVIEW_H
#define EKCURRENTTIMEMARKERVIEW_H

@class UIView, UILabel;



@interface EKCurrentTimeMarkerView : UIView

@property (readonly, nonatomic) CGRect currentTimeFrame;
@property (retain, nonatomic) UILabel *currentTimeLabel; // ivar: _currentTimeLabel
@property (readonly, nonatomic) CGFloat markerMidHeight;
@property (readonly, nonatomic) CGFloat markerWidth;
@property (nonatomic) BOOL showsLine; // ivar: _showsLine
@property (nonatomic) BOOL showsThumb; // ivar: _showsThumb


+(CGFloat)_spacingAdjustmentFontSize;
+(id)timeMarkerFontForSizeClass:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 ;
-(struct CGRect )_lineFrame;
-(void)_updateTimeLabelColor;
-(void)_updateTimeWithForce:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)invalidateFonts;
-(void)updateTime;


@end


#endif