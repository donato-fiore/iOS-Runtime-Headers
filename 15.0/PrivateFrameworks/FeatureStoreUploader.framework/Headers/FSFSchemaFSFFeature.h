// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSFSCHEMAFSFFEATURE_H
#define FSFSCHEMAFSFFEATURE_H

@class SISchemaInstrumentationMessage, NSData, NSString;



@interface FSFSchemaFSFFeature : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPayLoad; // ivar: _hasPayLoad
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *payLoad; // ivar: _payLoad


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif