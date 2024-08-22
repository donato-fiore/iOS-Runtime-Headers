// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22SIRITRANSLATIONINTENTS28TRANSLATEPHRASEINTENTHANDLER_H
#define _TTC22SIRITRANSLATIONINTENTS28TRANSLATEPHRASEINTENTHANDLER_H

@protocol TranslatePhraseIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC22SiriTranslationIntents28TranslatePhraseIntentHandler : NSObject <TranslatePhraseIntentHandling>

 {
    ? translationApiClient;
    ? log;
    ? deviceState;
}




-(id)init;
-(void)confirmTranslatePhrase:(id)arg0 completion:(id)arg1 ;
-(void)handleTranslatePhrase:(id)arg0 completion:(id)arg1 ;
-(void)resolvePhraseForTranslatePhrase:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTargetLanguageForTranslatePhrase:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif