// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEKEYVALUESTORE_H
#define CKSQLITEKEYVALUESTORE_H



#import "CKSQLiteDatabaseTable.h"

@interface CKSQLiteKeyValueStore : CKSQLiteDatabaseTable



+(Class)entryClass;
+(id)dbProperties;
-(id)UUIDValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(id)dataValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(id)dateValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(id)finishInitializing:(BOOL)arg0 ;
-(id)numberValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(id)objectValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(id)stringValueForKey:(id)arg0 scope:(NSUInteger)arg1 scopeIdentifier:(id)arg2 ;
-(void)purgeOrphanedKeys;
-(void)purgeOrphanedTableGroupKeys;
-(void)purgeOrphanedTableKeys;
-(void)setDataValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;
-(void)setDateValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;
-(void)setNumberValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;
-(void)setObjectValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;
-(void)setUUIDValue:(id)arg0 forKey:(id)arg1 scope:(NSUInteger)arg2 scopeIdentifier:(id)arg3 ;


@end


#endif