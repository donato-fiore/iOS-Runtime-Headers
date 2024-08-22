// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USPSCHEMAUSPMETRIC_H
#define USPSCHEMAUSPMETRIC_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface USPSchemaUSPMetric : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasUnit; // ivar: _hasUnit
@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSArray *iterationValues; // ivar: _iterationValues
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *unit; // ivar: _unit
@property (nonatomic) CGFloat value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)iterationValuesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addIterationValues:(CGFloat)arg0 ;
-(void)clearIterationValues;
-(void)deleteIterationValues;
-(void)deleteName;
-(void)deleteUnit;
-(void)deleteValue;
-(void)writeTo:(id)arg0 ;


@end


#endif