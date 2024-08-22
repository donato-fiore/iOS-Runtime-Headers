// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFSETAPPCONFIGURATIONREQUEST_H
#define DMFSETAPPCONFIGURATIONREQUEST_H

@class NSDictionary;


#import "DMFAppRequest.h"

@interface DMFSetAppConfigurationRequest : DMFAppRequest

@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif