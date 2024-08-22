// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIPROVISIONINGPROFILE_H
#define MCUIPROVISIONINGPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MCUIProvisioningProfile : NSObject

@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSString *allowedApplicationIdentifierEntitlement; // ivar: _allowedApplicationIdentifierEntitlement
@property (nonatomic) BOOL isAppleInternal; // ivar: _isAppleInternal
@property (nonatomic) BOOL isBeta; // ivar: _isBeta
@property (nonatomic) BOOL isFreeDeveloperProvisioningProfile; // ivar: _isFreeDeveloperProvisioningProfile
@property (nonatomic) BOOL isUniversalProvisioningProfile; // ivar: _isUniversalProvisioningProfile


-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg0 ;
-(id)initWithProfile:(*void)arg0 ;


@end


#endif