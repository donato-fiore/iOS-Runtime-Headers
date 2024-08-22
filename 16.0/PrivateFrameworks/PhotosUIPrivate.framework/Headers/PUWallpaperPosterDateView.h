// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERPOSTERDATEVIEW_H
#define PUWALLPAPERPOSTERDATEVIEW_H

@class UIView, UIFont, UIColor, UILabel, UIVisualEffectView;



@interface PUWallpaperPosterDateView : UIView

@property (retain, nonatomic) UIFont *effectiveTimeFont; // ivar: _effectiveTimeFont
@property (retain, nonatomic) UIColor *timeColor; // ivar: _timeColor
@property (retain, nonatomic) UIFont *timeFont; // ivar: _timeFont
@property (readonly, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (nonatomic) BOOL useThinnerFontWeightForTime; // ivar: _useThinnerFontWeightForTime
@property (nonatomic) BOOL useVibrantAppearance; // ivar: _useVibrantAppearance
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_initViews;
-(void)_updateTimeLabel;
-(void)layoutWithLayout:(id)arg0 inContainerFrame:(struct CGRect )arg1 ;


@end


#endif