// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LTSCHEMATASK_H
#define LTSCHEMATASK_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaTask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *deviceOS; // ivar: _deviceOS
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) BOOL hasBundleIdentifier; // ivar: _hasBundleIdentifier
@property (nonatomic) BOOL hasDeviceOS; // ivar: _hasDeviceOS
@property (nonatomic) BOOL hasDeviceType; // ivar: _hasDeviceType
@property (nonatomic) BOOL hasOsVersion; // ivar: _hasOsVersion
@property (nonatomic) BOOL hasSourceLanguage; // ivar: _hasSourceLanguage
@property (nonatomic) BOOL hasTargetLanguage; // ivar: _hasTargetLanguage
@property (nonatomic) BOOL hasTranslationTask; // ivar: _hasTranslationTask
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (copy, nonatomic) NSString *sourceLanguage; // ivar: _sourceLanguage
@property (copy, nonatomic) NSString *targetLanguage; // ivar: _targetLanguage
@property (copy, nonatomic) NSString *translationTask; // ivar: _translationTask


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif