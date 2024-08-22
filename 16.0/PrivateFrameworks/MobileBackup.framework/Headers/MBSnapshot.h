// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBSNAPSHOT_H
#define MBSNAPSHOT_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (nonatomic) NSInteger backupPolicy; // ivar: _backupPolicy
@property (nonatomic) NSInteger backupType; // ivar: _backupType
@property (readonly, nonatomic) NSString *backupUUID; // ivar: _backupUUID
@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSDate *created; // ivar: _created
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSInteger estimatedRestoreSize; // ivar: _estimatedRestoreSize
@property (readonly, nonatomic) BOOL isCompatible; // ivar: _isCompatible
@property (readonly, nonatomic) NSDate *modified; // ivar: _modified
@property (readonly, nonatomic) NSUInteger quotaReserved; // ivar: _quotaReserved
@property (retain, nonatomic) NSString *requiredProductVersion; // ivar: _requiredProductVersion
@property (readonly, nonatomic) NSUInteger snapshotID; // ivar: _snapshotID
@property (readonly, nonatomic) NSString *snapshotUUID; // ivar: _snapshotUUID
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) NSString *systemVersion; // ivar: _systemVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnapshotID:(NSUInteger)arg0 backupUUID:(id)arg1 snapshotUUID:(id)arg2 deviceName:(id)arg3 date:(id)arg4 created:(id)arg5 modified:(id)arg6 state:(int)arg7 isCompatible:(BOOL)arg8 systemVersion:(id)arg9 buildVersion:(id)arg10 quotaReserved:(NSUInteger)arg11 backupType:(NSInteger)arg12 backupPolicy:(NSInteger)arg13 accountType:(NSInteger)arg14 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif