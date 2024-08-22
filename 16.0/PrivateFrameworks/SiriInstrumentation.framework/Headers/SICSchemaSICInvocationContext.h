// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SICSCHEMASICINVOCATIONCONTEXT_H
#define SICSCHEMASICINVOCATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SICSchemaSICInvocationCancelled.h"
#import "SICSchemaSICInvocationEnded.h"
#import "SICSchemaSICInvocationStarted.h"

@interface SICSchemaSICInvocationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SICSchemaSICInvocationCancelled *cancelled; // ivar: _cancelled
@property (retain, nonatomic) SICSchemaSICInvocationEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasCancelled; // ivar: _hasCancelled
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SICSchemaSICInvocationStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCancelled;
-(void)deleteEnded;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif