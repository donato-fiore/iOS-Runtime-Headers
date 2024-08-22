// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSIWORDEMBEDDINGTABLE_H
#define PSIWORDEMBEDDINGTABLE_H



#import "PSITable.h"
#import "PSIStatement.h"

@interface PSIWordEmbeddingTable : PSITable {
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    *void _embeddingRef;
    *__CFLocale _locale;
    BOOL _localeIsGerman;
}




-(BOOL)isInsertedWithWord:(id)arg0 ;
-(id)dumpWordEmbeddingTable;
-(id)initWithDelegate:(id)arg0 searchable:(BOOL)arg1 writable:(BOOL)arg2 locale:(id)arg3 ;
-(id)matchesForToken:(id)arg0 ;
-(id)wordEmbeddingVersion;
-(id)wordEmbeddingsForToken:(id)arg0 ;
-(void)cacheSearchableStatements;
-(void)cacheWritableStatements;
-(void)clear;
-(void)finalizze;
-(void)insertWord:(id)arg0 synonyms:(id)arg1 ;
-(void)removeWord:(id)arg0 ;


@end


#endif