// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCUBICSPLINEMATRIXCACHE_H
#define NTKCUBICSPLINEMATRIXCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKCubicSplineMatrixCache : NSObject {
    NSMutableDictionary *_openMatrixCache;
    NSMutableDictionary *_closedMatrixCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




+(id)sharedInstance;
-(id)init;
-(struct ? *)closedSplineMatrixWithDimension:(int)arg0 ;
-(struct ? *)openSplineMatrixWithDimension:(int)arg0 ;
-(struct ? *)splineMatrixWithDimension:(int)arg0 cache:(id)arg1 matrixGenerator:(id)arg2 ;


@end


#endif