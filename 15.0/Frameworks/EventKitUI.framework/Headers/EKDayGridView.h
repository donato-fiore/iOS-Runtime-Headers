// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDAYGRIDVIEW_H
#define EKDAYGRIDVIEW_H

@class UIView, UIColor, NSMutableArray, UIImageView, NSMutableDictionary, NSString, UIVisualEffect;
@protocol EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating;


#import "EKCurrentTimeMarkerView.h"

@interface EKDayGridView : UIView <EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating>

 {
    CGFloat _timeInset;
    CGFloat _hourHeight;
    CGFloat _timeWidth;
    BOOL _leftBorder;
    BOOL _rightBorder;
    int _selected;
    CGFloat _fixedDayWidth;
    NSInteger _orientation;
    CGRect _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    NSUInteger _daysToDisplay;
    UIImageView *_timeDot;
    UIView *_highlightedDayBackground;
    UIView *_fadingHighlightedDayBackground;
    UIView *_gridContainerView;
    NSMutableDictionary *_gridParentViews;
    CGFloat _cachedWidthForOffMainThreadWork;
    NSInteger _sizeClass;
    BOOL _needsLayoutInWindow;
}


@property (nonatomic) BOOL animatesTimeMarker; // ivar: _animatesTimeMarker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat eventHorizontalInset; // ivar: _eventHorizontalInset
@property (nonatomic) CGFloat fixedDayWidth;
@property (nonatomic) CGFloat gridHeightScale; // ivar: _gridHeightScale
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect; // ivar: _gridVisualEffect
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger highlightedDayIndex; // ivar: _highlightedDayIndex
@property (readonly, nonatomic) CGFloat hourHeight;
@property (nonatomic) CGFloat hoursToPadBottom; // ivar: _hoursToPadBottom
@property (nonatomic) CGFloat hoursToPadTop; // ivar: _hoursToPadTop
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (retain, nonatomic) UIView *occurrenceContainerView; // ivar: _occurrenceContainerView
@property (nonatomic) BOOL rightBorderInsetsOccurrences; // ivar: _rightBorderInsetsOccurrences
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) BOOL showsTimeLine; // ivar: _showsTimeLine
@property (nonatomic) BOOL showsTimeMarker; // ivar: _showsTimeMarker
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeInset;
@property (readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker; // ivar: _timeMarker
@property (nonatomic) NSInteger timeMarkerDotDay; // ivar: _timeMarkerDotDay
@property (readonly, nonatomic) CGFloat timeWidth;
@property (readonly, nonatomic) CGFloat topPadding;
@property (nonatomic) BOOL usesVibrantGridDrawing; // ivar: _usesVibrantGridDrawing
@property (readonly, nonatomic) CGFloat widthForOccurrences;


+(id)cachedBackgroundImageForKey:(id)arg0 ;
+(void)cacheBackgroundImage:(id)arg0 forKey:(id)arg1 ;
-(CGFloat)_dayWidth;
-(CGFloat)bottomPadding;
-(CGFloat)positionOfSecond:(NSInteger)arg0 ;
-(NSInteger)_sizeClass;
-(id)_generateGridImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 numberOfDaysToDisplay:(NSUInteger)arg4 ;
-(id)timeDotImage;
-(int)secondAtPosition:(CGFloat)arg0 ;
-(struct CGRect )rectForStartSeconds:(NSInteger)arg0 endSeconds:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutHighlight;
-(void)_updateTimeMarker;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)tintColorDidChange;
-(void)updateHourHeight;
-(void)updateMarkerPosition;
-(void)viewTintColorDidChangeForView:(id)arg0 toColor:(id)arg1 ;


@end


#endif