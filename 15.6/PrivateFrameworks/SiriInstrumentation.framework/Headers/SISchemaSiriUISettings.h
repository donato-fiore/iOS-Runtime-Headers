// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMASIRIUISETTINGS_H
#define SISCHEMASIRIUISETTINGS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL alwaysBlurBackground; // ivar: _alwaysBlurBackground
@property (nonatomic) BOOL alwaysShowSiriDialog; // ivar: _alwaysShowSiriDialog
@property (nonatomic) BOOL alwaysShowUserSpeechTranscript; // ivar: _alwaysShowUserSpeechTranscript
@property (nonatomic) BOOL hasAlwaysBlurBackground;
@property (nonatomic) BOOL hasAlwaysShowSiriDialog;
@property (nonatomic) BOOL hasAlwaysShowUserSpeechTranscript;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlwaysBlurBackground;
-(void)deleteAlwaysShowSiriDialog;
-(void)deleteAlwaysShowUserSpeechTranscript;
-(void)writeTo:(id)arg0 ;


@end


#endif