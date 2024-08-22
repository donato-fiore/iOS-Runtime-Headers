// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSWISSWORLDCLOCKCOMPLICATIONGRAPHICRECTANGULARVIEW_H
#define NTKSWISSWORLDCLOCKCOMPLICATIONGRAPHICRECTANGULARVIEW_H

@class UIView, NSArray, NSNumber, NSString, CLKDevice, UIImageView, NSDate, CLKClockTimerToken, UIColor;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;

#import <Foundation/Foundation.h>

#import "NTKWorldClockHighlightedMapLocationView.h"

@interface NTKSwissWorldClockComplicationGraphicRectangularView : UIView <CLKFullColorImageView>



@property (retain, nonatomic) NSArray *cities; // ivar: _cities
@property (retain, nonatomic) NSNumber *cityLatitude; // ivar: _cityLatitude
@property (retain, nonatomic) NSNumber *cityLongitude; // ivar: _cityLongitude
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKWorldClockHighlightedMapLocationView *highlightedLocationView; // ivar: _highlightedLocationView
@property (retain, nonatomic) NSArray *locationViews; // ivar: _locationViews
@property (retain, nonatomic) UIImageView *mapView; // ivar: _mapView
@property (retain, nonatomic) UIImageView *nightMaskView; // ivar: _nightMaskView
@property (retain, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (nonatomic, getter=shouldShowIdealizedTime) BOOL showIdealizedTime; // ivar: _showIdealizedTime
@property (retain, nonatomic) NSObject *significantTimeChangeObserver; // ivar: _significantTimeChangeObserver
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKClockTimerToken *timeUpdateToken; // ivar: _timeUpdateToken
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(struct CGPoint )_locationMarkerOffsetForLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
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