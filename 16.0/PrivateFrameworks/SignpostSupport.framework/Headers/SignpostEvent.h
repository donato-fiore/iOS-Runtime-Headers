// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTEVENT_H
#define SIGNPOSTEVENT_H

@class NSString, NSArray, NSUUID;
@protocol SignpostSupportLoggingSupportArchiveEvent;


#import "SignpostObject.h"
#import "SignpostMetrics.h"

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent>



@property (nonatomic) BOOL _hasTotalFrames; // ivar: __hasTotalFrames
@property (readonly, nonatomic) NSString *_key;
@property (nonatomic) NSUInteger _machContinuousTimestamp; // ivar: __machContinuousTimestamp
@property (readonly, nonatomic) BOOL _overridesOwnTime;
@property (readonly, nonatomic) NSUInteger _resolvedEventType;
@property (nonatomic) NSUInteger _totalFrameCount; // ivar: __totalFrameCount
@property (nonatomic) NSUInteger animationType; // ivar: _animationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimationStart; // ivar: _isAnimationStart
@property (readonly, nonatomic) BOOL isSyntheticIntervalEvent;
@property (retain, nonatomic) NSString *metadata; // ivar: _metadata
@property (retain, nonatomic) NSArray *metadataSegments; // ivar: _metadataSegments
@property (readonly, nonatomic) SignpostMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) BOOL overridesBeginTime;
@property (readonly, nonatomic) BOOL overridesEmitTime;
@property (readonly, nonatomic) BOOL overridesEndTime;
@property (readonly, nonatomic) BOOL overridesTime;
@property (nonatomic) NSUInteger overridingBeginMachContinuousTime; // ivar: _overridingBeginMachContinuousTime
@property (readonly, nonatomic) NSUInteger overridingBeginNanoseconds;
@property (nonatomic) NSUInteger overridingEmitMachContinuousTime; // ivar: _overridingEmitMachContinuousTime
@property (readonly, nonatomic) NSUInteger overridingEmitNanoseconds;
@property (nonatomic) NSUInteger overridingEndMachContinuousTime; // ivar: _overridingEndMachContinuousTime
@property (readonly, nonatomic) NSUInteger overridingEndNanoseconds;
@property (nonatomic) int processID; // ivar: _processID
@property (retain, nonatomic) NSString *processImagePath; // ivar: _processImagePath
@property (retain, nonatomic) NSUUID *processImageUUID; // ivar: _processImageUUID
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) NSUInteger processUniqueID; // ivar: _processUniqueID
@property (retain, nonatomic) NSString *senderImagePath; // ivar: _senderImagePath
@property (retain, nonatomic) NSUUID *senderImageUUID; // ivar: _senderImageUUID
@property (retain, nonatomic) NSArray *stackFrames; // ivar: _stackFrames
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger threadID; // ivar: _threadID
@property (readonly, nonatomic) NSUInteger timeRecordedMachContinuousTime;
@property (readonly, nonatomic) NSUInteger timeRecordedNanoseconds;
@property (nonatomic) NSInteger tv_sec; // ivar: _tv_sec
@property (nonatomic) int tv_usec; // ivar: _tv_usec
@property (nonatomic) int tz_dsttime; // ivar: _tz_dsttime
@property (nonatomic) int tz_minuteswest; // ivar: _tz_minuteswest


+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_resolvedBeginTime;
-(NSUInteger)_resolvedEndTime;
-(NSUInteger)durationMachContinuousTime;
-(NSUInteger)endMachContinuousTime;
-(NSUInteger)startMachContinuousTime;
-(float)durationSeconds;
-(id)_argumentObjectWithName:(id)arg0 ;
-(id)_argumentObjectWithName:(id)arg0 expectedClass:(Class)arg1 ;
-(id)_dataArgumentWithName:(id)arg0 ;
-(id)_debugDescription:(BOOL)arg0 ;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_numberArgumentWithName:(id)arg0 ;
-(id)_stringArgumentWithName:(id)arg0 ;
-(id)humanReadableType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 timebaseRatio:(CGFloat)arg2 unixDate:(struct timeval *)arg3 unixTimeZone:(struct timezone *)arg4 stackFrames:(id)arg5 ;
-(void)_adjustBeginTimeVal:(struct timeval *)arg0 ;
-(void)_adjustEndTimeVal:(struct timeval *)arg0 ;
-(void)_adjustTimeStruct:(struct timeval *)arg0 asBegin:(BOOL)arg1 ;
-(void)_populateMetrics;


@end


#endif