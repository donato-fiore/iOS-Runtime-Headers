// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPDEVICEIDENTITYCERTIFICATE_H
#define NSPDEVICEIDENTITYCERTIFICATE_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *deviceIdentityFetchDate; // ivar: _deviceIdentityFetchDate
@property (readonly) NSInteger diskVersion; // ivar: _diskVersion
@property (nonatomic) BOOL ignoreExistingKeychainIdentity; // ivar: _ignoreExistingKeychainIdentity


+(BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+(BOOL)supportsSecureCoding;
+(id)sharedDeviceIdentity;
+(void)removeFromPreferences;
-(BOOL)saveToPreferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromPreferences;
-(id)initWithCoder:(id)arg0 ;
-(void)deviceIdentityAuthenticationFailed;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDeviceIdentityCertificate:(id)arg0 ;
-(void)generateDeviceIdentityFetchDate;
-(void)resetDeviceIdentityInfo;


@end


#endif