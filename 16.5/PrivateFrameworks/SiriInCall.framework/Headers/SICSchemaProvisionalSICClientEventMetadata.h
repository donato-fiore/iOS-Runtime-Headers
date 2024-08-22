// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SICSCHEMAPROVISIONALSICCLIENTEVENTMETADATA_H
#define SICSCHEMAPROVISIONALSICCLIENTEVENTMETADATA_H

@class SISchemaInstrumentationMessage, NSData, SISchemaUUID;



@interface SICSchemaProvisionalSICClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSicId; // ivar: _hasSicId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sicId; // ivar: _sicId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteSicId;
-(void)writeTo:(id)arg0 ;


@end


#endif