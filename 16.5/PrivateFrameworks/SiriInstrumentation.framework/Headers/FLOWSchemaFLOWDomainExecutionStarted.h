// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWDOMAINEXECUTIONSTARTED_H
#define FLOWSCHEMAFLOWDOMAINEXECUTIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWDomainExecutionStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int domainExecutionType; // ivar: _domainExecutionType
@property (nonatomic) BOOL hasDomainExecutionType;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDomainExecutionType;
-(void)writeTo:(id)arg0 ;


@end


#endif