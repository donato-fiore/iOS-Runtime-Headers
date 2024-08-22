// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRUSOGRAPHTIER1_H
#define RRSCHEMAPROVISIONALRRUSOGRAPHTIER1_H

@class SISchemaInstrumentationMessage, NSData, USOSchemaUSOGraphTier1;



@interface RRSchemaProvisionalRRUsoGraphTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasUsoGraphTier1; // ivar: _hasUsoGraphTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1; // ivar: _usoGraphTier1


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif