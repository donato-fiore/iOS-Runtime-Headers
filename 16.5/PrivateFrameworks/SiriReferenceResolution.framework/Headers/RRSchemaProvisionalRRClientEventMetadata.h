// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRCLIENTEVENTMETADATA_H
#define RRSCHEMAPROVISIONALRRCLIENTEVENTMETADATA_H

@class SISchemaInstrumentationMessage, NSData, SISchemaUUID;



@interface RRSchemaProvisionalRRClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (nonatomic) BOOL hasRrID; // ivar: _hasRrID
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) SISchemaUUID *rrID; // ivar: _rrID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif