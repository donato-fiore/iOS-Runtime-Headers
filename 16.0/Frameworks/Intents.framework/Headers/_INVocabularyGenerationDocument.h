// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INVOCABULARYGENERATIONDOCUMENT_H
#define _INVOCABULARYGENERATIONDOCUMENT_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _INVocabularyGenerationDocument : NSObject <NSCopying>

 {
    NSMutableDictionary *_itemsBySiriIDCache;
    NSMutableDictionary *_itemsByStringCache;
}


@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (nonatomic) BOOL haveAssignedAllSiriIDs; // ivar: _haveAssignedAllSiriIDs
@property (copy, nonatomic) NSString *intentSlot; // ivar: _intentSlot
@property (nonatomic) BOOL resetOnNextSync; // ivar: _resetOnNextSync
@property (copy, nonatomic) NSString *thisGeneration; // ivar: _thisGeneration
@property (copy, nonatomic) NSString *validity; // ivar: _validity
@property (copy, nonatomic) NSArray *vocabularyItems; // ivar: _vocabularyItems


-(id)_dictionaryRepresentation;
-(id)_everyVocabularyItemSiriID;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_itemsBySiriID;
-(id)_stringForSelector:(SEL)arg0 from:(id)arg1 ;
-(id)_valueForSelector:(SEL)arg0 ofClass:(Class)arg1 from:(id)arg2 ;
-(id)_vocabularyItemForSiriID:(id)arg0 ;
-(id)_vocabularyItemWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffFromPreviousDocument:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)writeToFile:(id)arg0 createIntermediateDirectories:(BOOL)arg1 ;
-(void)_addValueForSelector:(SEL)arg0 toDictionary:(id)arg1 ;
-(void)_clearVocabularyItemCaches;
-(void)_takeValuesFromDictionary:(id)arg0 ;
-(void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg0 ;


@end


#endif