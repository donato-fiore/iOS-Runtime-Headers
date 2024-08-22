// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINSTSCHEMACLPNLV4TASKEVALUATIONENDED_H
#define CLPINSTSCHEMACLPNLV4TASKEVALUATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CLPInstSchemaCLPNLv4TaskEvaluationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat accuracyOnAnyUserParse; // ivar: _accuracyOnAnyUserParse
@property (nonatomic) CGFloat accuracyOnTheFirstUserParseCount; // ivar: _accuracyOnTheFirstUserParseCount
@property (nonatomic) unsigned int evaluationCount; // ivar: _evaluationCount
@property (nonatomic) BOOL hasAccuracyOnAnyUserParse;
@property (nonatomic) BOOL hasAccuracyOnTheFirstUserParseCount;
@property (nonatomic) BOOL hasEvaluationCount;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccuracyOnAnyUserParse;
-(void)deleteAccuracyOnTheFirstUserParseCount;
-(void)deleteEvaluationCount;
-(void)writeTo:(id)arg0 ;


@end


#endif