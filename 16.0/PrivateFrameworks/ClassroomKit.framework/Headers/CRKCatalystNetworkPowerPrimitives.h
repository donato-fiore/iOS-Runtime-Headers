// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCATALYSTNETWORKPOWERPRIMITIVES_H
#define CRKCATALYSTNETWORKPOWERPRIMITIVES_H

@protocol CATNetworkPowerPrimitives, CATAssertionProviding;

#import <Foundation/Foundation.h>


@interface CRKCatalystNetworkPowerPrimitives : NSObject <CATNetworkPowerPrimitives, CATAssertionProviding>





-(id)acquireAssertion;
-(id)assertNetworkPowerOn;


@end


#endif