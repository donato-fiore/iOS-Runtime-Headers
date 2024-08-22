// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSPATHBUFFERDATA_H
#define MTLSPATHBUFFERDATA_H

@protocol MTLBuffer, MTLDevice;

#import <Foundation/Foundation.h>

#import "MTLSAnimatablePathCollection.h"

@interface MTLSPathBufferData : NSObject {
    ? _viewRatio;
}


@property (retain) MTLSAnimatablePathCollection *collection; // ivar: _collection
@property (readonly) NSObject<MTLBuffer> *controlPoints; // ivar: _controlPoints
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSObject<MTLBuffer> *indices; // ivar: _indices
@property (readonly) NSObject<MTLBuffer> *instanceInfo; // ivar: _instanceInfo
@property (readonly) NSObject<MTLBuffer> *patchInfo; // ivar: _patchInfo
@property (readonly) NSObject<MTLBuffer> *tessellationFactors; // ivar: _tessellationFactors
@property ? viewRatio;


-(id)initWithCollection:(id)arg0 device:(id)arg1 viewRatio;
-(id)initWithDefaultPath:(id)arg0 device:(id)arg1 viewRatio;
-(id)initWithDevice:(id)arg0 viewRatio;
-(void)updateControlPointBufferWithData:(struct ControlPoint *)arg0 count:(NSUInteger)arg1 ;
-(void)updateInstanceBufferWithData:(struct InstanceInfo *)arg0 count:(NSUInteger)arg1 ;


@end


#endif