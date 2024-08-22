// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALSTROKERENDERCACHE_H
#define PKMETALSTROKERENDERCACHE_H

@class NSMutableArray, NSArray, NSString;
@protocol PKStrokeRenderCache;

#import <Foundation/Foundation.h>

#import "PKInk.h"

@interface PKMetalStrokeRenderCache : NSObject <PKStrokeRenderCache>

 {
    NSMutableArray *_buffers;
    NSMutableArray *_secondaryBuffers;
    NSUInteger _totalCost;
}


@property (readonly, nonatomic) NSArray *buffers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKInk *ink; // ivar: _ink
@property (readonly, nonatomic) NSArray *secondaryBuffers;
@property (readonly) Class superclass;


-(BOOL)isCompatibleWithInk:(id)arg0 ;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg0 ;
-(BOOL)needsCompute;
-(NSUInteger)cacheCost;
-(id)initWithInk:(id)arg0 ;
-(void)addBuffer:(id)arg0 ;
-(void)addSecondaryBuffer:(id)arg0 ;


@end


#endif