// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DNDSUSERAVAILABILITYTCCPROVIDER_H
#define _DNDSUSERAVAILABILITYTCCPROVIDER_H

@class NSString;
@protocol DNDSUserAvailabilityTCCProviding;

#import <Foundation/Foundation.h>


@interface _DNDSUserAvailabilityTCCProvider : NSObject <DNDSUserAvailabilityTCCProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)userAvailabilityTCCApprovedBundleIds;


@end


#endif