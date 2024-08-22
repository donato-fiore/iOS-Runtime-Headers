// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMUSERACCEPTED_H
#define NLXSCHEMACDMUSERACCEPTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMUserAccepted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOfferId; // ivar: _hasOfferId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *offerId; // ivar: _offerId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif