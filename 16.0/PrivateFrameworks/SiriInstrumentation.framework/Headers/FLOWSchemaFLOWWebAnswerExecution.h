// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWWEBANSWEREXECUTION_H
#define FLOWSCHEMAFLOWWEBANSWEREXECUTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWWebAnswerExecution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int allowListType; // ivar: _allowListType
@property (nonatomic) unsigned int answerClass; // ivar: _answerClass
@property (nonatomic) unsigned int answerType; // ivar: _answerType
@property (nonatomic) unsigned int fuzzyMatchType; // ivar: _fuzzyMatchType
@property (nonatomic) BOOL hasAllowListType;
@property (nonatomic) BOOL hasAnswerClass;
@property (nonatomic) BOOL hasAnswerType;
@property (nonatomic) BOOL hasFuzzyMatchType;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) BOOL hasSubDomain;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int quality; // ivar: _quality
@property (nonatomic) unsigned int subDomain; // ivar: _subDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAllowListType;
-(void)deleteAnswerClass;
-(void)deleteAnswerType;
-(void)deleteFuzzyMatchType;
-(void)deleteQuality;
-(void)deleteSubDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif