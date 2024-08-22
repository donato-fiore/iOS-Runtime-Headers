// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPINSTSCHEMACLPCURAREAPPINTENTSAMPLECLASSIFICATIONENDED_H
#define CLPINSTSCHEMACLPCURAREAPPINTENTSAMPLECLASSIFICATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float probability; // ivar: _probability


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteProbability;
-(void)writeTo:(id)arg0 ;


@end


#endif