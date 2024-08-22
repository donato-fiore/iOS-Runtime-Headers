// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALOVERRIDESOVERRIDESREQUEST_H
#define SIRINLUINTERNALOVERRIDESOVERRIDESREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALTokenChain.h"
#import "SIRINLUEXTERNALTurnContext.h"

@interface SIRINLUINTERNALOVERRIDESOverridesRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasTokenChain;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSMutableArray *inputs; // ivar: _inputs
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) NSMutableArray *systemDialogActs; // ivar: _systemDialogActs
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext; // ivar: _turnContext
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inputsAtIndex:(NSUInteger)arg0 ;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(id)systemDialogActsAtIndex:(NSUInteger)arg0 ;
-(void)addInputs:(id)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)addSystemDialogActs:(id)arg0 ;
-(void)clearInputs;
-(void)clearMatchingSpans;
-(void)clearSystemDialogActs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif