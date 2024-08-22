// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRNGRAMHITS_H
#define DODMLASRSCHEMADODMLASRNGRAMHITS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *hits; // ivar: _hits
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(unsigned int)hitsAtIndex:(NSUInteger)arg0 ;
-(void)addHits:(unsigned int)arg0 ;
-(void)clearHits;
-(void)writeTo:(id)arg0 ;


@end


#endif