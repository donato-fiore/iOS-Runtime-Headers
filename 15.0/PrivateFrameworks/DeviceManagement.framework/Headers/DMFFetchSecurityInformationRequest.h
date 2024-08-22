// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSECURITYINFORMATIONREQUEST_H
#define DMFFETCHSECURITYINFORMATIONREQUEST_H

@class NSArray;


#import "DMFTaskRequest.h"

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *infoKeys; // ivar: _infoKeys


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)allPlatformSecurityInfoKeys;
+(id)currentPlatformSecurityInfoKeys;
+(id)iOSSecurityInfoKeys;
+(id)macOSSecurityInfoKeys;
+(id)permittedPlatforms;
+(id)tvOSSecurityInfoKeys;
+(id)watchOSSecurityInfoKeys;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif