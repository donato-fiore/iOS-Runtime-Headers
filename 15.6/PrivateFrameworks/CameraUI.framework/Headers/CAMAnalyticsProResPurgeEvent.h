// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMANALYTICSPRORESPURGEEVENT_H
#define CAMANALYTICSPRORESPURGEEVENT_H



#import "CAMAnalyticsEvent.h"
#import "CAMCaptureGraphConfiguration.h"

@interface CAMAnalyticsProResPurgeEvent : CAMAnalyticsEvent

@property (nonatomic, setter=_setDidUpdateForFirstPurgeOperation:) BOOL _didUpdateForFirstPurgeOperation; // ivar: __didUpdateForFirstPurgeOperation
@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_graphConfiguration; // ivar: __graphConfiguration
@property (nonatomic, setter=_setPurgeOperationCount:) NSInteger _purgeOperationCount; // ivar: __purgeOperationCount
@property (readonly, nonatomic) CGFloat _startTime; // ivar: __startTime
@property (nonatomic, setter=_setTotalBytesPurged:) NSInteger _totalBytesPurged; // ivar: __totalBytesPurged


-(NSInteger)_bucketedCount:(NSInteger)arg0 ;
-(id)eventName;
-(id)initWithRequestType:(NSInteger)arg0 graphConfiguration:(id)arg1 totalBytesInSystem:(NSInteger)arg2 ;
-(void)_updateForIsBeforePurge:(BOOL)arg0 withFreeBytes:(NSInteger)arg1 fastPurgeableBytes:(NSInteger)arg2 slowPurgeableBytes:(NSInteger)arg3 maxRecordingTimeSeconds:(CGFloat)arg4 ;
-(void)publish;
-(void)updateAfterPurgeOperationWithFreeBytes:(NSInteger)arg0 fastPurgeableBytes:(NSInteger)arg1 slowPurgeableBytes:(NSInteger)arg2 maxRecordingTimeSeconds:(CGFloat)arg3 bytesPurged:(NSInteger)arg4 ;
-(void)updateBeforePurgeOperationWithFreeBytes:(NSInteger)arg0 fastPurgeableBytes:(NSInteger)arg1 slowPurgeableBytes:(NSInteger)arg2 maxRecordingTimeSeconds:(CGFloat)arg3 ;
-(void)updateForCancelRequest;
-(void)updateForSkippedPurgeOperationWithFreeBytes:(NSInteger)arg0 fastPurgeableBytes:(NSInteger)arg1 slowPurgeableBytes:(NSInteger)arg2 maxRecordingTimeSeconds:(CGFloat)arg3 ;


@end


#endif