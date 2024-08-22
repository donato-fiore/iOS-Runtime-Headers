// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ORCHSCHEMAORCHMEMORYUSAGEMETADATA_H
#define ORCHSCHEMAORCHMEMORYUSAGEMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHMemoryUsageMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMaxRSS;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxRSS; // ivar: _maxRSS


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMaxRSS;
-(void)writeTo:(id)arg0 ;


@end


#endif