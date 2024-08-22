// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVSCHEMACNVINTENTFINALEXECUTIONENDED_H
#define CNVSCHEMACNVINTENTFINALEXECUTIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVIntentFinalExecutionEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int bypassReason; // ivar: _bypassReason
@property (nonatomic) int eagerStatus; // ivar: _eagerStatus
@property (nonatomic) BOOL hasBypassReason;
@property (nonatomic) BOOL hasEagerStatus;
@property (nonatomic) BOOL hasMaxRss;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxRss; // ivar: _maxRss


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBypassReason;
-(void)deleteEagerStatus;
-(void)deleteMaxRss;
-(void)writeTo:(id)arg0 ;


@end


#endif