// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXLANGUAGETAGGEDCONTENT_H
#define AXLANGUAGETAGGEDCONTENT_H

@class NSString, NSMutableString, NSArray, NSMutableOrderedSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXLanguageTaggedContent : NSObject {
    _NSRange _currentChunk;
    BOOL _predictedByTagger;
    *void _nlTagger;
    *void _namedEntityTagger;
}


@property (readonly, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableString *contentString; // ivar: _contentString
@property (retain, nonatomic) NSArray *currentDialects; // ivar: _currentDialects
@property (nonatomic) NSUInteger nextShorthandDateIndex; // ivar: _nextShorthandDateIndex
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps; // ivar: _predictedSecondaryLangMaps
@property (retain, nonatomic) NSArray *shorthandDateMatches; // ivar: _shorthandDateMatches
@property (nonatomic, getter=isTagged) BOOL tagged; // ivar: _tagged
@property (retain, nonatomic) NSMutableArray *tags; // ivar: _tags
@property (retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // ivar: _unpredictedAmbiguousLangMaps
@property (copy, nonatomic) NSString *userPreferredLangID; // ivar: _userPreferredLangID


-(BOOL)_addLanguageTagForCurrentChunk;
-(BOOL)_addLanguageTagForDateIfNecessary;
-(BOOL)_isNamedEntity:(id)arg0 ;
-(BOOL)_isStringCombinationOfCommonAndEmoji:(id)arg0 ;
-(BOOL)hasOnlyNonWesternLangMaps;
-(BOOL)hasOnlyWesternLangMaps;
-(BOOL)langMapIsSignificant:(id)arg0 ;
-(id)_allLangIDs;
-(id)_overrideLanguageDetection:(id)arg0 ;
-(id)ambiguousLangMaps;
-(id)description;
-(id)initWithContent:(id)arg0 ;
-(id)langCodeForlangId:(int)arg0 ;
-(id)primaryAmbiguousDialect;
-(id)primaryUnambiguousDialect;
-(id)significantAmbiguousLangMaps;
-(id)significantAmbiguousLangMapsForUserKeyboards;
-(id)unambiguousLangMaps;
-(int)langIDforLangCode:(id)arg0 ;
-(struct ? *)_languageHintsEvenlyDistributedWithProbability:(float)arg0 excludingHints:(id)arg1 ;
-(void)_addTag;
-(void)_manuallyProcessContentWithRange:(struct _NSRange )arg0 ;
-(void)_searchForShorthandDates;
-(void)appendLanguageTaggedContent:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePredictedTags:(id)arg0 ;
-(void)enumerateUnpredictedTags:(id)arg0 ;
-(void)tagContent;
-(void)updateTagsForLocalePrefChange;


@end


#endif