// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)assetsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addAssets:(id)arg0 ;
-(void)clearAssets;
-(void)writeTo:(id)arg0 ;


@end


#endif