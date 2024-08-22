// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRAUDIOFILERESULT_H
#define DODMLASRSCHEMADODMLASRAUDIOFILERESULT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLASRSchemaDODMLASRAudioFileResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *asrId; // ivar: _asrId
@property (copy, nonatomic) NSArray *decodingResults; // ivar: _decodingResults
@property (nonatomic) BOOL hasAsrId; // ivar: _hasAsrId
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)decodingResultsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addDecodingResults:(id)arg0 ;
-(void)clearDecodingResults;
-(void)deleteAsrId;
-(void)deleteDecodingResults;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif