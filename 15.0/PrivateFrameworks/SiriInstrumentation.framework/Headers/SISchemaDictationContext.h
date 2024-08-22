// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMADICTATIONCONTEXT_H
#define SISCHEMADICTATIONCONTEXT_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaLocaleIdentifier.h"

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale; // ivar: _dictationLocale
@property (copy, nonatomic) NSArray *dictationLocalesEnableds; // ivar: _dictationLocalesEnableds
@property (nonatomic) BOOL hasBundleId; // ivar: _hasBundleId
@property (nonatomic) BOOL hasDictationLocale; // ivar: _hasDictationLocale
@property (nonatomic) BOOL hasKeyboardLanguage; // ivar: _hasKeyboardLanguage
@property (nonatomic) BOOL hasKeyboardLocale; // ivar: _hasKeyboardLocale
@property (nonatomic) BOOL hasSiriSelectedLocale; // ivar: _hasSiriSelectedLocale
@property (nonatomic) BOOL hasUserSelectedLocale; // ivar: _hasUserSelectedLocale
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale; // ivar: _keyboardLocale
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds; // ivar: _keyboardLocalesEnableds
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale; // ivar: _siriSelectedLocale
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale; // ivar: _userSelectedLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictationLocalesEnabledAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)keyboardLocalesEnabledAtIndex:(NSUInteger)arg0 ;
-(void)addDictationLocalesEnabled:(id)arg0 ;
-(void)addKeyboardLocalesEnabled:(id)arg0 ;
-(void)clearDictationLocalesEnabled;
-(void)clearKeyboardLocalesEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif