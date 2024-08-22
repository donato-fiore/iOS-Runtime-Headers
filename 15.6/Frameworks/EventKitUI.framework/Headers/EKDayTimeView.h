// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDAYTIMEVIEW_H
#define EKDAYTIMEVIEW_H

@class UIView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIVisualEffect;
@protocol EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate, EKDayTimeViewDelegate;


#import "EKCurrentTimeMarkerView.h"

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate>

 {
    NSMutableArray *_contentViews;
    NSMutableDictionary *_visualEffectViews;
    BOOL _leftBorder;
    BOOL _rightBorder;
    CGFloat _highlightedHour;
    NSInteger _orientation;
    NSInteger _targetSizeClass;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    CGFloat _timeWidth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultHeight;
@property (weak, nonatomic) NSObject<EKDayTimeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat highlightedHour;
@property (readonly, nonatomic) CGFloat hourHeight; // ivar: _hourHeight
@property (nonatomic) CGFloat hourHeightScale; // ivar: _hourHeightScale
@property (nonatomic) CGFloat hoursToPad; // ivar: _hoursToPad
@property (nonatomic) _NSRange hoursToRender; // ivar: _hoursToRender
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) BOOL showsTimeMarker; // ivar: _showsTimeMarker
@property (nonatomic) BOOL showsTimeMarkerExtension; // ivar: _showsTimeMarkerExtension
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *timeColor; // ivar: _timeColor
@property (readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property (nonatomic) BOOL usesLightText; // ivar: _usesLightText
@property (retain, nonatomic) UIVisualEffect *visualEffect; // ivar: _visualEffect


+(CGFloat)_dynamicFontSizeForOrientation:(NSInteger)arg0 ;
+(CGFloat)_hourFontSize;
+(CGFloat)_noonLocalizedWidthForOrientation:(NSInteger)arg0 ;
+(CGFloat)_timeTextWidthForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)_timeVerticalInsetForOrientation:(NSInteger)arg0 inViewHierarchy:(id)arg1 ;
+(CGFloat)_widthForOrientation:(NSInteger)arg0 sizeClass:(NSInteger)arg1 excludeCurrentTime:(BOOL)arg2 ;
+(CGFloat)defaultHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)defaultHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 withHourScale:(CGFloat)arg2 ;
+(CGFloat)defaultHourScale;
+(CGFloat)heightOfHourTextForHour:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)hourHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)hourWidthForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)timeInsetForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)timeWidthForOrientation:(NSInteger)arg0 inViewHierarchy:(id)arg1 ;
+(CGFloat)verticalPadding;
+(id)_boldFontForOrientation:(NSInteger)arg0 ;
+(id)_hourFontForOrientation:(NSInteger)arg0 ;
+(id)_noonLocalizedString;
+(id)_normalFontForOrientation:(NSInteger)arg0 ;
+(id)allDayLabelBoldFont;
+(id)allDayLabelFont;
+(id)unscaledAllDayLabelFont;
+(void)_calculateWidthForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 excludeCurrentTime:(BOOL)arg2 ;
+(void)_invalidateCachedValues;
+(void)_invalidateWidth;
+(void)_registerForInvalidation;
+(void)_setWidth:(CGFloat)arg0 forOrientation:(NSInteger)arg1 sizeClass:(NSInteger)arg2 excludeCurrentTime:(BOOL)arg3 ;
+(void)setVerticalPadding:(CGFloat)arg0 ;
-(CGFloat)_positionOfSecond:(int)arg0 ;
-(CGFloat)_timeWidth;
-(CGFloat)scaledHourHeight;
-(CGFloat)topPadding;
-(NSInteger)_sizeClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_fontSizeChanged;
-(void)_invalidateTimeWidth;
-(void)_localeChanged;
-(void)_sizeClassChanged;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 forContentView:(id)arg1 withHourRange:(struct _NSRange )arg2 ;
-(void)layoutFrames;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)tintColorDidChange;
-(void)updateHourHeight;
-(void)updateMarkerPosition;
-(void)viewTintColorDidChangeForView:(id)arg0 toColor:(id)arg1 ;


@end


#endif