// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCLOUDSTORECONTAINERDIAGNOSTICS_H
#define PKCLOUDSTORECONTAINERDIAGNOSTICS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreContainerDiagnostics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isAccountManateeCapable; // ivar: _isAccountManateeCapable
@property (readonly, nonatomic) BOOL isDeviceManateeCapable; // ivar: _isDeviceManateeCapable
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isManateeEnabled; // ivar: _isManateeEnabled
@property (readonly, nonatomic) BOOL isSetup; // ivar: _isSetup
@property (readonly, nonatomic) BOOL isSyncEnabled; // ivar: _isSyncEnabled
@property (readonly, nonatomic) NSString *lastSyncDate; // ivar: _lastSyncDate
@property (readonly, nonatomic) NSString *status; // ivar: _status
@property (readonly, nonatomic) NSString *syncToken; // ivar: _syncToken


+(BOOL)supportsSecureCoding;
+(id)turnedOff;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsEnabled:(BOOL)arg0 isSetup:(BOOL)arg1 status:(id)arg2 isSyncEnabled:(BOOL)arg3 syncToken:(id)arg4 lastSyncDate:(id)arg5 isAccountManateeCapable:(BOOL)arg6 isDeviceManateeCapable:(BOOL)arg7 isManateeEnabled:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif