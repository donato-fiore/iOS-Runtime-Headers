// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFDELETEUSERREQUEST_H
#define DMFDELETEUSERREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (nonatomic) BOOL forceDeletion; // ivar: _forceDeletion
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif