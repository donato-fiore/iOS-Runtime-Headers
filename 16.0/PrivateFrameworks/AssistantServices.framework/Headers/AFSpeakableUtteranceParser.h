// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEAKABLEUTTERANCEPARSER_H
#define AFSPEAKABLEUTTERANCEPARSER_H

@class NSMutableDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface AFSpeakableUtteranceParser : NSObject {
    NSMutableDictionary *_providers;
    id *_functionHandler;
    NSLocale *_locale;
}


@property (nonatomic) BOOL handleTTSCodes;
@property (nonatomic) BOOL handlesFunctions;


+(BOOL)_shouldAutomaticallyProvideFunctions;
+(id)parseUserGeneratedMessage:(id)arg0 ;
-(id)_handleControlCodeAtIndex:(unsigned int)arg0 withBuffer:(struct ? )arg1 totalLength:(NSUInteger)arg2 consumedLength:(*unsigned int)arg3 hadEmpties:(*BOOL)arg4 containsPrivacySensitiveContents:(*BOOL)arg5 externalProviders:(*BOOL)arg6 ;
-(id)_handleOptionalAtIndex:(unsigned int)arg0 withBuffer:(struct ? )arg1 totalLength:(NSUInteger)arg2 consumedLength:(*unsigned int)arg3 containsPrivacySensitiveContents:(*BOOL)arg4 externalProviders:(*BOOL)arg5 ;
-(id)_handleProviderAtIndex:(unsigned int)arg0 withBuffer:(struct ? )arg1 totalLength:(NSUInteger)arg2 consumedLength:(*unsigned int)arg3 containsPrivacySensitiveContents:(*BOOL)arg4 hadEmpties:(*BOOL)arg5 externalProviders:(*BOOL)arg6 ;
-(id)_parseStringWithFormat:(id)arg0 error:(*id)arg1 hadEmpties:(*BOOL)arg2 containsPrivacySensitiveContents:(*BOOL)arg3 externalProviders:(*BOOL)arg4 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)parseStringRemovingControlCharacters:(id)arg0 error:(*id)arg1 ;
-(id)parseStringRemovingControlCharacters:(id)arg0 error:(*id)arg1 containsPrivacySensitiveContents:(*BOOL)arg2 ;
-(id)parseStringWithFormat:(id)arg0 error:(*id)arg1 ;
-(id)parseStringWithFormat:(id)arg0 error:(*id)arg1 containsPrivacySensitiveContents:(*BOOL)arg2 ;
-(id)parseStringWithFormat:(id)arg0 error:(*id)arg1 containsPrivacySensitiveContents:(*BOOL)arg2 hasExternalDomains:(*BOOL)arg3 ;
-(id)parseStringWithFormat:(id)arg0 error:(*id)arg1 hasExternalDomains:(*BOOL)arg2 ;
-(id)parseStringWithFormat:(id)arg0 includeControlCharacters:(BOOL)arg1 error:(*id)arg2 hadEmpties:(*BOOL)arg3 containsPrivacySensitiveContents:(*BOOL)arg4 externalProviders:(*BOOL)arg5 ;
-(void)registerProvider:(id)arg0 forNamespace:(id)arg1 ;


@end


#endif