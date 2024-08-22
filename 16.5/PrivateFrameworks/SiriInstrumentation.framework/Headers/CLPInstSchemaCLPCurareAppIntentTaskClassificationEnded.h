// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINSTSCHEMACLPCURAREAPPINTENTTASKCLASSIFICATIONENDED_H
#define CLPINSTSCHEMACLPCURAREAPPINTENTTASKCLASSIFICATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int classifiedSampleCount; // ivar: _classifiedSampleCount
@property (nonatomic) BOOL hasClassifiedSampleCount;
@property (nonatomic) BOOL hasPositiveCount;
@property (nonatomic) BOOL hasSampleCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int positiveCount; // ivar: _positiveCount
@property (nonatomic) unsigned int sampleCount; // ivar: _sampleCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClassifiedSampleCount;
-(void)deletePositiveCount;
-(void)deleteSampleCount;
-(void)writeTo:(id)arg0 ;


@end


#endif