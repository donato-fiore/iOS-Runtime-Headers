// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALPULLERSTARTED_H
#define RRSCHEMAPROVISIONALPULLERSTARTED_H

@class SISchemaInstrumentationMessage, NSData, NSString;



@interface RRSchemaProvisionalPullerStarted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif