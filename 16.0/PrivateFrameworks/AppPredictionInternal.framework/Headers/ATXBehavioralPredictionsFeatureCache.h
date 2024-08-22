// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBEHAVIORALPREDICTIONSFEATURECACHE_H
#define ATXBEHAVIORALPREDICTIONSFEATURECACHE_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock *_lock;
}




-(?)itemsForBundleIds;
-(id)init;
-(struct ATXPredictionItem )itemForBundleId:(id)arg0 ;
-(void)addItem:(struct ATXPredictionItem )arg0 forBundleId:(id)arg1 ;


@end


#endif