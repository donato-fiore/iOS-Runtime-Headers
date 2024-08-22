// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSEARCHADSSETTINGS_H
#define ADSEARCHADSSETTINGS_H

@class ADSingleton, NSString, ADClientSettingsResponse, NSURL, NSArray;


#import "ADFCapSettings.h"

@interface ADSearchAdsSettings : ADSingleton

@property (retain, nonatomic) NSString *algoID; // ivar: _algoID
@property (retain, nonatomic) ADClientSettingsResponse *clientSettings; // ivar: _clientSettings
@property (retain, nonatomic) NSURL *defaultAdTargetingServerURL; // ivar: _defaultAdTargetingServerURL
@property (retain, nonatomic) NSURL *defaultToroServerURL; // ivar: _defaultToroServerURL
@property (retain, nonatomic) ADFCapSettings *floraSettings; // ivar: _floraSettings
@property (retain, nonatomic) ADFCapSettings *iris1Settings; // ivar: _iris1Settings
@property (retain, nonatomic) ADFCapSettings *iris2Settings; // ivar: _iris2Settings
@property (nonatomic) BOOL isBaseline; // ivar: _isBaseline
@property (nonatomic) BOOL isCustomTemplate; // ivar: _isCustomTemplate
@property (nonatomic) BOOL isRequestedImage; // ivar: _isRequestedImage
@property (nonatomic) BOOL isRequestedRating; // ivar: _isRequestedRating
@property (nonatomic) BOOL isTest; // ivar: _isTest
@property (retain, nonatomic) ADFCapSettings *landingPageSettings; // ivar: _landingPageSettings
@property (nonatomic) CGFloat locationGridSpacing; // ivar: _locationGridSpacing
@property (retain, nonatomic) ADFCapSettings *metisSettings; // ivar: _metisSettings
@property (retain, nonatomic) NSString *requestedIcon; // ivar: _requestedIcon
@property (nonatomic) CGFloat requestedLocationAccuracy; // ivar: _requestedLocationAccuracy
@property (retain, nonatomic) NSString *requestedText; // ivar: _requestedText
@property (retain, nonatomic) ADFCapSettings *searchSettings; // ivar: _searchSettings
@property (retain, nonatomic) NSString *templateType; // ivar: _templateType
@property (retain, nonatomic) NSArray *userKeyboards; // ivar: _userKeyboards


+(id)sharedInstance;
-(id)_fCapParametersFromType:(NSInteger)arg0 ;
-(id)_fCapSettingsFromType:(NSInteger)arg0 ;
-(id)_getParametersForName:(id)arg0 ;
-(id)init;
-(void)applyClientSettings;
-(void)checkDefaultsAndSetInternalSettingsOverrides;
-(void)expireClientSettings;
-(void)refresh;
-(void)refreshClientSettings:(id)arg0 ;
-(void)restoreClientSettings;


@end


#endif