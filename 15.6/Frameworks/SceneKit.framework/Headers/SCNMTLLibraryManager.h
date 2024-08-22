// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLLIBRARYMANAGER_H
#define SCNMTLLIBRARYMANAGER_H

@class NSDictionary, NSMapTable;
@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_group, MTLLibrary;

#import <Foundation/Foundation.h>

#import "SCNMTLLibrary.h"

@interface SCNMTLLibraryManager : NSObject {
    id<MTLDevice> *_device;
    SCNMTLLibrary *_frameworkLibrary;
    SCNMTLLibrary *_defaultLibrary;
    *__C3DEngineStats __engineStats;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_group> *_shaderCompilationGroup;
    id<MTLLibrary> *_commonProfileCacheLibrary;
    NSDictionary *_commonProfilePrecompiledFunctions;
    NSMapTable *_availableLibraries;
    *__CFDictionary _availableCompiledLibraries;
    os_unfair_lock_s _availableCompiledLibrariesLock;
}




+(id)hashCodeForSource:(id)arg0 macros:(id)arg1 ;
-(id)commonProfileCacheLibrary;
-(id)defaultLibrary;
-(id)device;
-(id)deviceQueue;
-(id)frameworkLibrary;
-(id)initWithDevice:(id)arg0 ;
-(id)libraryForFile:(id)arg0 ;
-(id)libraryForSourceCode:(id)arg0 options:(id)arg1 ;
-(id)shaderCompilationGroup;
-(void)_setEngineStats:(struct __C3DEngineStats *)arg0 ;
-(void)clearCompiledLibraries;
-(void)dealloc;
-(void)libraryForProgramDesc:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)waitForShadersCompilation;


@end


#endif