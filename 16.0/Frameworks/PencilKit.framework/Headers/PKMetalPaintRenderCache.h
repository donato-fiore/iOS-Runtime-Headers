// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMETALPAINTRENDERCACHE_H
#define PKMETALPAINTRENDERCACHE_H

@class NSMutableArray, NSString;
@protocol PKStrokeRenderCache;

#import <Foundation/Foundation.h>


@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache>

 {
    NSMutableArray *_buffers;
    NSUInteger _totalCost;
    BOOL _purgeableBuffers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCompatibleWithInk:(id)arg0 ;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg0 ;
-(BOOL)needsCompute;
-(NSUInteger)cacheCost;


@end


#endif