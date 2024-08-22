// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAUUFRSHOWN_H
#define SISCHEMAUUFRSHOWN_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaGridCardSection.h"
#import "SISchemaUUID.h"
#import "SISchemaSiriResponseContext.h"

@interface SISchemaUUFRShown : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *aceViewClass; // ivar: _aceViewClass
@property (copy, nonatomic) NSString *aceViewID; // ivar: _aceViewID
@property (copy, nonatomic) NSString *dialogIdentifier; // ivar: _dialogIdentifier
@property (retain, nonatomic) SISchemaGridCardSection *gridCardSection; // ivar: _gridCardSection
@property (nonatomic) BOOL hasAceViewClass; // ivar: _hasAceViewClass
@property (nonatomic) BOOL hasAceViewID; // ivar: _hasAceViewID
@property (nonatomic) BOOL hasDialogIdentifier; // ivar: _hasDialogIdentifier
@property (nonatomic) BOOL hasGridCardSection; // ivar: _hasGridCardSection
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasSiriResponseContext; // ivar: _hasSiriResponseContext
@property (nonatomic) BOOL hasSiriUILocation;
@property (nonatomic) BOOL hasSnippetClass; // ivar: _hasSnippetClass
@property (nonatomic) BOOL hasViewID; // ivar: _hasViewID
@property (nonatomic) BOOL hasViewRegionDesignation;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // ivar: _siriResponseContext
@property (nonatomic) int siriUILocation; // ivar: _siriUILocation
@property (copy, nonatomic) NSString *snippetClass; // ivar: _snippetClass
@property (copy, nonatomic) NSString *viewID; // ivar: _viewID
@property (nonatomic) int viewRegionDesignation; // ivar: _viewRegionDesignation
@property (readonly, nonatomic) NSUInteger whichSubsection; // ivar: _whichSubsection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceViewClass;
-(void)deleteAceViewID;
-(void)deleteDialogIdentifier;
-(void)deleteGridCardSection;
-(void)deleteLinkId;
-(void)deleteSiriResponseContext;
-(void)deleteSiriUILocation;
-(void)deleteSnippetClass;
-(void)deleteViewID;
-(void)deleteViewRegionDesignation;
-(void)writeTo:(id)arg0 ;


@end


#endif