// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGIMAGEDATA_H
#define MTLGPUDEBUGIMAGEDATA_H

@class NSString, MTLDebugInstrumentationData;

#import <Foundation/Foundation.h>

#import "MTLGPUDebugBuffer.h"
#import "MTLGPUDebugDevice.h"
#import "MTLGPUDebugFunction.h"
#import "MTLGPUDebugDynamicLibrary.h"

@interface MTLGPUDebugImageData : NSObject {
    MTLGPUDebugBuffer *constantDataBuffer;
    MTLGPUDebugDevice *_device;
    mutex _constantDataMutex;
    NSUInteger _constantDataBufferIndex;
    KeyBufferPair _constantDataKeyPair;
    NSString *_loadedImageName;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    int _imageType;
    NSUInteger _imageID;
    NSUInteger _functionType;
    MTLGPUDebugFunction *_function;
    MTLGPUDebugDynamicLibrary *_dynamicLibrary;
}


@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, weak, nonatomic) MTLGPUDebugDynamicLibrary *dynamicLibrary;
@property (readonly, weak, nonatomic) MTLGPUDebugFunction *function;
@property (readonly, nonatomic) NSUInteger functionType;
@property (readonly, nonatomic) int imageType;
@property (readonly, nonatomic) NSString *loadedImageName;


-(id)initWithDynamicLibrary:(id)arg0 ;
-(id)initWithFunction:(id)arg0 ;
-(id)initWithFunction:(id)arg0 debugInstrumentationData:(id)arg1 ;
-(void)_applyConstantRelocation;
-(void)_applyConstantRelocation:(id)arg0 ;
-(void)_applyImageIDRelocation:(id)arg0 ;
-(void)dealloc;
-(void)setConstantData:(id)arg0 ;


@end


#endif