// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBBOOKMARKDATABASESYNCDATA_H
#define WBBOOKMARKDATABASESYNCDATA_H

@class NSMutableDictionary, NSSet, NSData, CKServerChangeToken, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBookmarkDatabaseSyncData : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_recordZoneIDsToLastServerChangeTokens;
    NSInteger _lastChangeID;
    NSMutableDictionary *_recordZoneIDsToHashGenerators;
}


@property (copy, nonatomic) NSSet *auxiliaryRecordIDsToDelete; // ivar: _auxiliaryRecordIDsToDelete
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration; // ivar: _didNotSaveRecordsAfterMigration
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (copy, nonatomic) CKServerChangeToken *lastPrivateDatabaseServerChangeToken; // ivar: _lastPrivateDatabaseServerChangeToken
@property (copy, nonatomic) CKServerChangeToken *lastSharedDatabaseServerChangeToken; // ivar: _lastSharedDatabaseServerChangeToken
@property (nonatomic) NSUInteger minimumSyncAPIVersion; // ivar: _minimumSyncAPIVersion
@property (readonly, nonatomic) NSInteger nextChangeID;
@property (copy, nonatomic) NSSet *recordIDsToRefresh; // ivar: _recordIDsToRefresh
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToHashGenerators;


+(BOOL)supportsSecureCoding;
+(id)databaseSyncDataInDatabase:(*void)arg0 databaseAccessor:(id)arg1 ;
+(id)databaseSyncDataWithContentsOfData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hashGeneratorForRecordZoneID:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lastServerChangeTokenForRecordZoneID:(id)arg0 ;
-(void)clearAllLastServerChangeTokens;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHashGenerator:(id)arg0 forRecordZoneID:(id)arg1 ;
-(void)setLastServerChangeToken:(id)arg0 forRecordZoneID:(id)arg1 ;
-(void)writeToDatabase:(*void)arg0 databaseAccessor:(id)arg1 ;


@end


#endif