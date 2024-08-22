// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUILEGIBILITYCACHE_H
#define SBUILEGIBILITYCACHE_H

@class NSMapTable, NSHashTable, NSMutableDictionary;
@protocol SBUILegibilityEngine;

#import <Foundation/Foundation.h>


@interface SBUILegibilityCache : NSObject {
    NSMapTable *_templateImagesBySizeForSettings;
    NSMapTable *_sortedTemplateImageKeysBySizeForSettings;
    NSMapTable *_strengthForImageLookupMap;
    NSHashTable *_cachedTemplatedImages;
    os_unfair_lock_s _unfairLock;
    NSMutableDictionary *_memoryPoolLock_memoryPoolsBySlotSize;
    os_unfair_lock_s _memoryPoolLock;
}


@property (readonly, weak, nonatomic) NSObject<SBUILegibilityEngine> *engine; // ivar: _engine


-(BOOL)containsTemplateForSettings:(id)arg0 ;
-(BOOL)isCachedTemplateImage:(id)arg0 ;
-(id)cachedStrengthForImage:(id)arg0 strength:(CGFloat)arg1 generator:(id)arg2 ;
-(id)initWithEngine:(id)arg0 ;
-(id)memoryPoolForGraphicsContextType:(NSInteger)arg0 matchingSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)templateImageForSettings:(id)arg0 matchingSize:(struct CGSize )arg1 ;
-(void)_teardownMemoryPools;
-(void)cacheTemplateShadowImage:(id)arg0 settings:(id)arg1 maxSize:(struct CGSize )arg2 ;
-(void)removeAllObjects;


@end


#endif