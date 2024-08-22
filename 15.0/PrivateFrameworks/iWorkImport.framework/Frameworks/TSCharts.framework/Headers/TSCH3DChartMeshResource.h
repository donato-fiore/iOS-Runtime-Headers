// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTMESHRESOURCE_H
#define TSCH3DCHARTMESHRESOURCE_H



#import "TSCH3DResource.h"
#import "TSCH3DChartMeshSharedChildResource.h"

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource *_shared;
}




+(id)resourceWithSharedResource:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)uniqueIdentifier;
-(id)get;
-(id)initWithSharedResource:(id)arg0 ;
-(int)caching;
-(struct DataBufferInfo )bufferInfo;
-(void)flushMemory;


@end


#endif