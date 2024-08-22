// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSSCHEMAPLUSCONTACTGROUNDTRUTHGENERATED_H
#define PLUSSCHEMAPLUSCONTACTGROUNDTRUTHGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSContactGroundTruth.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSContactGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSContactGroundTruth *groundTruth; // ivar: _groundTruth
@property (nonatomic) BOOL hasGroundTruth; // ivar: _hasGroundTruth
@property (nonatomic) BOOL hasOriginalPlusId; // ivar: _hasOriginalPlusId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalPlusId; // ivar: _originalPlusId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGroundTruth;
-(void)deleteOriginalPlusId;
-(void)writeTo:(id)arg0 ;


@end


#endif