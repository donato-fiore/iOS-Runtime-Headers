// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHLASTLOGINDATEREQUEST_H
#define DMFFETCHLASTLOGINDATEREQUEST_H

@class NSSet;


#import "DMFTaskRequest.h"

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest

@property (copy, nonatomic) NSSet *appleIDs; // ivar: _appleIDs


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif