// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTESPRESSOGENERICEXECUTOR_H
#define PTESPRESSOGENERICEXECUTOR_H

@class NSMutableDictionary, NSMutableArray, NSURL;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PTEspressoGenericExecutor : NSObject {
    *void _ctx;
    *void _plan;
    ? _net;
    NSMutableDictionary *_inputsMap;
    NSMutableDictionary *_outputsMap;
    NSMutableArray *_inputConversion;
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;
    int _espressoEngine;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    NSURL *_url;
    NSMutableArray *_textureNamePairs;
    NSObject<OS_os_log> *_log;
    NSUInteger _sid;
}




+(NSUInteger)getEspressoMetalDeviceId:(id)arg0 ;
-(id)getInputResourceWithName:(id)arg0 ;
-(id)getOutputResourceWithName:(id)arg0 ;
-(id)getResourceWithName:(id)arg0 fromMap:(id)arg1 ;
-(id)initWithUrl:(id)arg0 inputNames:(id)arg1 outputNames:(id)arg2 forEngine:(int)arg3 device:(id)arg4 commandQueue:(id)arg5 reshape:(struct ? *)arg6 configuration:(id)arg7 ;
-(id)texture2DArrayToTexture2D:(id)arg0 ;
-(short)bindBuffers:(id)arg0 toMap:(id)arg1 withMode:(int)arg2 ;
-(unsigned int)convertBindInput;
-(unsigned int)execute;
-(unsigned int)executeAsync;
-(unsigned int)executeAsync:(id)arg0 ;
-(void)dealloc;
-(void)profileBegin:(BOOL)arg0 ;


@end


#endif