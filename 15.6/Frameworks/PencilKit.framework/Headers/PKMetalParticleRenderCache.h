// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALPARTICLERENDERCACHE_H
#define PKMETALPARTICLERENDERCACHE_H

@class NSMutableArray, NSString;
@protocol PKStrokeRenderCache;

#import <Foundation/Foundation.h>

#import "PKInk.h"

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache>

 {
    NSMutableArray *_buffers;
    NSUInteger _totalCost;
    PKInk *_ink;
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