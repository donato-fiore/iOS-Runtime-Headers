// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESFUNCTIONPERFORMANCEPROFILE_H
#define POMMESSCHEMAPOMMESFUNCTIONPERFORMANCEPROFILE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *callingFunction; // ivar: _callingFunction
@property (nonatomic) CGFloat durationInMs; // ivar: _durationInMs
@property (copy, nonatomic) NSString *fileId; // ivar: _fileId
@property (nonatomic) BOOL hasCallingFunction; // ivar: _hasCallingFunction
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL hasFileId; // ivar: _hasFileId
@property (nonatomic) BOOL hasLineNumber;
@property (nonatomic) BOOL hasMeasurementLabel; // ivar: _hasMeasurementLabel
@property (nonatomic) BOOL hasStartTimeIntervalSince2001InMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int lineNumber; // ivar: _lineNumber
@property (copy, nonatomic) NSString *measurementLabel; // ivar: _measurementLabel
@property (nonatomic) CGFloat startTimeIntervalSince2001InMs; // ivar: _startTimeIntervalSince2001InMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCallingFunction;
-(void)deleteDurationInMs;
-(void)deleteFileId;
-(void)deleteLineNumber;
-(void)deleteMeasurementLabel;
-(void)deleteStartTimeIntervalSince2001InMs;
-(void)writeTo:(id)arg0 ;


@end


#endif