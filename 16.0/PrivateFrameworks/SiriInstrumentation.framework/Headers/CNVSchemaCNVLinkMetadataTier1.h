// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVLINKMETADATATIER1_H
#define CNVSCHEMACNVLINKMETADATATIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CNVSchemaCNVLinkMetadataTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) BOOL hasAppBundleId; // ivar: _hasAppBundleId
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppBundleId;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif