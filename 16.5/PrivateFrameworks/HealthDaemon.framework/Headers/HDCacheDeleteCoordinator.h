// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCACHEDELETECOORDINATOR_H
#define HDCACHEDELETECOORDINATOR_H

@class HKSynchronousObserverSet;

#import <Foundation/Foundation.h>


@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}




+(id)unitTesting_cacheDeleteUrgencies;
-(id)init;
-(id)purgeSpace:(int)arg0 info:(id)arg1 ;
-(id)queryPurgableSpace:(int)arg0 info:(id)arg1 ;
-(id)unitTesting_purgeSpace:(int)arg0 info:(id)arg1 ;
-(id)unitTesting_queryPurgableSpace:(int)arg0 info:(id)arg1 ;
-(void)activate;
-(void)registerCacheDeleteProvider:(id)arg0 ;
-(void)unregisterCacheDeleteProvider:(id)arg0 ;


@end


#endif