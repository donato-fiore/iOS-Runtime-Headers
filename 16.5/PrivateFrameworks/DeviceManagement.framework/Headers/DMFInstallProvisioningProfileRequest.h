// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFINSTALLPROVISIONINGPROFILEREQUEST_H
#define DMFINSTALLPROVISIONINGPROFILEREQUEST_H

@class NSString, NSData;


#import "DMFTaskRequest.h"

@interface DMFInstallProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *managingProfileIdentifier; // ivar: _managingProfileIdentifier
@property (copy, nonatomic) NSData *profileData; // ivar: _profileData


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif