// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPFINDERINTERFACE_H
#define SPFINDERINTERFACE_H


#import <Foundation/Foundation.h>

#import "SPAdvertisementCache.h"

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache; // ivar: _advertisementCache


-(id)beaconPayloadCache;
-(id)finderStateManager;
-(id)stateManager;


@end


#endif