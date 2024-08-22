// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWDOMAINCONTEXT_H
#define FLOWSCHEMAFLOWDOMAINCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWHomeAutomationContext.h"
#import "FLOWSchemaFLOWMediaPlayerContext.h"
#import "FLOWSchemaFLOWPhoneCallContext.h"
#import "FLOWSchemaFLOWSmsContext.h"
#import "FLOWSchemaFLOWVoiceShortcutContext.h"

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasHomeAutomationContext; // ivar: _hasHomeAutomationContext
@property (nonatomic) BOOL hasMediaPlayerContext; // ivar: _hasMediaPlayerContext
@property (nonatomic) BOOL hasPhoneCallContext; // ivar: _hasPhoneCallContext
@property (nonatomic) BOOL hasSmsContext; // ivar: _hasSmsContext
@property (nonatomic) BOOL hasVoiceShortcutContext; // ivar: _hasVoiceShortcutContext
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext; // ivar: _homeAutomationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext; // ivar: _mediaPlayerContext
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext; // ivar: _phoneCallContext
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext; // ivar: _smsContext
@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext; // ivar: _voiceShortcutContext
@property (readonly, nonatomic) NSUInteger whichDomaincontext; // ivar: _whichDomaincontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif