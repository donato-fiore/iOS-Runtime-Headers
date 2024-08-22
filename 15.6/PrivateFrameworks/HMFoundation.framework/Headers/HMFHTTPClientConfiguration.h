// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPCLIENTCONFIGURATION_H
#define HMFHTTPCLIENTCONFIGURATION_H

@protocol NSCopying;


#import "HMFObject.h"

@interface HMFHTTPClientConfiguration : HMFObject <NSCopying>



@property BOOL allowsAnonymousConnection; // ivar: _allowsAnonymousConnection
@property BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property BOOL monitorsReachability; // ivar: _monitorsReachability
@property BOOL requiresEncryption; // ivar: _requiresEncryption
@property BOOL supportsWakeOnLAN; // ivar: _supportsWakeOnLAN


+(id)defaultConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif