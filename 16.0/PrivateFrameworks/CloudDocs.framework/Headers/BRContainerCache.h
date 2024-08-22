// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCONTAINERCACHE_H
#define BRCONTAINERCACHE_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol BRContainerHelper, OS_dispatch_queue, OS_dispatch_source, NSObject;

#import <Foundation/Foundation.h>

#import "br_pacer.h"

@interface BRContainerCache : NSObject {
    id<BRContainerHelper> *_helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> *_containerStatusObserver;
    NSString *_personaID;
}




+(BOOL)hasDaemonicParts;
+(BOOL)isManagedProvider;
+(BOOL)isPersonalProvider;
+(id)containerCache;
+(id)containerCacheForPersonaID:(id)arg0 ;
+(id)containerHelper;
-(BOOL)_updateContainersCache;
-(id)_allContainersByIDNoCopyBlocking:(BOOL)arg0 ;
-(id)allContainersBlockIfNeeded:(BOOL)arg0 ;
-(id)allContainersByID;
-(id)containerByID:(id)arg0 ;
-(id)documentContainers;
-(id)initWithHelper:(id)arg0 personaID:(id)arg1 ;
-(void)_accountWillChange;
-(void)_containerListDidChange;
-(void)dealloc;
-(void)invalidateAndClearCache:(BOOL)arg0 ;
-(void)subscribeToContainerStatusUpdate;
-(void)unsubscribeToContainerStatusUpdate;


@end


#endif