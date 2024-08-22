// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHODLDFALSETRIGGERMITIGATED_H
#define MHSCHEMAMHODLDFALSETRIGGERMITIGATED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorMessage; // ivar: _hasErrorMessage
@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (nonatomic) BOOL hasOdldScore;
@property (nonatomic) BOOL hasOdldScoreThreshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) float odldScore; // ivar: _odldScore
@property (nonatomic) float odldScoreThreshold; // ivar: _odldScoreThreshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorMessage;
-(void)deleteModelVersion;
-(void)deleteOdldScore;
-(void)deleteOdldScoreThreshold;
-(void)writeTo:(id)arg0 ;


@end


#endif