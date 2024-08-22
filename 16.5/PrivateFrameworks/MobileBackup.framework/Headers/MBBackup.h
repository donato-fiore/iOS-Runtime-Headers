// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBBACKUP_H
#define MBBACKUP_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBBackup : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *backupUDID; // ivar: _backupUDID
@property (readonly, nonatomic) NSString *backupUUID; // ivar: _backupUUID
@property (readonly, nonatomic) NSString *backupUUIDSansPrefix;
@property (readonly, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (readonly, nonatomic) BOOL hasBackupEnabledState; // ivar: _hasBackupEnabledState
@property (readonly, nonatomic) BOOL isBackupEnabled; // ivar: _isBackupEnabled
@property (readonly, nonatomic) BOOL isMBSBackup; // ivar: _isMBSBackup
@property (readonly, nonatomic) NSString *marketingName; // ivar: _marketingName
@property (readonly, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles; // ivar: _restoreSystemFiles
@property (readonly, nonatomic) NSArray *snapshots; // ivar: _snapshots


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBackupUDID:(id)arg0 backupUUID:(id)arg1 deviceClass:(id)arg2 productType:(id)arg3 hardwareModel:(id)arg4 marketingName:(id)arg5 snapshots:(id)arg6 restoreSystemFiles:(BOOL)arg7 isMBSBackup:(BOOL)arg8 isBackupEnabled:(BOOL)arg9 hasBackupEnabledState:(BOOL)arg10 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif