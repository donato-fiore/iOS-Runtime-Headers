// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLANGUAGETRANSLATOR_H
#define AXMLANGUAGETRANSLATOR_H

@class NSArray, _LTTranslator;

#import <Foundation/Foundation.h>


@interface AXMLanguageTranslator : NSObject {
    os_unfair_lock_s _lock;
    NSArray *_cachedAvailableTranslationLocales;
}


@property (retain, nonatomic) _LTTranslator *translator; // ivar: _translator


+(id)allowedTargetLocalesForTranslation;
-(id)_canonicalLocaleForLocale:(id)arg0 ;
-(id)_canonicalLocalesForLocales:(id)arg0 ;
-(id)_descriptionForLocales:(id)arg0 ;
-(id)_filteredLocalesToInstallFromAvailableLocales:(id)arg0 requestedLocales:(id)arg1 fallBackToBaseLanguageIfNeeded:(BOOL)arg2 ;
-(id)_localeIdentifiersForLocales:(id)arg0 ;
-(id)_proposedTranslationLocaleForLocale:(id)arg0 ;
-(id)init;
-(id)translateText:(id)arg0 toLocale:(id)arg1 respectAllowList:(BOOL)arg2 metrics:(id)arg3 error:(*id)arg4 ;
-(void)availableTranslationLocales:(id)arg0 ;
// -(void)installOfflineTranslationModelForLanguageCodeIfNeeded:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
// -(void)installOfflineTranslationModelForLocales:(id)arg0 fallBackToBaseLanguageIfNeeded:(BOOL)arg1 forceReinstall:(BOOL)arg2 progress:(id)arg3 completion:(unk)arg4  ;
-(void)installedTranslationLocales:(id)arg0 ;
-(void)translateText:(id)arg0 toLocale:(id)arg1 respectAllowList:(BOOL)arg2 completion:(id)arg3 ;
-(void)userSelectableTranslationLocales:(id)arg0 ;


@end


#endif