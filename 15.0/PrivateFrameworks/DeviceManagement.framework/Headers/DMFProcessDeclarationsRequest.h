// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFPROCESSDECLARATIONSREQUEST_H
#define DMFPROCESSDECLARATIONSREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFProcessDeclarationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif