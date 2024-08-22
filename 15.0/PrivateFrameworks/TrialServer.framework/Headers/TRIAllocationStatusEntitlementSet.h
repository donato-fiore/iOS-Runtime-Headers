// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIALLOCATIONSTATUSENTITLEMENTSET_H
#define TRIALLOCATIONSTATUSENTITLEMENTSET_H

@class NSSet;
@protocol TRIAllocationStatusEntitled;

#import <Foundation/Foundation.h>


@interface TRIAllocationStatusEntitlementSet : NSObject <TRIAllocationStatusEntitled>

 {
    NSSet *_allowedDeploymentEnvironments;
}




-(id)allowedDeploymentEnvironments;
-(id)initWithAllowedDeploymentEnvironments:(id)arg0 ;


@end


#endif