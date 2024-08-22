// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMSYSTEMDIALOGACT_H
#define NLXSCHEMACDMSYSTEMDIALOGACT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMSystemGaveOptions.h"
#import "SISchemaUUID.h"
#import "NLXSchemaCDMSystemInformed.h"
#import "NLXSchemaCDMSystemOffered.h"
#import "NLXSchemaCDMSystemPrompted.h"
#import "NLXSchemaCDMSystemReportedFailure.h"
#import "NLXSchemaCDMSystemReportedSuccess.h"

@interface NLXSchemaCDMSystemDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSystemGaveOptions *gaveOptions; // ivar: _gaveOptions
@property (nonatomic) BOOL hasGaveOptions; // ivar: _hasGaveOptions
@property (nonatomic) BOOL hasId; // ivar: _hasId
@property (nonatomic) BOOL hasInformed; // ivar: _hasInformed
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasOffered; // ivar: _hasOffered
@property (nonatomic) BOOL hasPrompted; // ivar: _hasPrompted
@property (nonatomic) BOOL hasReportedFailure; // ivar: _hasReportedFailure
@property (nonatomic) BOOL hasReportedSuccess; // ivar: _hasReportedSuccess
@property (retain, nonatomic) SISchemaUUID *id; // ivar: _id
@property (retain, nonatomic) NLXSchemaCDMSystemInformed *informed; // ivar: _informed
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) NLXSchemaCDMSystemOffered *offered; // ivar: _offered
@property (retain, nonatomic) NLXSchemaCDMSystemPrompted *prompted; // ivar: _prompted
@property (retain, nonatomic) NLXSchemaCDMSystemReportedFailure *reportedFailure; // ivar: _reportedFailure
@property (retain, nonatomic) NLXSchemaCDMSystemReportedSuccess *reportedSuccess; // ivar: _reportedSuccess
@property (readonly, nonatomic) NSUInteger whichSystemdialogacttype; // ivar: _whichSystemdialogacttype


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGaveOptions;
-(void)deleteId;
-(void)deleteInformed;
-(void)deleteLinkId;
-(void)deleteOffered;
-(void)deletePrompted;
-(void)deleteReportedFailure;
-(void)deleteReportedSuccess;
-(void)writeTo:(id)arg0 ;


@end


#endif