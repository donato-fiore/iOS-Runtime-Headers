// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPDEVICEIDENTITYCERTIFICATE_H
#define NSPDEVICEIDENTITYCERTIFICATE_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _ignoreExistingKeychainIdentity;
    NSInteger _diskVersion;
    NSDate *_deviceIdentityFetchDate;
}




+(BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+(BOOL)supportsSecureCoding;
+(id)sharedDeviceIdentity;
+(void)removeFromPreferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)deviceIdentityAuthenticationFailed;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDeviceIdentityCertificate:(id)arg0 ;
-(void)resetDeviceIdentityInfo;


@end


#endif