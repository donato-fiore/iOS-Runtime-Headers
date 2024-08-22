// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAUDIOANALYTICSHEADPHONESETTINGSRESULT_H
#define HDAUDIOANALYTICSHEADPHONESETTINGSRESULT_H


#import <Foundation/Foundation.h>

#import "HDAudioAnalyticsHeadphoneSettingsDeviceResult.h"

@interface HDAudioAnalyticsHeadphoneSettingsResult : NSObject

@property (retain, nonatomic) HDAudioAnalyticsHeadphoneSettingsDeviceResult *activePairedWatch; // ivar: _activePairedWatch
@property (retain, nonatomic) HDAudioAnalyticsHeadphoneSettingsDeviceResult *localDevice; // ivar: _localDevice


-(id)initWithLocalDevice:(id)arg0 activePairedWatch:(id)arg1 ;


@end


#endif