// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIAGROUNDTRUTHGENERATED_H
#define PLUSSCHEMAPLUSMEDIAGROUNDTRUTHGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSMediaGroundTruth.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSMediaGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaGroundTruth *groundTruth; // ivar: _groundTruth
@property (nonatomic) BOOL hasGroundTruth; // ivar: _hasGroundTruth
@property (nonatomic) BOOL hasOriginalRequestId; // ivar: _hasOriginalRequestId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalRequestId; // ivar: _originalRequestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGroundTruth;
-(void)deleteOriginalRequestId;
-(void)writeTo:(id)arg0 ;


@end


#endif