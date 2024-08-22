// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRTCREPORTINGSESSIONSUMMARYEVENT_H
#define MPRTCREPORTINGSESSIONSUMMARYEVENT_H

@class NSError, NSNumber, NSString;


#import "MPRTCReportingEvent.h"

@interface MPRTCReportingSessionSummaryEvent : MPRTCReportingEvent

@property (nonatomic) CGFloat assetLoadDuration; // ivar: _assetLoadDuration
@property (copy, nonatomic) NSError *assetLoadError; // ivar: _assetLoadError
@property (nonatomic) NSInteger blockingSecureKeyLoadCount; // ivar: _blockingSecureKeyLoadCount
@property (nonatomic) CGFloat blockingSecureKeyLoadDuration; // ivar: _blockingSecureKeyLoadDuration
@property (nonatomic) NSInteger endReasonType; // ivar: _endReasonType
@property (nonatomic) BOOL hadBlockingTracklistLoad; // ivar: _hadBlockingTracklistLoad
@property (nonatomic) NSInteger interfaceTypeChangeCount; // ivar: _interfaceTypeChangeCount
@property (nonatomic) CGFloat maximumSecureKeyLoadDuration; // ivar: _maximumSecureKeyLoadDuration
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime; // ivar: _perceivedTotalStartupTime
@property (copy, nonatomic) NSError *playbackEndError; // ivar: _playbackEndError
@property (copy, nonatomic) NSError *secureKeyError; // ivar: _secureKeyError
@property (nonatomic) NSInteger secureKeyLoadCount; // ivar: _secureKeyLoadCount
@property (copy, nonatomic) NSString *siriSessionIdentifier; // ivar: _siriSessionIdentifier
@property (nonatomic) NSInteger startInterfaceType; // ivar: _startInterfaceType
@property (nonatomic) NSInteger startupState; // ivar: _startupState
@property (nonatomic) CGFloat tracklistLoadDuration; // ivar: _tracklistLoadDuration
@property (copy, nonatomic) NSError *tracklistLoadError; // ivar: _tracklistLoadError


-(id)newRTCReportingPayloadDictionary;
-(unsigned short)rtcReportingCategory;


@end


#endif