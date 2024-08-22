// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUIRESOURCEMANAGER_H
#define CLKUIRESOURCEMANAGER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    NSUInteger _memoryUsed;
    NSUInteger _memoryLimit;
    NSMutableArray *_textureLoaderQueues;
}


@property (nonatomic) NSUInteger explicitMemoryLimit; // ivar: _explicitMemoryLimit


+(id)sharedInstance;
-(BOOL)ensureMemoryAvailable:(NSUInteger)arg0 ;
-(BOOL)memoryIsAvailable:(NSUInteger)arg0 ;
-(NSUInteger)_computeMemoryAvailable;
-(NSUInteger)_memoryLimit;
-(id)_fetchOldestAtlas;
-(id)_newAtlasForUuid:(id)arg0 nullTexture:(id)arg1 ;
-(id)borrowTextureLoadingQueue;
-(id)delegateForUuid:(id)arg0 ;
-(id)init;
-(id)nullAtlas2D;
-(id)nullAtlasCube;
-(id)textureForUuid:(id)arg0 delegate:(id)arg1 rect:(id)arg2 nullTexture;
-(void)_purgeAllUnconditionally;
-(void)_purgeAtlases:(id)arg0 ;
-(void)dealloc;
-(void)notifyAtlas:(id)arg0 willChangeToMemoryCost:(NSUInteger)arg1 ;
-(void)purge:(id)arg0 ;
-(void)purgeAllUnused;
-(void)returnTextureLoadingQueue:(id)arg0 ;


@end


#endif