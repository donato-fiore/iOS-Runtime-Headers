// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCCUSTOMLAYERTENSOR_H
#define MLCCUSTOMLAYERTENSOR_H

@class NSData;
@protocol NSCopying, MTLBuffer;

#import <Foundation/Foundation.h>

#import "MLCTensorDescriptor.h"
#import "MLCTensorData.h"

@interface MLCCustomLayerTensor : NSObject <NSCopying>



@property (retain, nonatomic) NSData *cpuBuffer; // ivar: _cpuBuffer
@property (readonly, retain, nonatomic) MLCTensorDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) id *gpuBuffer; // ivar: _gpuBuffer
@property (readonly, nonatomic) MLCTensorData *hostData;
@property (readonly, nonatomic) NSObject<MTLBuffer> *metalBuffer;


+(id)customLayerTensorWithDescriptor:(id)arg0 cpuBuffer:(id)arg1 ;
+(id)customLayerTensorWithDescriptor:(id)arg0 gpuBuffer:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTensorDescriptor:(id)arg0 cpuBuffer:(id)arg1 gpuBuffer:(id)arg2 ;


@end


#endif