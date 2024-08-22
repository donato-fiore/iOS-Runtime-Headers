// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ORCHSCHEMAORCHREQUESTCONTEXT_H
#define ORCHSCHEMAORCHREQUESTCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ORCHSchemaORCHRequestCancelled.h"
#import "ORCHSchemaORCHRequestEnded.h"
#import "ORCHSchemaORCHRequestFailed.h"
#import "ORCHSchemaORCHRequestStarted.h"

@interface ORCHSchemaORCHRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHRequestCancelled *cancelled; // ivar: _cancelled
@property (retain, nonatomic) ORCHSchemaORCHRequestEnded *ended; // ivar: _ended
@property (retain, nonatomic) ORCHSchemaORCHRequestFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasCancelled; // ivar: _hasCancelled
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ORCHSchemaORCHRequestStarted *startedOrChanged; // ivar: _startedOrChanged
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
-(void)deleteFailed;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif