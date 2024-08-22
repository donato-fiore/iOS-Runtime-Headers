// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHLOCATIONREQUEST_H
#define DMFFETCHLOCATIONREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFFetchLocationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *originator; // ivar: _originator


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif