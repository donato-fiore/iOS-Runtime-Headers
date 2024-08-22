// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWKGQAEXECUTION_H
#define FLOWSCHEMAFLOWKGQAEXECUTION_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWKGQAExecution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (nonatomic) BOOL hasIsDisputedResponse;
@property (nonatomic) BOOL hasIsWebExtractedFact;
@property (nonatomic) BOOL hasKgQAUsecase;
@property (nonatomic) BOOL hasNlgKey; // ivar: _hasNlgKey
@property (nonatomic) BOOL isDisputedResponse; // ivar: _isDisputedResponse
@property (nonatomic) BOOL isWebExtractedFact; // ivar: _isWebExtractedFact
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int kgQAUsecase; // ivar: _kgQAUsecase
@property (copy, nonatomic) NSString *nlgKey; // ivar: _nlgKey


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAttributes:(id)arg0 ;
-(void)clearAttributes;
-(void)deleteAttributes;
-(void)deleteIsDisputedResponse;
-(void)deleteIsWebExtractedFact;
-(void)deleteKgQAUsecase;
-(void)deleteNlgKey;
-(void)writeTo:(id)arg0 ;


@end


#endif