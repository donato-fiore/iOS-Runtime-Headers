// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMMATCHINGSPANTIER1_H
#define NLXSCHEMACDMMATCHINGSPANTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMInternalSpanDataTier1.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMMatchingSpanTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInput; // ivar: _hasInput
@property (nonatomic) BOOL hasInternalSpanData; // ivar: _hasInternalSpanData
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasSemanticValue; // ivar: _hasSemanticValue
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (retain, nonatomic) NLXSchemaCDMInternalSpanDataTier1 *internalSpanData; // ivar: _internalSpanData
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSString *semanticValue; // ivar: _semanticValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInput;
-(void)deleteInternalSpanData;
-(void)deleteLinkId;
-(void)deleteSemanticValue;
-(void)writeTo:(id)arg0 ;


@end


#endif