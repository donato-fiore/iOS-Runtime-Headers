// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTSUPPORTLOGMESSAGE_H
#define SIGNPOSTSUPPORTLOGMESSAGE_H

@class NSString, NSUUID;
@protocol SignpostSupportLoggingSupportArchiveEvent;


#import "SignpostSupportObject.h"

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent>



@property (nonatomic) NSUInteger _machContinuousTimestamp; // ivar: __machContinuousTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasNonScalarDynamicData; // ivar: _hasNonScalarDynamicData
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) unsigned char messageType; // ivar: _messageType
@property (nonatomic) int processID; // ivar: _processID
@property (retain, nonatomic) NSString *processImagePath; // ivar: _processImagePath
@property (retain, nonatomic) NSUUID *processImageUUID; // ivar: _processImageUUID
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) NSUInteger processUniqueID; // ivar: _processUniqueID
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger threadID; // ivar: _threadID
@property (nonatomic) NSInteger tv_sec; // ivar: _tv_sec
@property (nonatomic) int tv_usec; // ivar: _tv_usec
@property (nonatomic) int tz_dsttime; // ivar: _tz_dsttime
@property (nonatomic) int tz_minuteswest; // ivar: _tz_minuteswest


+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)durationMachContinuousTime;
-(NSUInteger)endMachContinuousTime;
-(NSUInteger)startMachContinuousTime;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)humanReadableType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 timebaseRatio:(CGFloat)arg2 unixDate:(struct timeval *)arg3 unixTimeZone:(struct timezone *)arg4 ;


@end


#endif