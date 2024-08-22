// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSEARCHADSSETTINGS_H
#define ADSEARCHADSSETTINGS_H

@class ADSingleton, NSString, ADClientSettingsResponse, NSURL, NSArray;



@interface ADSearchAdsSettings : ADSingleton

@property (retain, nonatomic) NSString *algoID; // ivar: _algoID
@property (nonatomic) CGFloat clickExpirationThresholdInSeconds; // ivar: _clickExpirationThresholdInSeconds
@property (retain, nonatomic) ADClientSettingsResponse *clientSettings; // ivar: _clientSettings
@property (retain, nonatomic) NSURL *defaultAdTargetingServerURL; // ivar: _defaultAdTargetingServerURL
@property (retain, nonatomic) NSURL *defaultToroServerURL; // ivar: _defaultToroServerURL
@property (nonatomic) CGFloat frequencyCapExpirationInSeconds; // ivar: _frequencyCapExpirationInSeconds
@property (nonatomic) BOOL isBaseline; // ivar: _isBaseline
@property (nonatomic) BOOL isCustomTemplate; // ivar: _isCustomTemplate
@property (nonatomic) BOOL isRequestedImage; // ivar: _isRequestedImage
@property (nonatomic) BOOL isRequestedRating; // ivar: _isRequestedRating
@property (nonatomic) BOOL isTest; // ivar: _isTest
@property (nonatomic) CGFloat landingClickExpirationThresholdInSeconds; // ivar: _landingClickExpirationThresholdInSeconds
@property (nonatomic) CGFloat landingFrequencyCapExpirationInSeconds; // ivar: _landingFrequencyCapExpirationInSeconds
@property (nonatomic) CGFloat landingReverseGeolocationRefreshThresholdInMeters; // ivar: _landingReverseGeolocationRefreshThresholdInMeters
@property (nonatomic) CGFloat locationGridSpacing; // ivar: _locationGridSpacing
@property (nonatomic) NSUInteger maxClickCapElements; // ivar: _maxClickCapElements
@property (nonatomic) NSUInteger maxFrequencyCapElements; // ivar: _maxFrequencyCapElements
@property (nonatomic) NSUInteger maxLandingClickCapElements; // ivar: _maxLandingClickCapElements
@property (nonatomic) NSUInteger maxLandingFrequencyCapElements; // ivar: _maxLandingFrequencyCapElements
@property (retain, nonatomic) NSString *requestedIcon; // ivar: _requestedIcon
@property (nonatomic) CGFloat requestedLocationAccuracy; // ivar: _requestedLocationAccuracy
@property (retain, nonatomic) NSString *requestedText; // ivar: _requestedText
@property (nonatomic) CGFloat reverseGeolocationRefreshThresholdInMeters; // ivar: _reverseGeolocationRefreshThresholdInMeters
@property (retain, nonatomic) NSString *templateType; // ivar: _templateType
@property (retain, nonatomic) NSArray *userKeyboards; // ivar: _userKeyboards


+(id)sharedInstance;
-(id)init;
-(void)applyClientSettings;
-(void)checkDefaultsAndSetInternalSettingsOverrides;
-(void)expireClientSettings;
-(void)overrideFrequencyCapExpiration:(CGFloat)arg0 ;
-(void)overrideLandingClickExpiration:(CGFloat)arg0 ;
-(void)overrideLandingFrequencyCapExpiration:(CGFloat)arg0 ;
-(void)overrideLandingRevGeoThreshold:(CGFloat)arg0 ;
-(void)overrideMaxFrequencyCapElements:(NSUInteger)arg0 ;
-(void)overrideMaxLandingClickElements:(NSUInteger)arg0 ;
-(void)overrideMaxLandingFrequencyCapElements:(NSUInteger)arg0 ;
-(void)overrideMaxToroClickElements:(NSUInteger)arg0 ;
-(void)overrideRevGeoThreshold:(CGFloat)arg0 ;
-(void)overrideToroClickExpiration:(CGFloat)arg0 ;
-(void)refresh;
-(void)refreshClientSettings:(id)arg0 ;
-(void)restoreClientSettings;


@end


#endif