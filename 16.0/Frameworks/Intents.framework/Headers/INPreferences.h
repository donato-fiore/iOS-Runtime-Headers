// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPREFERENCES_H
#define INPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_INVocabularyConnection.h"

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}


@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode; // ivar: _cachedSiriLanguageCode


+(NSInteger)siriAuthorizationStatus;
+(id)sharedPreferences;
+(id)siriLanguageCode;
+(void)_verifyProcessCanDonateIntentWithName:(id)arg0 completion:(id)arg1 ;
+(void)requestSiriAuthorization:(id)arg0 ;
-(BOOL)_weAreRunningAsAnExtension;
-(NSInteger)_siriAuthorizationStatus;
-(id)_init;
-(id)_siriLanguageCode;
-(id)init;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(void)_updateWithExtensionContext:(id)arg0 ;
-(void)_verifyProcessCanDonateIntentWithName:(id)arg0 completion:(id)arg1 ;
-(void)assertThisProcessHasSiriEntitlement;
-(void)requestSiriAuthorization:(id)arg0 ;


@end


#endif