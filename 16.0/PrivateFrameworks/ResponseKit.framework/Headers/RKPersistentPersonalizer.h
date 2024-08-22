// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKPERSISTENTPERSONALIZER_H
#define RKPERSISTENTPERSONALIZER_H

@class NSURL, NSString, NSLocale, NSDate, NSMutableDictionary;
@protocol RKDisplayStringsProvider;

#import <Foundation/Foundation.h>


@interface RKPersistentPersonalizer : NSObject {
    *void _model;
}


@property (readonly) NSObject<RKDisplayStringsProvider> *displayStringsProvider; // ivar: _displayStringsProvider
@property (retain) NSURL *dynamicDataURL; // ivar: _dynamicDataURL
@property (retain) NSString *languageID; // ivar: _languageID
@property (retain) NSLocale *languageLocale; // ivar: _languageLocale
@property (retain) NSDate *lastDynamicDataCreationCheckDate; // ivar: _lastDynamicDataCreationCheckDate
@property (retain) NSDate *lastObservedDynamicDataCreationDate; // ivar: _lastObservedDynamicDataCreationDate
@property (readonly) *void model;
@property (retain) NSMutableDictionary *synonyms; // ivar: _synonyms


+(id)nonEmptyStringsPredicate;
+(void)removeAllDynamicModelsInDirectory:(id)arg0 ;
-(*void)createLanguageModel;
-(id)dynamicDataCreationDate;
-(id)headwordsForSynonym:(id)arg0 ;
-(id)headwordsForSynonymPrefix:(id)arg0 ;
-(id)init;
-(id)initWithLanguageIdentifier:(id)arg0 andDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2 ;
-(id)topSynonymsForSpeechAct:(id)arg0 headword:(id)arg1 recipientContext:(id)arg2 maxCount:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)flushDynamicData;
-(void)initializeDynamicLanguageModel;
-(void)trainSynonymForSpeechAct:(id)arg0 headword:(id)arg1 userResponse:(id)arg2 recipientContext:(id)arg3 weight:(NSUInteger)arg4 effectiveDate:(id)arg5 ;


@end


#endif