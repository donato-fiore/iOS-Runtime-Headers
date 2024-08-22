// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEATHERVIEW_H
#define WEATHERVIEW_H

@class UIView, NSLocale, NSString;
@protocol CityUpdateObserver;


#import "City.h"

@interface WeatherView : UIView <CityUpdateObserver>

 {
    BOOL _showingDay;
    BOOL _showWind;
    UIView *_windView;
    NSLocale *_lastLocale;
}


@property (retain, nonatomic, setter=showCity:) City *city; // ivar: _city
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_setCity:(id)arg0 associateAsDelegate:(BOOL)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg0 ;
-(id)bundle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cityDidFinishWeatherUpdate:(id)arg0 ;
-(void)cityDidStartWeatherUpdate:(id)arg0 ;
-(void)cleanupWindView;
-(void)dealloc;
-(void)refreshLocalization;
-(void)resetLocale:(id)arg0 ;
-(void)showCity:(id)arg0 ;


@end


#endif