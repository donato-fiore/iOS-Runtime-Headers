// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFRAGMENTEDASSETMINDERINTERNAL_H
#define AVFRAGMENTEDASSETMINDERINTERNAL_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVFragmentedAssetMinderInternal : NSObject {
    NSMutableSet *assets;
    NSObject<OS_dispatch_queue> *accessSerializer;
    CGFloat mindingInterval;
}






@end


#endif