// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRPACKAGEGENERATED_H
#define ASRSCHEMAASRPACKAGEGENERATED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRPackage.h"

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsFinal;
@property (nonatomic) BOOL hasLoggableSharedUserId; // ivar: _hasLoggableSharedUserId
@property (nonatomic) BOOL hasPackage; // ivar: _hasPackage
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *loggableSharedUserId; // ivar: _loggableSharedUserId
@property (retain, nonatomic) ASRSchemaASRPackage *package; // ivar: _package
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsFinal;
-(void)deleteLoggableSharedUserId;
-(void)deletePackage;
-(void)deleteResultCandidateId;
-(void)writeTo:(id)arg0 ;


@end


#endif