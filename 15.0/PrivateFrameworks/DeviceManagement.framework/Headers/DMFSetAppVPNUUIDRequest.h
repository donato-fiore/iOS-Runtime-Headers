// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFSETAPPVPNUUIDREQUEST_H
#define DMFSETAPPVPNUUIDREQUEST_H

@class NSString;


#import "DMFAppRequest.h"

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest

@property (copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif