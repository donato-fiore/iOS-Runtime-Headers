// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICNAMEDENTITYSTORE_H
#define _ICNAMEDENTITYSTORE_H

@class NSMutableOrderedSet, NSString;

#import <Foundation/Foundation.h>

#import "_ICLexiconView.h"
#import "_ICTransientLexicon.h"

@interface _ICNamedEntityStore : NSObject {
    NSMutableOrderedSet *_leastRecentlyAddedEntities;
    NSUInteger _maximumRecentlyAddedEntities;
}


@property (readonly, nonatomic) NSUInteger durableEntitiesAdded; // ivar: _durableEntitiesAdded
@property (nonatomic) NSUInteger minimumWordLength; // ivar: _minimumWordLength
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) _ICLexiconView *phraseLexicon; // ivar: _phraseLexiconView
@property (retain, nonatomic) _ICTransientLexicon *phraseLexiconImpl; // ivar: _phraseLexiconImpl
@property (readonly, nonatomic) NSUInteger recentEntitiesAdded; // ivar: _recentEntitiesAdded
@property (nonatomic) BOOL treatHyphenatedWordAsPhrase; // ivar: _treatHyphenatedWordAsPhrase
@property (readonly, nonatomic) _ICLexiconView *wordLexicon; // ivar: _wordLexiconView
@property (retain, nonatomic) _ICTransientLexicon *wordLexiconImpl; // ivar: _wordLexiconImpl


+(id)tokenize:(id)arg0 ;
-(BOOL)areStringCharactersWhitelisted:(id)arg0 ;
-(BOOL)entityIsHyphenatedWord:(id)arg0 ;
-(BOOL)isCloserToTitleCase:(id)arg0 than:(id)arg1 ;
-(BOOL)isValidNamedEntity:(id)arg0 explanation:(*id)arg1 ;
-(id)_adjustWordsForHyphenationIfNeeded:(id)arg0 didAdjust:(*BOOL)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 maximumRecentlyAddedEntities:(NSUInteger)arg1 ;
-(struct USet *)exemplarSetForSupportedLocales;
-(void)addEntity:(id)arg0 isDurable:(BOOL)arg1 ;
-(void)reloadRecents;
-(void)removeAllEntities;


@end


#endif