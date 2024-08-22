// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAUUFRCOMPLETION_H
#define SISCHEMAUUFRCOMPLETION_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaSiriResponseContext.h"

@interface SISchemaUUFRCompletion : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int completionStatus; // ivar: _completionStatus
@property (nonatomic) BOOL hasCompletionStatus;
@property (nonatomic) BOOL hasSiriResponseContext; // ivar: _hasSiriResponseContext
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses; // ivar: _homeKitAccessoryResponses
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // ivar: _siriResponseContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)homeKitAccessoryResponseCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)homeKitAccessoryResponseAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHomeKitAccessoryResponse:(id)arg0 ;
-(void)clearHomeKitAccessoryResponse;
-(void)deleteCompletionStatus;
-(void)deleteHomeKitAccessoryResponse;
-(void)deleteSiriResponseContext;
-(void)writeTo:(id)arg0 ;


@end


#endif