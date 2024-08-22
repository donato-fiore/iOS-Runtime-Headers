// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETMAXIMUMRESIDENTUSERSREQUEST_H
#define DMFSETMAXIMUMRESIDENTUSERSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest

@property (nonatomic) NSUInteger count; // ivar: _count


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif