// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKUIRESOURCEMANAGER_H
#define CLKUIRESOURCEMANAGER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    NSUInteger _memoryUsed;
    NSMutableArray *_textureLoaderQueues;
}




+(id)sharedInstance;
-(BOOL)ensureMemoryAvailable:(NSUInteger)arg0 ;
-(BOOL)memoryIsAvailable:(NSUInteger)arg0 ;
-(id)_fetchOldestAtlas;
-(id)_newAtlasForUuid:(id)arg0 ;
-(id)borrowTextureLoadingQueue;
-(id)delegateForUuid:(id)arg0 ;
-(id)init;
-(id)textureForUuid:(id)arg0 delegate:(id)arg1 rect;
-(void)_purgeAllUnconditionally;
-(void)_purgeAtlases:(id)arg0 ;
-(void)dealloc;
-(void)notifyAtlas:(id)arg0 willChangeToMemoryCost:(NSUInteger)arg1 ;
-(void)purge:(id)arg0 ;
-(void)purgeAllUnused;
-(void)returnTextureLoadingQueue:(id)arg0 ;


@end


#endif