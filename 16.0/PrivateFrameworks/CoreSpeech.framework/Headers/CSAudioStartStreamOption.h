// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOSTARTSTREAMOPTION_H
#define CSAUDIOSTARTSTREAMOPTION_H

@class NSString;
@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSAudioStartStreamOption : NSObject <NSCopying>



@property (nonatomic) BOOL disableBoostForDoAP; // ivar: _disableBoostForDoAP
@property (nonatomic) BOOL disableEndpointer; // ivar: _disableEndpointer
@property (nonatomic) BOOL disableLocalSpeechRecognizer; // ivar: _disableLocalSpeechRecognizer
@property (nonatomic) BOOL disablePrewarmLocalAsrAtStartRecording; // ivar: _disablePrewarmLocalAsrAtStartRecording
@property (nonatomic) NSInteger errorAlertBehavior; // ivar: _errorAlertBehavior
@property (nonatomic) NSUInteger estimatedStartHostTime; // ivar: _estimatedStartHostTime
@property (readonly, nonatomic) NSString *localizedDescription;
@property (nonatomic) BOOL requestHistoricalAudioDataSampleCount; // ivar: _requestHistoricalAudioDataSampleCount
@property (nonatomic) BOOL requestHistoricalAudioDataWithHostTime; // ivar: _requestHistoricalAudioDataWithHostTime
@property (retain, nonatomic) NSString *requestMHUUID; // ivar: _requestMHUUID
@property (nonatomic) BOOL requireSingleChannelLookup; // ivar: _requireSingleChannelLookup
@property (nonatomic) unsigned int selectedChannel; // ivar: _selectedChannel
@property (retain, nonatomic) NSString *siriSessionUUID; // ivar: _siriSessionUUID
@property (nonatomic) BOOL skipAlertBehavior; // ivar: _skipAlertBehavior
@property (nonatomic) NSInteger startAlertBehavior; // ivar: _startAlertBehavior
@property (nonatomic) NSUInteger startRecordingHostTime; // ivar: _startRecordingHostTime
@property (nonatomic) NSUInteger startRecordingSampleCount; // ivar: _startRecordingSampleCount
@property (nonatomic) NSInteger stopAlertBehavior; // ivar: _stopAlertBehavior
@property (nonatomic) BOOL useOpportunisticZLL; // ivar: _useOpportunisticZLL
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


+(id)noAlertOption;
-(BOOL)isAlertBehaviorOverridedBeep;
-(NSInteger)_alertBehaviorTypeFromAVVCOberrideType:(NSInteger)arg0 ;
-(NSInteger)_avvcAlertOverrideType:(NSInteger)arg0 ;
-(id)avvcAlertBehavior;
-(id)avvcStartRecordSettingsWithAudioStreamHandleId:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initTandemWithOption:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 ;
-(void)setAVVCAlertBehavior:(id)arg0 ;


@end


#endif