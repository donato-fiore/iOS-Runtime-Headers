// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHRESTRICTIONSREQUEST_H
#define DMFFETCHRESTRICTIONSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeProfileRestrictions; // ivar: _includeProfileRestrictions
@property (nonatomic) NSUInteger profileFilterFlags; // ivar: _profileFilterFlags


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif