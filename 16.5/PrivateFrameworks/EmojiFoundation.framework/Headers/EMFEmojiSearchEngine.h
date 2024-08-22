// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFEMOJISEARCHENGINE_H
#define EMFEMOJISEARCHENGINE_H

@class NSLocale;
@protocol EMFAutocompleteCandidateProvider;

#import <Foundation/Foundation.h>

#import "EMFQueryLogger.h"
#import "EMFIndexManager.h"
#import "EMFQueryResultOverrideList.h"
#import "EMFStringStemmer.h"

@interface EMFEmojiSearchEngine : NSObject {
    *__EmojiLocaleDataWrapper _localeData;
    EMFQueryLogger *_queryLogger;
}


@property (readonly, nonatomic) NSObject<EMFAutocompleteCandidateProvider> *autocompleteProvider; // ivar: _autocompleteProvider
@property (nonatomic) BOOL enableAutocomplete; // ivar: _enableAutocomplete
@property (readonly, nonatomic) EMFIndexManager *indexManager; // ivar: _indexManager
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) EMFQueryResultOverrideList *overrideList; // ivar: _overrideList
@property (readonly, nonatomic) EMFStringStemmer *stringStemmer; // ivar: _stringStemmer


+(BOOL)isLocaleSupported:(id)arg0 ;
-(id)_performAutocompletedQueryForQuery:(id)arg0 usingIndex:(id)arg1 ;
-(id)_performStringQuery:(id)arg0 usingIndex:(id)arg1 shouldAutocomplete:(BOOL)arg2 shouldStem:(BOOL)arg3 ;
-(id)_performStringQueryOverride:(id)arg0 usingIndex:(id)arg1 ;
-(id)_performStringQueryUntokenized:(id)arg0 usingIndex:(id)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 andAssetBundle:(id)arg1 ;
-(id)initWithLocale:(id)arg0 andIndexManager:(id)arg1 andStringStemmer:(id)arg2 andAutocompleteProvider:(id)arg3 ;
-(id)performQuery:(id)arg0 usingIndex:(id)arg1 ;
-(id)performStringQuery:(id)arg0 ;
-(void)dealloc;
-(void)preheat;


@end


#endif