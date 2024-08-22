// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBQUERYHEALTHSAMPLEINTENT_H
#define _INPBQUERYHEALTHSAMPLEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBQueryHealthSampleIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBWellnessUnitType.h"

@interface _INPBQueryHealthSampleIntent : PBCodable <_INPBQueryHealthSampleIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int expectedResultType; // ivar: _expectedResultType
@property (nonatomic) BOOL hasExpectedResultType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) BOOL hasQuestionType;
@property (readonly, nonatomic) BOOL hasUnit;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int objectType; // ivar: _objectType
@property (nonatomic) int questionType; // ivar: _questionType
@property (copy, nonatomic) NSArray *recordDates; // ivar: _recordDates
@property (readonly, nonatomic) NSUInteger recordDatesCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *thresholdValues; // ivar: _thresholdValues
@property (readonly, nonatomic) NSUInteger thresholdValuesCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit; // ivar: _unit


+(BOOL)supportsSecureCoding;
+(Class)recordDateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)expectedResultTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)objectTypeAsString:(int)arg0 ;
-(id)questionTypeAsString:(int)arg0 ;
-(id)recordDateAtIndex:(NSUInteger)arg0 ;
-(id)thresholdValuesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsExpectedResultType:(id)arg0 ;
-(int)StringAsObjectType:(id)arg0 ;
-(int)StringAsQuestionType:(id)arg0 ;
-(void)addRecordDate:(id)arg0 ;
-(void)addThresholdValues:(id)arg0 ;
-(void)clearRecordDates;
-(void)clearThresholdValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif