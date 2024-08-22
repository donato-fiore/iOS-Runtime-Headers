// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHPROFILESREQUEST_H
#define DMFFETCHPROFILESREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchProfilesRequest : DMFTaskRequest

@property (nonatomic) NSUInteger filterFlags; // ivar: _filterFlags


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif