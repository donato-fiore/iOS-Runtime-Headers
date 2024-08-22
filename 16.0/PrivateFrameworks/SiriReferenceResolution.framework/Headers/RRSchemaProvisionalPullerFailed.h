// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RRSCHEMAPROVISIONALPULLERFAILED_H
#define RRSCHEMAPROVISIONALPULLERFAILED_H

@class SISchemaInstrumentationMessage, NSData, NSString;



@interface RRSchemaProvisionalPullerFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasTimeout;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL timeout; // ivar: _timeout


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif