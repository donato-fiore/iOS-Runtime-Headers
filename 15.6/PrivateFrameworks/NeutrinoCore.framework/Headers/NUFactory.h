// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFACTORY_H
#define NUFACTORY_H

@class NSString, CIFilter;
@protocol NUStorageFactory;

#import <Foundation/Foundation.h>

#import "NUPurgeableStoragePool.h"
#import "NUCacheNodeRegistry.h"
#import "NUPlatform.h"
#import "NURenderNodeCache.h"
#import "NURenderPipelineRegistry.h"
#import "NUScheduler.h"
#import "NUSchemaRegistry.h"
#import "NUJSContextPool.h"

@interface NUFactory : NSObject

@property (retain, nonatomic) NSObject<NUStorageFactory> *bufferFactory; // ivar: _bufferFactory
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool; // ivar: _bufferStoragePool
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry; // ivar: _cacheNodeRegistry
@property (copy, nonatomic) NSString *defaultNameSpace; // ivar: _defaultNameSpace
@property (retain, nonatomic) NUPlatform *platform; // ivar: _platform
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache; // ivar: _renderNodeCache
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry; // ivar: _renderPipelineRegistry
@property (retain, nonatomic) CIFilter *repairMLFilter; // ivar: _repairMLFilter
@property (retain, nonatomic) NUScheduler *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry; // ivar: _schemaRegistry
@property (retain, nonatomic) NUJSContextPool *sharedJavaScriptContextPool; // ivar: _sharedJavaScriptContextPool
@property (retain, nonatomic) NSObject<NUStorageFactory> *surfaceFactory; // ivar: _surfaceFactory
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool; // ivar: _surfaceStoragePool


+(id)sharedFactory;
+(void)reapAllStoragePools;
+(void)reset;
+(void)setSharedFactory:(id)arg0 ;
+(void)shutdownSharedFactory;
-(void)start;


@end


#endif