// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEABMODELEVALUATED_H
#define INFERENCESCHEMAINFERENCEABMODELEVALUATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsDecisionCorrect;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasNumCandidateApps;
@property (nonatomic) BOOL hasProjectIntent;
@property (nonatomic) BOOL isDecisionCorrect; // ivar: _isDecisionCorrect
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (nonatomic) int numCandidateApps; // ivar: _numCandidateApps
@property (nonatomic) int projectIntent; // ivar: _projectIntent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsDecisionCorrect;
-(void)deleteModelVersion;
-(void)deleteNumCandidateApps;
-(void)deleteProjectIntent;
-(void)writeTo:(id)arg0 ;


@end


#endif