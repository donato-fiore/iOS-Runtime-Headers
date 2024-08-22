// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USPSCHEMAUSPLOGGINGREPORTED_H
#define USPSCHEMAUSPLOGGINGREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *metrics; // ivar: _metrics
@property (copy, nonatomic) NSArray *sessionInfoItems; // ivar: _sessionInfoItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)metricsAtIndex:(NSUInteger)arg0 ;
-(id)sessionInfoItemsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMetrics:(id)arg0 ;
-(void)addSessionInfoItems:(id)arg0 ;
-(void)clearMetrics;
-(void)clearSessionInfoItems;
-(void)deleteMetrics;
-(void)deleteSessionInfoItems;
-(void)writeTo:(id)arg0 ;


@end


#endif