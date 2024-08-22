// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSRECTIFIPATTERNCONSTRAINT_H
#define PLUSSCHEMAPLUSRECTIFIPATTERNCONSTRAINT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSRECTIFIPatternConstraint : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int constraintType; // ivar: _constraintType
@property (nonatomic) float constraintValue; // ivar: _constraintValue
@property (nonatomic) BOOL hasConstraintType;
@property (nonatomic) BOOL hasConstraintValue;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConstraintType;
-(void)deleteConstraintValue;
-(void)writeTo:(id)arg0 ;


@end


#endif