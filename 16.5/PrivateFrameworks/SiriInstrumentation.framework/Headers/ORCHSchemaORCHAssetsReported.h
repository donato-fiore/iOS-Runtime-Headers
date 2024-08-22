// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ORCHSCHEMAORCHASSETSREPORTED_H
#define ORCHSCHEMAORCHASSETSREPORTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHAssetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)assetsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAssets:(id)arg0 ;
-(void)clearAssets;
-(void)deleteAssets;
-(void)writeTo:(id)arg0 ;


@end


#endif