// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTMESHSHAREDCHILDRESOURCE_H
#define TSCH3DCHARTMESHSHAREDCHILDRESOURCE_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartMeshResources.h"

@interface TSCH3DChartMeshSharedChildResource : NSObject {
    TSCH3DChartMeshResources *_parent;
    DataBufferInfo _bufferInfo;
    NSUInteger _resourceIdentifier;
}


@property (readonly) DataBufferInfo bufferInfo;
@property (nonatomic) int caching; // ivar: _caching
@property (nonatomic) BOOL childRegenerated; // ivar: _childRegenerated
@property (readonly, nonatomic) NSUInteger resourceIdentifier;


+(id)resourceWithParent:(id)arg0 ;
-(id)initWithParent:(id)arg0 ;
-(void)dealloc;
-(void)p_clear;


@end


#endif