// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSAPPLICATIONPROVISIONINGPROFILE_H
#define FBSAPPLICATIONPROVISIONINGPROFILE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FBSApplicationProvisioningProfile : NSObject {
    NSString *_allowedApplicationIdentifierEntitlement;
}


@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic, getter=isAppleInternalProfile) BOOL appleInternalProfile; // ivar: _appleInternalProfile
@property (readonly, nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isFreeDeveloperProfile) BOOL freeDeveloperProfile; // ivar: _freeDeveloperProfile
@property (readonly, nonatomic) BOOL provisionsAllDevices; // ivar: _provisionsAllDevices
@property (readonly, nonatomic) BOOL provisionsThisDevice; // ivar: _provisionsThisDevice
@property (readonly, copy, nonatomic) NSString *signerIdentity; // ivar: _signerIdentity


-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSignerIdentity:(id)arg0 profile:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif