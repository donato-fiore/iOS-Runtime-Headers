// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALLIVESTROKEPAINTRENDERCACHE_H
#define PKMETALLIVESTROKEPAINTRENDERCACHE_H

@class NSMutableArray, NSString;
@protocol PKStrokeRenderCache;

#import <Foundation/Foundation.h>


@interface PKMetalLiveStrokePaintRenderCache : NSObject <PKStrokeRenderCache>

 {
    NSMutableArray *_buffers;
    NSUInteger _totalCost;
    CGFloat _startTime;
    CGFloat _duration;
    CGRect _animatedStrokeBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCompatibleWithInk:(id)arg0 ;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg0 ;
-(BOOL)needsCompute;
-(NSUInteger)cacheCost;
-(id)init;


@end


#endif