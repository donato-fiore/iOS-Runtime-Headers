// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIDOMAINCOUNTINGTABLE_H
#define SGMIDOMAINCOUNTINGTABLE_H

@class _PASSqliteDatabase, NSString, _PASLock;

#import <Foundation/Foundation.h>


@interface SGMIDomainCountingTable : NSObject {
    _PASSqliteDatabase *_db;
    NSString *_tableName;
    NSString *_tableNameEscaped;
    _PASLock *_lock;
}




+(id)_escapedSQLIdentifier:(id)arg0 ;
+(id)domainByAppendingToken:(id)arg0 toDomain:(id)arg1 ;
+(id)domainForStringTokens:(id)arg0 ;
+(id)stringTokensFromDomain:(id)arg0 ;
+(void)createTableNamed:(id)arg0 inDatabase:(id)arg1 ;
-(BOOL)_hasColumn:(id)arg0 ;
-(BOOL)_removeColumnFromTotal:(id)arg0 ;
-(BOOL)_zeroColumn:(id)arg0 ;
-(BOOL)hasColumn:(id)arg0 ;
-(NSInteger)countForColumn:(id)arg0 domain:(id)arg1 ;
-(NSInteger)totalForDomain:(id)arg0 ;
-(NSUInteger)_domainSegmentCount:(id)arg0 ;
-(NSUInteger)numberOfRowsAssociatedWithDomain:(id)arg0 ;
-(id)_currentColumns;
-(id)_parentDomainsForDomain:(id)arg0 ;
-(id)_readCurrentColumnsUncached;
-(id)currentColumns;
-(id)firstNonZeroColumnForDomain:(id)arg0 withColumns:(id)arg1 ;
-(id)firstNonZeroColumnForDomains:(id)arg0 withColumns:(id)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 tableName:(id)arg1 ;
-(id)nonZeroColumnsForDomain:(id)arg0 withColumns:(id)arg1 ;
-(id)nonZeroColumnsForDomains:(id)arg0 withColumns:(id)arg1 ;
-(id)totalsForDomains:(id)arg0 ;
-(void)_addColumn:(id)arg0 ;
-(void)_commitDomainsAndCounts:(id)arg0 toColumn:(id)arg1 ;
-(void)_deleteZeroRows;
-(void)_dropColumn:(id)arg0 ;
-(void)_mergeColumn:(id)arg0 intoColumn:(id)arg1 ;
-(void)_recycleColumn:(id)arg0 asColumn:(id)arg1 ;
-(void)_updateSchemaVersion;
-(void)addColumn:(id)arg0 ;
-(void)commitDomainsAndCounts:(id)arg0 toColumn:(id)arg1 ;
-(void)commitDomainsCountedSet:(id)arg0 toColumn:(id)arg1 ;
-(void)deleteAllRows;
-(void)deleteDomain:(id)arg0 ;
-(void)deleteDomainSelection:(id)arg0 ;
-(void)deleteDomainSelection:(id)arg0 keepingDomainsPassingTest:(id)arg1 ;
-(void)dropColumn:(id)arg0 ;
-(void)enumerateChildrenOfDomain:(id)arg0 depth:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateChildrenOfDomain:(id)arg0 greaterThan:(id)arg1 depth:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)mergeColumn:(id)arg0 intoColumn:(id)arg1 ;
-(void)recycleColumn:(id)arg0 asColumn:(id)arg1 ;
-(void)zeroColumn:(id)arg0 ;


@end


#endif