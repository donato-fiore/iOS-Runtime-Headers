// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRMANUALEDITMETRICCLASSIFIED_H
#define ASRSCHEMAASRMANUALEDITMETRICCLASSIFIED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRManualEditMetricClassified : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumDeletions;
@property (nonatomic) BOOL hasNumInsertions;
@property (nonatomic) BOOL hasNumSubstitutions;
@property (nonatomic) BOOL hasOriginalAsrId; // ivar: _hasOriginalAsrId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numDeletions; // ivar: _numDeletions
@property (nonatomic) int numInsertions; // ivar: _numInsertions
@property (nonatomic) int numSubstitutions; // ivar: _numSubstitutions
@property (retain, nonatomic) SISchemaUUID *originalAsrId; // ivar: _originalAsrId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumDeletions;
-(void)deleteNumInsertions;
-(void)deleteNumSubstitutions;
-(void)deleteOriginalAsrId;
-(void)writeTo:(id)arg0 ;


@end


#endif