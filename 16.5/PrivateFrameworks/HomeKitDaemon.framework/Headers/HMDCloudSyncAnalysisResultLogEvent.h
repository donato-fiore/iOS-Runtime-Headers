// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDSYNCANALYSISRESULTLOGEVENT_H
#define HMDCLOUDSYNCANALYSISRESULTLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSDate;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCloudSyncAnalysisResultLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property NSUInteger bytesFetched; // ivar: _bytesFetched
@property NSUInteger bytesPushed; // ivar: _bytesPushed
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property NSUInteger dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property NSUInteger decryptionFailedCount; // ivar: _decryptionFailedCount
@property (readonly, copy) NSString *description;
@property NSUInteger fetchCount; // ivar: _fetchCount
@property NSUInteger fetchErrorCount; // ivar: _fetchErrorCount
@property (readonly) NSUInteger hash;
@property NSUInteger incomingPushCount; // ivar: _incomingPushCount
@property BOOL lastDecryptionFailed; // ivar: _lastDecryptionFailed
@property NSUInteger legacyBytesFetched; // ivar: _legacyBytesFetched
@property NSUInteger legacyBytesPushed; // ivar: _legacyBytesPushed
@property NSUInteger legacyFetchCount; // ivar: _legacyFetchCount
@property NSUInteger legacyFetchErrorCount; // ivar: _legacyFetchErrorCount
@property NSUInteger legacyUploadCount; // ivar: _legacyUploadCount
@property NSUInteger legacyUploadErrorCount; // ivar: _legacyUploadErrorCount
@property (retain, nonatomic) NSDictionary *legacyUploadErrorCountMap; // ivar: _legacyUploadErrorCountMap
@property (retain, nonatomic) NSDictionary *legacyUploadReasonCountMap; // ivar: _legacyUploadReasonCountMap
@property (readonly) Class superclass;
@property NSUInteger uploadCount; // ivar: _uploadCount
@property NSUInteger uploadErrorCount; // ivar: _uploadErrorCount
@property (retain, nonatomic) NSDictionary *uploadErrorCountMap; // ivar: _uploadErrorCountMap
@property BOOL uploadMaximumDelayReached; // ivar: _uploadMaximumDelayReached


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;


@end


#endif