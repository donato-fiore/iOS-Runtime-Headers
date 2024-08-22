// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTELEMETRYHEAP_H
#define MTLTELEMETRYHEAP_H



#import "MTLToolsHeap.h"
#import "MTLTelemetryDevice.h"

@interface MTLTelemetryHeap : MTLToolsHeap

@property (readonly, nonatomic) MTLTelemetryDevice *telemetryDevice; // ivar: _telemetryDevice


-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)initWithHeap:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif