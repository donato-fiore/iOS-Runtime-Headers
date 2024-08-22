// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISETUPSCHEMASIRISETUPPHSENROLLMENTDIGITALZERODETECTIONCOMPLETED_H
#define SIRISETUPSCHEMASIRISETUPPHSENROLLMENTDIGITALZERODETECTIONCOMPLETED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsMaxNumContinuousZerosOverThreshold;
@property (nonatomic) BOOL hasMaxNumAllowedContinuousZeros;
@property (nonatomic) BOOL hasMaxNumContinuousZeros;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) BOOL hasPhraseId; // ivar: _hasPhraseId
@property (nonatomic) BOOL isMaxNumContinuousZerosOverThreshold; // ivar: _isMaxNumContinuousZerosOverThreshold
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int maxNumAllowedContinuousZeros; // ivar: _maxNumAllowedContinuousZeros
@property (nonatomic) unsigned int maxNumContinuousZeros; // ivar: _maxNumContinuousZeros
@property (nonatomic) unsigned int pageNumber; // ivar: _pageNumber
@property (copy, nonatomic) NSString *phraseId; // ivar: _phraseId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsMaxNumContinuousZerosOverThreshold;
-(void)deleteMaxNumAllowedContinuousZeros;
-(void)deleteMaxNumContinuousZeros;
-(void)deletePageNumber;
-(void)deletePhraseId;
-(void)writeTo:(id)arg0 ;


@end


#endif