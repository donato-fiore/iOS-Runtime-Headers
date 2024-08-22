// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWSTEP_H
#define FLOWSCHEMAFLOWSTEP_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWAppContext.h"
#import "FLOWSchemaFLOWState.h"
#import "FLOWSchemaFLOWPlatformContext.h"

@interface FLOWSchemaFLOWStep : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWAppContext *appContext; // ivar: _appContext
@property (copy, nonatomic) NSArray *domainContexts; // ivar: _domainContexts
@property (retain, nonatomic) FLOWSchemaFLOWState *flowState; // ivar: _flowState
@property (nonatomic) BOOL hasAppContext; // ivar: _hasAppContext
@property (nonatomic) BOOL hasFlowState; // ivar: _hasFlowState
@property (nonatomic) BOOL hasPlatformRelatedContext; // ivar: _hasPlatformRelatedContext
@property (nonatomic) BOOL hasSequenceNum;
@property (nonatomic) BOOL hasTimestampMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *platformContexts; // ivar: _platformContexts
@property (retain, nonatomic) FLOWSchemaFLOWPlatformContext *platformRelatedContext; // ivar: _platformRelatedContext
@property (nonatomic) unsigned int sequenceNum; // ivar: _sequenceNum
@property (nonatomic) NSInteger timestampMs; // ivar: _timestampMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)domainContextCount;
-(NSUInteger)hash;
-(NSUInteger)platformContextCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)domainContextAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)platformContextAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addDomainContext:(id)arg0 ;
-(void)addPlatformContext:(id)arg0 ;
-(void)clearDomainContext;
-(void)clearPlatformContext;
-(void)deleteAppContext;
-(void)deleteDomainContext;
-(void)deleteFlowState;
-(void)deletePlatformContext;
-(void)deletePlatformRelatedContext;
-(void)deleteSequenceNum;
-(void)deleteTimestampMs;
-(void)writeTo:(id)arg0 ;


@end


#endif