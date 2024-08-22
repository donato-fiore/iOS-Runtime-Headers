// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKSCALEVIEW_H
#define MKSCALEVIEW_H

@class UIView, NSNumberFormatter, UIColor, NSMutableArray, UIVisualEffectView, NSMutableDictionary, NSString, NSNumber;


#import "_MKScaleUnitsView.h"
#import "MKMapView.h"

@interface MKScaleView : UIView {
    CGFloat _distanceInMeters;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    CGFloat _magicNumbers;
    UIColor *_borderColorRegular;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    UIVisualEffectView *_blurredSegment;
    _MKScaleUnitsView *_unitsView;
    NSInteger _oldNumberOfSegments;
    UIView *_displayedOutline;
    UIView *_displayedWhiteOutline;
    CGFloat _segmentLengthInPixels;
    CGFloat _resultSegmentLength;
    CGFloat _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    NSInteger _grQuality;
    int _layoutCounter;
    NSNumber *_useLightText;
    BOOL _isVisible;
}


@property (nonatomic) CGFloat distanceInMeters;
@property (nonatomic) NSInteger legendAlignment; // ivar: _legendAlignment
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (nonatomic) NSInteger scaleVisibility; // ivar: _scaleVisibility
@property (nonatomic) BOOL useLightText;
@property (nonatomic) BOOL usedInternallyByMapView; // ivar: _usedInternallyByMapView


+(id)scaleViewWithMapView:(id)arg0 ;
-(id)_formattedStringForFloat:(CGFloat)arg0 ;
-(id)_scaleViewFormattedStringForFloat:(CGFloat)arg0 ;
-(id)_scaleViewFormattedStringForInteger:(NSInteger)arg0 ;
-(id)_setupOutlineView;
-(id)_setupSegmentView:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMapView:(id)arg0 ;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_calculateSegments;
-(void)_localizedDistanceStringsWithMeters:(unsigned int)arg0 imperial:(CGFloat)arg1 useFeet:(BOOL)arg2 inMetric:(BOOL)arg3 displaysYardsForShortDistances:(BOOL)arg4 strings:(id)arg5 ;
-(void)_updateStrings;
-(void)_updateVisibility;
-(void)dealloc;
-(void)layoutSubviews;
-(void)memoryWarning:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)shouldUpdateScaleNotification:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLocale:(id)arg0 ;


@end


#endif