// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAPLAYBACKACTIONEVENT_H
#define HMDMEDIAPLAYBACKACTIONEVENT_H

@class HMMLogEvent, NSArray, NSString, NSNumber, NSDictionary;
@protocol HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging;



@interface HMDMediaPlaybackActionEvent : HMMLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging>



@property (readonly, copy) NSArray *accessories; // ivar: _accessories
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isPlaybackArchivePresent; // ivar: _isPlaybackArchivePresent
@property (readonly, nonatomic) NSUInteger numAccessoriesInHome; // ivar: _numAccessoriesInHome
@property (readonly, nonatomic) NSUInteger numNonEmptyScenesInHome; // ivar: _numNonEmptyScenesInHome
@property (readonly) NSUInteger numberOfMediaProfiles; // ivar: _numberOfMediaProfiles
@property (readonly, copy) NSNumber *playbackStateNumber; // ivar: _playbackStateNumber
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSString *sourceClientName; // ivar: _sourceClientName
@property (readonly, copy) NSNumber *sourceNumber; // ivar: _sourceNumber
@property (readonly, copy) NSString *sourceString;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *volumeNumber; // ivar: _volumeNumber


-(BOOL)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)arg0 ;
-(BOOL)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)arg0 ;
-(NSUInteger)microLocationScanTriggerTypeForLogEventObserver:(id)arg0 ;
-(id)biomeEventsRepresentationForLogObserver:(id)arg0 ;
-(id)initWithIsPlaybackArchivePresent:(BOOL)arg0 playbackStateNumber:(id)arg1 volumeNumber:(id)arg2 sourceNumber:(id)arg3 sourceClientName:(id)arg4 accessories:(id)arg5 ;
-(id)microLocationMetadataForLogEventObserver:(id)arg0 ;


@end


#endif