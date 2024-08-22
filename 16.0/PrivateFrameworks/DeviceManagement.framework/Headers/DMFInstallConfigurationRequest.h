// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFINSTALLCONFIGURATIONREQUEST_H
#define DMFINSTALLCONFIGURATIONREQUEST_H

@class NSString, NSDictionary;


#import "DMFTaskRequest.h"

@interface DMFInstallConfigurationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *managingProfileIdentifier; // ivar: _managingProfileIdentifier
@property (copy, nonatomic) NSDictionary *profile; // ivar: _profile
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif