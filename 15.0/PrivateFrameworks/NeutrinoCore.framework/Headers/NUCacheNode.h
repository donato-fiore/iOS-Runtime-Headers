// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCACHENODE_H
#define NUCACHENODE_H

@class NSError, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;


#import "NURenderNode.h"
#import "NURenderContext.h"
#import "NUSourceNode.h"

@interface NUCacheNode : NURenderNode {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NURenderContext *_renderContext;
    NUSourceNode *_sourceNode;
    NSError *_sourceError;
}


@property (readonly, nonatomic) NSString *cacheIdentifier;
@property (retain) NSString *cachedCacheIdentifier; // ivar: _cachedCacheIdentifier
@property (readonly, nonatomic) NURenderNode *inputNode;
@property (readonly, nonatomic) NSInteger subsampleFactor; // ivar: _subsampleFactor


+(NSInteger)_maxCacheDirectorySize;
+(id)cacheDirectoryURL;
+(id)nodeWithInput:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
+(id)registry;
+(void)_ensureCacheDirectoryURL:(id)arg0 ;
+(void)_pruneCacheDirectory:(id)arg0 toSize:(NSInteger)arg1 ;
+(void)clearCacheDirectory;
-(BOOL)installTemporaryURL:(id)arg0 intoPersistentURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqualToRenderNode:(id)arg0 ;
-(BOOL)isResolved;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)tryLoadPersistentURL:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sampleMode;
-(NSInteger)subsampleFactorForScale:(struct ? )arg0 ;
-(NSUInteger)_hash;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)descriptionSubClassHook;
-(id)evaluateRenderDependenciesWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 subsampleFactor:(NSInteger)arg2 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg0 error:(*id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)persistentURL;
-(id)persistentURLPrefix;
-(id)resolvedSourceNode:(*id)arg0 ;
-(id)temporaryURLPrefix;
-(void)_resolveWithSourceNode:(id)arg0 error:(id)arg1 ;
-(void)nu_updateDigest:(id)arg0 ;
-(void)resolveSourceWithResponse:(id)arg0 ;
-(void)resolveWithSourceNode:(id)arg0 error:(id)arg1 ;


@end


#endif