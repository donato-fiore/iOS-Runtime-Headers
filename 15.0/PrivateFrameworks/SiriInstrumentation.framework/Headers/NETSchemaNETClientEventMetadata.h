// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETSCHEMANETCLIENTEVENTMETADATA_H
#define NETSCHEMANETCLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NETSchemaNETClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasNetId; // ivar: _hasNetId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *netId; // ivar: _netId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif