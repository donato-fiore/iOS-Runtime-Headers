// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADFCAPSETTINGS_H
#define ADFCAPSETTINGS_H


#import <Foundation/Foundation.h>


@interface ADFCapSettings : NSObject

@property (nonatomic) CGFloat clickExpirationThresholdInSeconds; // ivar: _clickExpirationThresholdInSeconds
@property (nonatomic) CGFloat frequencyCapExpirationInSeconds; // ivar: _frequencyCapExpirationInSeconds
@property (nonatomic) NSUInteger maxClickCapElements; // ivar: _maxClickCapElements
@property (nonatomic) NSUInteger maxFrequencyCapElements; // ivar: _maxFrequencyCapElements
@property (nonatomic) NSInteger pageType; // ivar: _pageType
@property (nonatomic) CGFloat reverseGeolocationRefreshThresholdInMeters; // ivar: _reverseGeolocationRefreshThresholdInMeters


-(id)_capTypeToString:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 location:(CGFloat)arg1 clickExpiration:(CGFloat)arg2 fCapExpiration:(CGFloat)arg3 maxFCapElements:(NSUInteger)arg4 maxClickCapElements:(NSUInteger)arg5 ;
-(void)overrideClickExpiration:(CGFloat)arg0 ;
-(void)overrideFrequencyCapExpiration:(CGFloat)arg0 ;
-(void)overrideMaxClickElements:(NSUInteger)arg0 ;
-(void)overrideMaxFrequencyCapElements:(NSUInteger)arg0 ;
-(void)overrideRevGeoThreshold:(CGFloat)arg0 ;


@end


#endif