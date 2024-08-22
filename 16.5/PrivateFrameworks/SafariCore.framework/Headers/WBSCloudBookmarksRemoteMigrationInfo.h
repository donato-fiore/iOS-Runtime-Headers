// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDBOOKMARKSREMOTEMIGRATIONINFO_H
#define WBSCLOUDBOOKMARKSREMOTEMIGRATIONINFO_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject

@property (readonly, nonatomic) NSInteger migrationState; // ivar: _migrationState
@property (readonly, copy, nonatomic) NSString *migratorDeviceIdentifier; // ivar: _migratorDeviceIdentifier
@property (readonly, nonatomic) NSDate *serverModificationDate; // ivar: _serverModificationDate


-(id)init;
-(id)initWithMigrationState:(NSInteger)arg0 migratorDeviceIdentifier:(id)arg1 serverModificationDate:(id)arg2 ;


@end


#endif