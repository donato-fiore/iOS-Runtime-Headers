// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RRSCHEMARRANNOTATION_H
#define RRSCHEMARRANNOTATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RRSchemaRRAnnotation : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger annotationAddedTimestampInSeconds; // ivar: _annotationAddedTimestampInSeconds
@property (nonatomic) BOOL hasAnnotationAddedTimestampInSeconds;
@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnnotationAddedTimestampInSeconds;
-(void)deleteName;
-(void)writeTo:(id)arg0 ;


@end


#endif