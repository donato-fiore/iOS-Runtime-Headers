// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USPSCHEMAUSPCLIENTEVENTMETADATA_H
#define USPSCHEMAUSPCLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USPSchemaUSPMeasurementContext.h"
#import "SISchemaUUID.h"

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context; // ivar: _context
@property (nonatomic) BOOL hasContext; // ivar: _hasContext
@property (nonatomic) BOOL hasSutFingerprint; // ivar: _hasSutFingerprint
@property (nonatomic) BOOL hasUspId; // ivar: _hasUspId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint; // ivar: _sutFingerprint
@property (retain, nonatomic) SISchemaUUID *uspId; // ivar: _uspId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContext;
-(void)deleteSutFingerprint;
-(void)deleteUspId;
-(void)writeTo:(id)arg0 ;


@end


#endif