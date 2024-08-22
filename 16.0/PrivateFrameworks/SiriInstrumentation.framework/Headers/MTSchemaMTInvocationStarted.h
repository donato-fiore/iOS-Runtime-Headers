// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSCHEMAMTINVOCATIONSTARTED_H
#define MTSCHEMAMTINVOCATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int displayMode; // ivar: _displayMode
@property (nonatomic) BOOL hasDisplayMode;
@property (nonatomic) BOOL hasInputSource;
@property (nonatomic) BOOL hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL hasIsLanguageIdentificationEnabled;
@property (nonatomic) BOOL hasIsOnDeviceTranslation;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) BOOL hasQssSessionId; // ivar: _hasQssSessionId
@property (nonatomic) BOOL hasTask;
@property (nonatomic) int inputSource; // ivar: _inputSource
@property (nonatomic) BOOL isExplicitLanguageFilterEnabled; // ivar: _isExplicitLanguageFilterEnabled
@property (nonatomic) BOOL isLanguageIdentificationEnabled; // ivar: _isLanguageIdentificationEnabled
@property (nonatomic) BOOL isOnDeviceTranslation; // ivar: _isOnDeviceTranslation
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (nonatomic) unsigned int mobileAssetConfigVersion; // ivar: _mobileAssetConfigVersion
@property (retain, nonatomic) SISchemaUUID *qssSessionId; // ivar: _qssSessionId
@property (nonatomic) int task; // ivar: _task


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDisplayMode;
-(void)deleteInputSource;
-(void)deleteIsExplicitLanguageFilterEnabled;
-(void)deleteIsLanguageIdentificationEnabled;
-(void)deleteIsOnDeviceTranslation;
-(void)deleteLinkId;
-(void)deleteMobileAssetConfigVersion;
-(void)deleteQssSessionId;
-(void)deleteTask;
-(void)writeTo:(id)arg0 ;


@end


#endif