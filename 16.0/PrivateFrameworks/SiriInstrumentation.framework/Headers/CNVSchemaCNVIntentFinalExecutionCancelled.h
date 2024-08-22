// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVINTENTFINALEXECUTIONCANCELLED_H
#define CNVSCHEMACNVINTENTFINALEXECUTIONCANCELLED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVIntentFinalExecutionCancelled : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int cancellationReason; // ivar: _cancellationReason
@property (nonatomic) BOOL hasCancellationReason;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCancellationReason;
-(void)writeTo:(id)arg0 ;


@end


#endif