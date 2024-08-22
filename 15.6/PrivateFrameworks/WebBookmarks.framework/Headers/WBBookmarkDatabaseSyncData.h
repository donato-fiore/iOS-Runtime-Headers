// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBBOOKMARKDATABASESYNCDATA_H
#define WBBOOKMARKDATABASESYNCDATA_H

@class NSData, CKServerChangeToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBookmarkDatabaseSyncData : NSObject <NSSecureCoding>

 {
    NSInteger _lastChangeID;
}


@property (nonatomic) BOOL didNotSaveRecordsAfterMigration; // ivar: _didNotSaveRecordsAfterMigration
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (copy, nonatomic) CKServerChangeToken *lastServerChangeToken; // ivar: _lastServerChangeToken
@property (readonly, nonatomic) NSInteger nextChangeID;


+(BOOL)supportsSecureCoding;
+(id)databaseSyncDataInDatabase:(*void)arg0 databaseAccessor:(id)arg1 ;
+(id)databaseSyncDataWithContentsOfData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeToDatabase:(*void)arg0 databaseAccessor:(id)arg1 ;


@end


#endif