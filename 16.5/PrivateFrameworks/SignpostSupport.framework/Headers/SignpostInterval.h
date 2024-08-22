// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTINTERVAL_H
#define SIGNPOSTINTERVAL_H

@class NSString;


#import "SignpostObject.h"
#import "SignpostEvent.h"

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent; // ivar: _beginEvent
@property (retain, nonatomic) SignpostEvent *endEvent; // ivar: _endEvent
@property (readonly, nonatomic) BOOL isSyntheticInterval;


+(id)serializationTypeNumber;
-(BOOL)_hasBeginTimeval;
-(BOOL)_hasEndTimeval;
-(BOOL)beginTimezone:(struct timezone *)arg0 ;
-(BOOL)endTimezone:(struct timezone *)arg0 ;
-(BOOL)intersectsInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)telemetryEnabled;
-(NSInteger)tv_sec;
-(NSUInteger)durationMachContinuousTime;
-(NSUInteger)endMachContinuousTime;
-(NSUInteger)hash;
-(NSUInteger)scope;
-(NSUInteger)startMachContinuousTime;
-(float)durationSeconds;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_eventDescriptions;
-(id)debugDescription;
-(id)descriptionWithTimeFormat:(NSUInteger)arg0 verbosity:(unsigned char)arg1 ;
-(id)humanReadableType;
-(id)initWithBeginEvent:(id)arg0 endEvent:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)number1Name;
-(id)number1Value;
-(id)number2Name;
-(id)number2Value;
-(id)string1Name;
-(id)string1Value;
-(id)string2Name;
-(id)string2Value;
-(int)tv_usec;
-(int)tz_dsttime;
-(int)tz_minuteswest;
-(void)_adjustBeginTimeVal:(struct timeval *)arg0 ;
-(void)_adjustEndTimeVal:(struct timeval *)arg0 ;


@end


#endif