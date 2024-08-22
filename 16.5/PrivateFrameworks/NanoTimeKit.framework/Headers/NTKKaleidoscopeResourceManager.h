// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKKALEIDOSCOPERESOURCEMANAGER_H
#define NTKKALEIDOSCOPERESOURCEMANAGER_H

@class NSBundle;
@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "NTKPromise.h"

@interface NTKKaleidoscopeResourceManager : NSObject {
    NSBundle *_bundle;
    id<MTLDevice> *_device;
    NSUInteger _clients;
    NSUInteger _viewMtlPixelFormat;
    NTKPromise"] _renderPipelines;
    NTKPromise *_mtlBuffer;
}




+(id)sharedInstanceWithPixelFormat:(NSUInteger)arg0 ;
+(void)_deallocInstance:(id)arg0 ;
-(id)getGeometryBuffer;
-(id)getPipelineForShaderType:(NSUInteger)arg0 blending:(BOOL)arg1 ;
-(id)initWithPixelFormat:(NSUInteger)arg0 ;
-(void)_asyncDeallocInstance;
-(void)_loadMTLBufferData;
-(void)_loadPrograms;
-(void)_queue_setupPipelineForType:(NSUInteger)arg0 vertexFunction:(id)arg1 fragmentName:(id)arg2 inLibrary:(id)arg3 librarySPI:(id)arg4 ;
-(void)addClient;
-(void)dealloc;
-(void)removeClient;


@end


#endif