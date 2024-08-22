// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHENDPOINTERTIMEOUTMETADATA_H
#define MHSCHEMAMHENDPOINTERTIMEOUTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHEndpointerTimeoutMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsTimeout;
@property (nonatomic) BOOL hasTimeoutThresholdInNs;
@property (nonatomic) BOOL isTimeout; // ivar: _isTimeout
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger timeoutThresholdInNs; // ivar: _timeoutThresholdInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsTimeout;
-(void)deleteTimeoutThresholdInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif