// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISERVICEINSTRUMENTATIONBATCH_H
#define SISERVICEINSTRUMENTATIONBATCH_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SIServiceBatchInfo.h"

@interface SIServiceInstrumentationBatch : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *app_id; // ivar: _app_id
@property (retain, nonatomic) SIServiceBatchInfo *batch_info; // ivar: _batch_info
@property (copy, nonatomic) NSArray *events; // ivar: _events
@property (nonatomic) BOOL hasApp_id; // ivar: _hasApp_id
@property (nonatomic) BOOL hasBatch_info; // ivar: _hasBatch_info
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)eventCount;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addEvent:(id)arg0 ;
-(void)clearEvent;
-(void)deleteApp_id;
-(void)deleteBatch_info;
-(void)deleteEvent;
-(void)writeTo:(id)arg0 ;


@end


#endif