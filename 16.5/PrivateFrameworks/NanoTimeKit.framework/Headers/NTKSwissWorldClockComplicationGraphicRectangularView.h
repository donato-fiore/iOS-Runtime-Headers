// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSWISSWORLDCLOCKCOMPLICATIONGRAPHICRECTANGULARVIEW_H
#define NTKSWISSWORLDCLOCKCOMPLICATIONGRAPHICRECTANGULARVIEW_H

@class UIView, NSCalendar, NSArray, NSNumber, NSString, CLKDevice, UIFontDescriptor, NSDate, UIImageView, UIImage, UIColor, CLKClockTimerToken;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;

#import <Foundation/Foundation.h>

#import "NTKWorldClockHighlightedMapLocationView.h"

@interface NTKSwissWorldClockComplicationGraphicRectangularView : UIView <CLKFullColorImageView>

 {
    BOOL _showGossamerUI;
}


@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSArray *cities; // ivar: _cities
@property (retain, nonatomic) NSNumber *cityLatitude; // ivar: _cityLatitude
@property (retain, nonatomic) NSNumber *cityLongitude; // ivar: _cityLongitude
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (retain, nonatomic) NSDate *generatedDate; // ivar: _generatedDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKWorldClockHighlightedMapLocationView *highlightedLocationView; // ivar: _highlightedLocationView
@property (retain, nonatomic) NSArray *locationViews; // ivar: _locationViews
@property (retain, nonatomic) UIImageView *mapView; // ivar: _mapView
@property (retain, nonatomic) UIImage *nightMask; // ivar: _nightMask
@property (retain, nonatomic) UIImageView *nightMaskView; // ivar: _nightMaskView
@property (retain, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (nonatomic, getter=shouldShowIdealizedTime) BOOL showIdealizedTime; // ivar: _showIdealizedTime
@property (retain, nonatomic) NSObject *significantTimeChangeObserver; // ivar: _significantTimeChangeObserver
@property (readonly, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *terminator; // ivar: _terminator
@property (retain, nonatomic) UIImageView *terminatorView; // ivar: _terminatorView
@property (retain, nonatomic) CLKClockTimerToken *timeUpdateToken; // ivar: _timeUpdateToken
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)_shouldGenerate:(id)arg0 date:(id)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(struct CGPoint )_locationMarkerOffsetForCoordinate:(struct ? )arg0 ;
-(void)_reloadCities;
-(void)_updateNightMaskImage;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif