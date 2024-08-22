// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMELAPSEDTIMEVIEW_H
#define CAMELAPSEDTIMEVIEW_H

@class UIView, UIImageView, NSDate, UILabel, NSTimer, NSString;



@interface CAMElapsedTimeView : UIView

@property (readonly, nonatomic) UIImageView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) NSDate *_startTime; // ivar: __startTime
@property (readonly, nonatomic) UILabel *_timeLabel; // ivar: __timeLabel
@property (readonly, nonatomic) NSTimer *_updateTimer; // ivar: __updateTimer
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isShowingBackground) BOOL showingBackground;


-(id)initWithBadgeAppearance;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_setStartTime:(id)arg0 ;
-(void)_updateBackgroundViewAnimated:(BOOL)arg0 ;
-(void)_updateFont;
-(void)_updateForTimer:(id)arg0 ;
-(void)_updateText;
-(void)dealloc;
-(void)endTimer;
-(void)layoutSubviews;
-(void)resetTimer;
-(void)startTimer;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif