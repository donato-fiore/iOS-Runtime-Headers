// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOMETALKERNELSCACHE_H
#define ESPRESSOMETALKERNELSCACHE_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol MTLLibrary, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EspressoMetalKernelsCache : NSObject {
    id<MTLLibrary> *m_ShaderLibrary;
    id<MTLLibrary> *m_DefaultLibrary;
    id<MTLDevice> *_device;
    BOOL isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSMutableDictionary *m_kernelCache_rw;
    mutex setup_mutex;
}


@property (retain, nonatomic) NSString *kernelPrefix; // ivar: _kernelPrefix
@property (retain) NSDictionary *m_kernelCache; // ivar: _m_kernelCache


-(BOOL)shouldUseTexArray;
-(BOOL)wasSetup;
-(id)initWithDevice:(id)arg0 ;
-(id)kernelForFunction:(char *)arg0 ;
-(id)kernelForFunction:(char *)arg0 cacheString:(char *)arg1 withConstants:(id)arg2 ;
-(void)addLibraryAtPath:(id)arg0 ;
-(void)lazySetup;
-(void)loadLibraryNamed:(id)arg0 ;


@end


#endif