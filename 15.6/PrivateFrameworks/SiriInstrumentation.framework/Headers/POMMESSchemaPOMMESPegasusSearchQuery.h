// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESPEGASUSSEARCHQUERY_H
#define POMMESSCHEMAPOMMESPEGASUSSEARCHQUERY_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESPegasusSearchQueryAmpUserState.h"

@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState; // ivar: _ampUserState
@property (nonatomic) BOOL hasAmpUserState; // ivar: _hasAmpUserState
@property (nonatomic) BOOL hasAudioQueueStateInfo; // ivar: _hasAudioQueueStateInfo
@property (nonatomic) BOOL hasHasAudioQueueStateInfo;
@property (nonatomic) BOOL hasHasRewrittenUtterances;
@property (nonatomic) BOOL hasRewrittenUtterances; // ivar: _hasRewrittenUtterances
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *userSpans; // ivar: _userSpans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)userSpanCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)userSpanAtIndex:(NSUInteger)arg0 ;
-(void)addUserSpan:(id)arg0 ;
-(void)clearUserSpan;
-(void)deleteAmpUserState;
-(void)deleteHasAudioQueueStateInfo;
-(void)deleteHasRewrittenUtterances;
-(void)deleteUserSpan;
-(void)writeTo:(id)arg0 ;


@end


#endif