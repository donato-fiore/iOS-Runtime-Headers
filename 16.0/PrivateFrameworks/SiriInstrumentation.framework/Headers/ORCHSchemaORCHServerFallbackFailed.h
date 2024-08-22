// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHSERVERFALLBACKFAILED_H
#define ORCHSCHEMAORCHSERVERFALLBACKFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHServerFallbackFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)writeTo:(id)arg0 ;


@end


#endif