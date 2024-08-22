// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICTRANSIENTLEXICON_H
#define _ICTRANSIENTLEXICON_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _ICTransientLexicon : NSObject {
    *_LXLexicon _lexicon;
    NSMutableDictionary *_tokenIdentifierToEntitiesMap;
    NSMutableDictionary *_entityToTokenIdentifiersMap;
    NSMutableDictionary *_entityToAdditionalDataMap;
    unsigned int _identifier;
}


@property (readonly, nonatomic) NSUInteger entryCount;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned char typeFlags; // ivar: _typeFlags


+(id)transientLexiconForIdentifier:(unsigned int)arg0 ;
-(BOOL)contains:(id)arg0 ;
-(BOOL)containsEntity:(id)arg0 ;
-(BOOL)entityIsHyphenatedWord:(id)arg0 ;
-(id)getEntries;
-(id)getEntryRefCount:(id)arg0 ;
-(id)getUsageCount:(id)arg0 ;
-(id)initWithName:(id)arg0 typeFlags:(unsigned char)arg1 ;
-(id)namedEntitiesForEntry:(id)arg0 ;
-(id)sortKeyEquivalents:(id)arg0 ;
-(struct _LXLexicon *)getLexiconImplementation;
-(void)addEntity:(id)arg0 asAliasOfEntity:(id)arg1 ;
-(void)addEntity:(id)arg0 forEntry:(id)arg1 ;
-(void)createAdditionalDataForEntityIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)removeAllEntities;
-(void)removeEntity:(id)arg0 ;
-(void)setIsHyphenatedWord:(BOOL)arg0 forEntity:(id)arg1 ;


@end


#endif