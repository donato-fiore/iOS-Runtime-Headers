// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBEHAVIORALPREDICTIONSFEATURECACHEGUARDEDDATA_H
#define ATXBEHAVIORALPREDICTIONSFEATURECACHEGUARDEDDATA_H


#import <Foundation/Foundation.h>


@interface ATXBehavioralPredictionsFeatureCacheGuardedData : NSObject {
    unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> cache;
}






@end


#endif