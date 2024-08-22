// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUINOWPLAYINGCONFIG_H
#define VUINOWPLAYINGCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VUINowPlayingConfig : NSObject

@property (nonatomic) CGFloat alertIdleTimeout; // ivar: _alertIdleTimeout
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback; // ivar: _allowQOSReportingForiTunesLibraryPlayback
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero; // ivar: _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting; // ivar: _mediaTypesExcludedFromReporting
@property (nonatomic) BOOL showsLozengeForLivePlayback; // ivar: _showsLozengeForLivePlayback
@property (nonatomic) BOOL showsStillWatchingAlert; // ivar: _showsStillWatchingAlert
@property (nonatomic) CGFloat stillWatchingAlertDuration; // ivar: _stillWatchingAlertDuration


-(id)init;


@end


#endif