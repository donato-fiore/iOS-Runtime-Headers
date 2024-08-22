// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRENDERPIPELINEDESCRIPTOR_H
#define PTRENDERPIPELINEDESCRIPTOR_H

@class NSDictionary;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface PTRenderPipelineDescriptor : NSObject

@property (readonly) CGSize colorInputSize; // ivar: _colorInputSize
@property (readonly) CGSize colorOutputSize; // ivar: _colorOutputSize
@property NSInteger debugRendering; // ivar: _debugRendering
@property (readonly, retain) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) CGSize disparitySize; // ivar: _disparitySize
@property BOOL gpuProfiling; // ivar: _gpuProfiling
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property BOOL useRGBA; // ivar: _useRGBA
@property BOOL verbose; // ivar: _verbose
@property (readonly) NSUInteger version; // ivar: _version


-(id)copy;
-(id)initWithDevice:(id)arg0 version:(NSUInteger)arg1 colorInputSize:(struct CGSize )arg2 colorOutputSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 ;
-(id)initWithDevice:(id)arg0 version:(NSUInteger)arg1 colorSize:(struct CGSize )arg2 disparitySize:(struct CGSize )arg3 ;


@end


#endif