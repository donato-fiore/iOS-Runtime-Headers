// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARUSERPROFILEBUILDER_H
#define _EARUSERPROFILEBUILDER_H


#import <Foundation/Foundation.h>

#import "_EARPeopleSuggesterConfig.h"

@interface _EARUserProfileBuilder : NSObject {
    map<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> _userData;
    shared_ptr<quasar::LmeDataFactory> _dataFactory;
    unique_ptr<sdapi::SdapiTokenizer, std::default_delete<sdapi::SdapiTokenizer>> _tokenizer;
    unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> _g2p;
    shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> _pronCache;
    BasicTextSanitizer _sanitizer;
    unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> _personalizationRecipe;
    unique_ptr<quasar::LmeData, std::default_delete<quasar::LmeData>> _quasarLmeData;
    unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> _outPronCache;
    int _outPronCacheHits;
    int _outPronCacheMisses;
    int _wordsRejected;
    int _wordsAccepted;
    unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> _quasarTemplate2Count;
}


@property (readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;


+(BOOL)isEasyToRecognizeWord:(id)arg0 forLocale:(id)arg1 ;
+(void)initialize;
-(id)createInlineLmeUserDataForContextData:(id)arg0 speechProfile:(id)arg1 ;
-(id)dataProfile;
-(id)initWithConfiguration:(id)arg0 language:(id)arg1 overrides:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9 ;
-(id)initWithConfiguration:(id)arg0 language:(id)arg1 sdapiOverrides:(id)arg2 generalVoc:(id)arg3 emptyVoc:(id)arg4 pgVoc:(id)arg5 lexiconEnh:(id)arg6 tokenEnh:(id)arg7 paramsetHolder:(id)arg8 ;
-(id)initWithConfiguration:(id)arg0 withLanguage:(id)arg1 withSdapiOverrides:(id)arg2 withSdapiConfig:(id)arg3 ;
-(id)pronunciationsForOrthography:(id)arg0 ;
-(id)sanitizedStringWithString:(id)arg0 ;
-(void)addPersonalizationData:(id)arg0 ;
-(void)addPersonalizationJsonData:(id)arg0 ;
-(void)addWordWithParts:(id)arg0 templateName:(id)arg1 ;
-(void)createInlineLmeUserDataForContextStrings:(id)arg0 ;
-(void)readUserProfile:(id)arg0 ;
-(void)removeAllWords;
-(void)signalEndOfUserData;
-(void)writeOutUserDataToJson:(id)arg0 withConfig:(id)arg1 ;


@end


#endif