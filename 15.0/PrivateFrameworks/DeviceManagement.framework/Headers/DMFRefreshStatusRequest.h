// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFREFRESHSTATUSREQUEST_H
#define DMFREFRESHSTATUSREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFRefreshStatusRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif