// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTOBJECT_H
#define SIGNPOSTSUPPORTOBJECT_H

@class NSDate, NSString;
@protocol SignpostSerializable, SignpostSupportTimeInterval;

#import <Foundation/Foundation.h>


@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval>



@property (readonly, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger durationMachContinuousTime;
@property (readonly, nonatomic) float durationSeconds;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUInteger endMachContinuousTime;
@property (readonly, nonatomic) NSUInteger endNanoseconds;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger startMachContinuousTime;
@property (readonly, nonatomic) NSUInteger startNanoseconds;
@property (retain, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timebaseRatio; // ivar: _timebaseRatio
@property (readonly, nonatomic) NSInteger tv_sec;
@property (readonly, nonatomic) int tv_usec;
@property (readonly, nonatomic) int tz_dsttime;
@property (readonly, nonatomic) int tz_minuteswest;


+(id)headerWithTimeFormat:(NSUInteger)arg0 verbosity:(unsigned char)arg1 ;
+(id)serializationTypeNumber;
-(BOOL)_containsMCT:(NSUInteger)arg0 ;
-(BOOL)_containsTimeObject:(id)arg0 ;
-(BOOL)_hasBeginTimeval;
-(BOOL)_hasEndTimeval;
-(BOOL)_populateTimeStruct:(struct time *)arg0 withTimeval:(struct timeval *)arg1 withTZString:(id)arg2 ;
-(BOOL)beginTimeval:(struct timeval *)arg0 ;
-(BOOL)beginTimezone:(struct timezone *)arg0 ;
-(BOOL)endTimeval:(struct timeval *)arg0 ;
-(BOOL)endTimezone:(struct timezone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)durationMs;
-(CGFloat)endMs;
-(CGFloat)endSeconds;
-(CGFloat)startMs;
-(CGFloat)startSeconds;
-(NSUInteger)durationNanoseconds;
-(id)_containedObjectsFromArray:(id)arg0 ;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_descriptionWithTimeFormat:(NSUInteger)arg0 verbosity:(unsigned char)arg1 asBegin:(BOOL)arg2 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_wallTimeStringWithTimeZone:(id)arg0 isBegin:(BOOL)arg1 ;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg0 ;
-(id)descriptionWithTimeFormat:(NSUInteger)arg0 verbosity:(unsigned char)arg1 ;
-(id)endWallTimeStringWithTimeZoneName:(id)arg0 ;
-(id)humanReadableDictionaryRepresentation;
-(id)humanReadableType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 timebaseRatio:(CGFloat)arg2 ;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg0 ;
-(void)_adjustBeginTimeVal:(struct timeval *)arg0 ;
-(void)_adjustEndTimeVal:(struct timeval *)arg0 ;


@end


#endif