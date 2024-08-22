// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUGSCHEMASUGSUPPRESSIONRESULT_H
#define SUGSCHEMASUGSUPPRESSIONRESULT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSuppressionReason;
@property (nonatomic) BOOL hasWasSuppressed;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int suppressionReason; // ivar: _suppressionReason
@property (nonatomic) BOOL wasSuppressed; // ivar: _wasSuppressed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSuppressionReason;
-(void)deleteWasSuppressed;
-(void)writeTo:(id)arg0 ;


@end


#endif