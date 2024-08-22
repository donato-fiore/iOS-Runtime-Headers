// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCUIPROVISIONINGPROFILE_H
#define MCUIPROVISIONINGPROFILE_H

@class NSString;
@protocol MCUIProvisioningProfileProtocol;

#import <Foundation/Foundation.h>


@interface MCUIProvisioningProfile : NSObject <MCUIProvisioningProfileProtocol>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSString *allowedAppIDEntitlement; // ivar: _allowedAppIDEntitlement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAppleInternal; // ivar: _isAppleInternal
@property (readonly, nonatomic) BOOL isBeta; // ivar: _isBeta
@property (readonly, nonatomic) BOOL isFreePP; // ivar: _isFreePP
@property (readonly, nonatomic) BOOL isUniversalPP; // ivar: _isUniversalPP
@property (readonly) Class superclass;


-(BOOL)allowsAppIDEntitlement:(id)arg0 ;
-(id)initWithProfile:(*void)arg0 ;


@end


#endif