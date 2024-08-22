// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALRENDERMASKRENDERCACHE_H
#define PKMETALRENDERMASKRENDERCACHE_H

@class NSUUID;


#import "PKMetalStrokeRenderCache.h"

@interface PKMetalRenderMaskRenderCache : PKMetalStrokeRenderCache

@property (readonly, nonatomic) NSUUID *strokeDataUUID; // ivar: _strokeDataUUID


-(id)initWithInk:(id)arg0 strokeDataUUID:(id)arg1 ;


@end


#endif