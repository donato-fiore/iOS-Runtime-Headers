// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAUDIOANALYTICSHEADPHONESETTINGSDEVICERESULT_H
#define HDAUDIOANALYTICSHEADPHONESETTINGSDEVICERESULT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsHeadphoneSettingsDeviceResult : NSObject

@property (readonly, nonatomic) NSNumber *haeRetention; // ivar: _haeRetention
@property (readonly, nonatomic) NSNumber *hasHAENEnabled; // ivar: _hasHAENEnabled
@property (readonly, nonatomic) NSNumber *hasHAENRequired; // ivar: _hasHAENRequired
@property (readonly, nonatomic) NSNumber *hasIncludeOtherHeadphonesEnabled; // ivar: _hasIncludeOtherHeadphonesEnabled
@property (readonly, nonatomic) NSNumber *hasMeasureLevelsEnabled; // ivar: _hasMeasureLevelsEnabled


+(id)optInSettingsWithHasHAENEnabled:(BOOL)arg0 hasMeasureLevelsEnabled:(BOOL)arg1 hasIncludeOtherHeadphonesEnabled:(BOOL)arg2 ;
+(id)requiredSettingsWithSaveForEightDays:(BOOL)arg0 ;
-(id)initWithHAENRequired:(BOOL)arg0 hasHAENEnabled:(id)arg1 hasMeasureLevelsEnabled:(id)arg2 hasIncludeOtherHeadphonesEnabled:(id)arg3 haeRetention:(id)arg4 ;


@end


#endif