// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHPROFILESREQUEST_H
#define DMFFETCHPROFILESREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchProfilesRequest : DMFTaskRequest

@property (nonatomic) NSUInteger filterFlags; // ivar: _filterFlags


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