// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFINVITEUSERTOVPPREQUEST_H
#define DMFINVITEUSERTOVPPREQUEST_H

@class NSURL, NSString;


#import "DMFTaskRequest.h"

@interface DMFInviteUserToVPPRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *originator; // ivar: _originator


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif