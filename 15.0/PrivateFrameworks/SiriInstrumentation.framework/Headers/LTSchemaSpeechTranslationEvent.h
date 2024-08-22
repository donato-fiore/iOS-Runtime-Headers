// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LTSCHEMASPEECHTRANSLATIONEVENT_H
#define LTSCHEMASPEECHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "LTSchemaError.h"
#import "LTSchemaTask.h"

@interface LTSchemaSpeechTranslationEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) LTSchemaError *error; // ivar: _error
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasInRestrictedMode;
@property (nonatomic) BOOL hasIsAutomaticLID;
@property (nonatomic) BOOL hasMobileAssetConfigVersion; // ivar: _hasMobileAssetConfigVersion
@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasSessionID; // ivar: _hasSessionID
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (nonatomic) BOOL hasTimeToCancel;
@property (nonatomic) BOOL hasTimeToFirstPartialDisplayed;
@property (nonatomic) BOOL hasTimeToRecordingDialogDismissed;
@property (nonatomic) BOOL hasTimeToShowTranslationCard;
@property (nonatomic) BOOL hasUiMode;
@property (nonatomic) BOOL inRestrictedMode; // ivar: _inRestrictedMode
@property (nonatomic) BOOL isAutomaticLID; // ivar: _isAutomaticLID
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *mobileAssetConfigVersion; // ivar: _mobileAssetConfigVersion
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) LTSchemaTask *task; // ivar: _task
@property (nonatomic) unsigned int timeToCancel; // ivar: _timeToCancel
@property (nonatomic) unsigned int timeToFirstPartialDisplayed; // ivar: _timeToFirstPartialDisplayed
@property (nonatomic) unsigned int timeToRecordingDialogDismissed; // ivar: _timeToRecordingDialogDismissed
@property (nonatomic) unsigned int timeToShowTranslationCard; // ivar: _timeToShowTranslationCard
@property (nonatomic) int uiMode; // ivar: _uiMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif