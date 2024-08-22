// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFINSTALLAPPREQUEST_H
#define DMFINSTALLAPPREQUEST_H



#import "DMFAppRequest.h"

@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) BOOL allowFreePurchases; // ivar: _allowFreePurchases
@property (nonatomic) NSUInteger licenseType; // ivar: _licenseType


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif