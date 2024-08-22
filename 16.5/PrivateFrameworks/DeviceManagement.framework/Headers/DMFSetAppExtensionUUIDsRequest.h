// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETAPPEXTENSIONUUIDSREQUEST_H
#define DMFSETAPPEXTENSIONUUIDSREQUEST_H

@class NSString;


#import "DMFAppRequest.h"

@interface DMFSetAppExtensionUUIDsRequest : DMFAppRequest

@property (copy, nonatomic) NSString *DNSProxyUUIDString; // ivar: _DNSProxyUUIDString
@property (copy, nonatomic) NSString *VPNUUIDString; // ivar: _VPNUUIDString
@property (copy, nonatomic) NSString *contentFilterUUIDString; // ivar: _contentFilterUUIDString


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif