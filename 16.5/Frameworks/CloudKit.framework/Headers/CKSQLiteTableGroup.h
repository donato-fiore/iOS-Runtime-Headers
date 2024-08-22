// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITETABLEGROUP_H
#define CKSQLITETABLEGROUP_H

@class NSDictionary, NSDate, NSString, NSNumber;
@protocol CKSQLiteDatabaseKeyValueProperties;

#import <Foundation/Foundation.h>

#import "CKSQLiteDatabase.h"

@interface CKSQLiteTableGroup : NSObject <CKSQLiteDatabaseKeyValueProperties>

 {
    NSDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}


@property (retain, nonatomic) NSDate *activityDate; // ivar: _activityDate
@property (copy, nonatomic) NSString *creatingClass; // ivar: _creatingClass
@property (readonly, nonatomic) CKSQLiteDatabase *db; // ivar: _db
@property (readonly, nonatomic) BOOL didCreateDatabaseTables; // ivar: _didCreateDatabaseTables
@property (copy, nonatomic) NSDictionary *groupData; // ivar: _groupData
@property (retain, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (retain, nonatomic) NSDate *lastUsed; // ivar: _lastUsed
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)rebootShouldClearData;
+(BOOL)supportsGroupCreation;
+(CGFloat)expirationTime;
+(id)_tableGroupInDatabase:(id)arg0 withName:(id)arg1 error:(*id)arg2 create:(BOOL)arg3 ;
+(id)existingTableGroupInDatabase:(id)arg0 withName:(id)arg1 error:(*id)arg2 ;
+(id)groupNameWithDomain:(int)arg0 domainIdentifier:(id)arg1 groupName:(id)arg2 ;
+(id)tableGroupInDatabase:(id)arg0 withName:(id)arg1 error:(*id)arg2 ;
+(void)enumerateGroupsInDatabase:(id)arg0 block:(id)arg1 ;
+(void)expireGroup:(id)arg0 reason:(id)arg1 ;
+(void)groupWillExpire:(id)arg0 ;
+(void)purgeGroup:(id)arg0 ;
+(void)purgeGroupWithName:(id)arg0 inDatabase:(id)arg1 ;
-(BOOL)isExpired;
-(BOOL)isInvalid;
-(NSInteger)validateTables:(id)arg0 ;
-(id)UUIDValueForKey:(id)arg0 ;
-(id)_lockTables:(id)arg0 andPerformBlock:(id)arg1 ;
-(id)_purge;
-(id)addTable:(id)arg0 ;
-(id)allTables;
-(id)createDBTables;
-(id)createTables;
-(id)dataValueForKey:(id)arg0 ;
-(id)dateValueForKey:(id)arg0 ;
-(id)dbTableNameForLogicalTableName:(id)arg0 ;
-(id)description;
-(id)finishInitializing:(BOOL)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)migrateDataFromGroup:(id)arg0 ;
-(id)numberValueForKey:(id)arg0 ;
-(id)objectValueForKey:(id)arg0 ;
-(id)performDataMigration;
-(id)performGroupTransaction:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 ;
-(id)tableWithName:(id)arg0 ;
-(id)updateGroupData:(id)arg0 ;
-(void)_deleteTables;
-(void)dealloc;
-(void)groupWillPurge;
-(void)invalidateCachedStatements;
-(void)setDataValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDateValue:(id)arg0 forKey:(id)arg1 ;
-(void)setNumberValue:(id)arg0 forKey:(id)arg1 ;
-(void)setObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 ;
-(void)setUUIDValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateLastUsedDate;


@end


#endif