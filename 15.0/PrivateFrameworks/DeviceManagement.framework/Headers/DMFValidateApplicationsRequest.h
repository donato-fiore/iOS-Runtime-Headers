// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFVALIDATEAPPLICATIONSREQUEST_H
#define DMFVALIDATEAPPLICATIONSREQUEST_H

@class NSArray;


#import "DMFTaskRequest.h"

@interface DMFValidateApplicationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif