// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWDOMAINCONTEXT_H
#define FLOWSCHEMAFLOWDOMAINCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWBriefingContext.h"
#import "FLOWSchemaFLOWHomeAutomationContext.h"
#import "FLOWSchemaFLOWHomeCommunicationContext.h"
#import "FLOWSchemaFLOWIdentityContext.h"
#import "FLOWSchemaFLOWInformationPluginContext.h"
#import "FLOWSchemaFLOWMediaPlayerContext.h"
#import "FLOWSchemaFLOWPegasusContext.h"
#import "FLOWSchemaFLOWPhoneCallContext.h"
#import "FLOWSchemaFLOWSmsContext.h"
#import "FLOWSchemaFLOWVoiceShortcutContext.h"

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWBriefingContext *briefingContext; // ivar: _briefingContext
@property (nonatomic) BOOL hasBriefingContext; // ivar: _hasBriefingContext
@property (nonatomic) BOOL hasHomeAutomationContext; // ivar: _hasHomeAutomationContext
@property (nonatomic) BOOL hasHomeCommunicationContext; // ivar: _hasHomeCommunicationContext
@property (nonatomic) BOOL hasIdentityContext; // ivar: _hasIdentityContext
@property (nonatomic) BOOL hasInformationPluginContext; // ivar: _hasInformationPluginContext
@property (nonatomic) BOOL hasMediaPlayerContext; // ivar: _hasMediaPlayerContext
@property (nonatomic) BOOL hasPegasusContext; // ivar: _hasPegasusContext
@property (nonatomic) BOOL hasPhoneCallContext; // ivar: _hasPhoneCallContext
@property (nonatomic) BOOL hasSmsContext; // ivar: _hasSmsContext
@property (nonatomic) BOOL hasVoiceShortcutContext; // ivar: _hasVoiceShortcutContext
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext; // ivar: _homeAutomationContext
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationContext *homeCommunicationContext; // ivar: _homeCommunicationContext
@property (retain, nonatomic) FLOWSchemaFLOWIdentityContext *identityContext; // ivar: _identityContext
@property (retain, nonatomic) FLOWSchemaFLOWInformationPluginContext *informationPluginContext; // ivar: _informationPluginContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext; // ivar: _mediaPlayerContext
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContext *pegasusContext; // ivar: _pegasusContext
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext; // ivar: _phoneCallContext
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext; // ivar: _smsContext
@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext; // ivar: _voiceShortcutContext
@property (readonly, nonatomic) NSUInteger whichDomaincontext; // ivar: _whichDomaincontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBriefingContext;
-(void)deleteHomeAutomationContext;
-(void)deleteHomeCommunicationContext;
-(void)deleteIdentityContext;
-(void)deleteInformationPluginContext;
-(void)deleteMediaPlayerContext;
-(void)deletePegasusContext;
-(void)deletePhoneCallContext;
-(void)deleteSmsContext;
-(void)deleteVoiceShortcutContext;
-(void)writeTo:(id)arg0 ;


@end


#endif