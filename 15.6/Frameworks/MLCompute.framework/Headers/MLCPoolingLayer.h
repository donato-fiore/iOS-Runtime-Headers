// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCPOOLINGLAYER_H
#define MLCPOOLINGLAYER_H



#import "MLCLayer.h"
#import "MLCPoolingDescriptor.h"

@interface MLCPoolingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCPoolingDescriptor *descriptor; // ivar: _descriptor


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithDescriptor:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif