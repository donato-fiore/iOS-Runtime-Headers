// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARUSERPROFILEBUILDER_H
#define _EARUSERPROFILEBUILDER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "_EARPeopleSuggesterConfig.h"

@interface _EARUserProfileBuilder : NSObject {
    map<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> _userData;
    shared_ptr<quasar::LmeDataFactory> _dataFactory;
    unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> _tokenizer;
    unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> _g2p;
    shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> _pronCache;
    BasicTextSanitizer _sanitizer;
    unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> _personalizationRecipe;
    shared_ptr<quasar::LmeData> _quasarLmeData;
    BOOL _reuseProfile;
    unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> _outPronCache;
    int _outPronCacheHits;
    int _outPronCacheMisses;
    int _wordsRejected;
    int _wordsAccepted;
    unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> _quasarTemplate2Count;
    NSString *_unmaskedUserId;
    map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>> _templateToVersion;
}


@property (readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;
@property (copy, nonatomic) NSDictionary *templateToVersion;
@property (copy, nonatomic) NSString *userId;


+(BOOL)isEasyToRecognizeWord:(id)arg0 forLocale:(id)arg1 ;
+(void)initialize;
-(BOOL)_writeProfileToStream:(*void)arg0 ;
-(BOOL)writeProfileToFile:(id)arg0 protectionClass:(NSInteger)arg1 coordinated:(BOOL)arg2 length:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeProfileToFile:(id)arg0 protectionClass:(NSInteger)arg1 length:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)createInlineLmeUserDataForContextData:(id)arg0 speechProfile:(id)arg1 ;
-(id)dataProfile;
-(id)initWithConfiguration:(id)arg0 language:(id)arg1 overrides:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9 ;
-(id)initWithConfiguration:(id)arg0 language:(id)arg1 overrides:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9 isJit:(BOOL)arg10 ;
-(id)initWithConfiguration:(id)arg0 language:(id)arg1 sdapiOverrides:(id)arg2 generalVoc:(id)arg3 emptyVoc:(id)arg4 pgVoc:(id)arg5 lexiconEnh:(id)arg6 tokenEnh:(id)arg7 paramsetHolder:(id)arg8 ;
-(id)initWithConfiguration:(id)arg0 withLanguage:(id)arg1 withSdapiOverrides:(id)arg2 withSdapiConfig:(id)arg3 ;
-(id)pronunciationsForOrthography:(id)arg0 ;
-(id)sanitizedStringWithString:(id)arg0 ;
-(void)addPersonalizationData:(id)arg0 ;
-(void)addPersonalizationJsonData:(id)arg0 ;
-(void)addWordWithParts:(id)arg0 templateName:(id)arg1 ;
-(void)createInlineLmeUserDataForContextStrings:(id)arg0 ;
-(void)readUserProfile:(id)arg0 ;
-(void)readUserProfile:(id)arg0 reuseProfile:(BOOL)arg1 ;
-(void)readUserProfileWithPath:(id)arg0 ;
-(void)readUserProfileWithPath:(id)arg0 reuseProfile:(BOOL)arg1 ;
-(void)removeAllWords;
-(void)removeLmeDataForTemplateName:(id)arg0 ;
-(void)signalEndOfUserData;
-(void)writeOutUserDataToJson:(id)arg0 withConfig:(id)arg1 ;


@end


#endif