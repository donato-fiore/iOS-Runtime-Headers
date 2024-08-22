// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAUDIOANALYTICSNOISESETTINGSRESULT_H
#define HDAUDIOANALYTICSNOISESETTINGSRESULT_H


#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsNoiseSettingsResult : NSObject

@property (nonatomic) BOOL hasNoiseEnabled; // ivar: _hasNoiseEnabled
@property (nonatomic) BOOL hasNoiseNotificationsEnabled; // ivar: _hasNoiseNotificationsEnabled
@property (nonatomic) BOOL hasWatchPairedWithNoiseApp; // ivar: _hasWatchPairedWithNoiseApp


-(id)initWithWatchPairedWithNoiseApp:(BOOL)arg0 hasNoiseEnabled:(BOOL)arg1 hasNoiseNotificationsEnabled:(BOOL)arg2 ;


@end


#endif