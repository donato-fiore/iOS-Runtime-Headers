// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMSYSTEMDIALOGACTTIER1_H
#define NLXSCHEMACDMSYSTEMDIALOGACTTIER1_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMSystemDialogActTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasRenderedText; // ivar: _hasRenderedText
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSString *renderedText; // ivar: _renderedText


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif