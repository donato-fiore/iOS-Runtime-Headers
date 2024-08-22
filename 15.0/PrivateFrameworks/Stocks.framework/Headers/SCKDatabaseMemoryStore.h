// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCKDATABASEMEMORYSTORE_H
#define SCKDATABASEMEMORYSTORE_H

@class NSDate, CKServerChangeToken, NSMutableDictionary;
@protocol SCKDatabaseStore;

#import <Foundation/Foundation.h>


@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore>



@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled; // ivar: _cloudBackupEnabled
@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) NSMutableDictionary *zoneStoresByName; // ivar: _zoneStoresByName


-(id)init;
-(id)zoneStoreForSchema:(id)arg0 ;


@end


#endif