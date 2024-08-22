// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDCACHE_H
#define UIKEYBOARDCACHE_H

@class TIImageCacheClient, NSSet, NSMutableSet;

#import <Foundation/Foundation.h>

#import "_UIActionWhenIdle.h"

@interface UIKeyboardCache : NSObject {
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
}


@property (retain, nonatomic) _UIActionWhenIdle *idleAction; // ivar: _idleAction


+(BOOL)enabled;
+(id)sharedInstance;
-(id)displayImagesForView:(id)arg0 fromLayout:(id)arg1 imageFlags:(id)arg2 ;
-(id)init;
-(id)uniqueLayoutsFromInputModes:(id)arg0 ;
-(struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg0 fromLayout:(id)arg1 opacities:(id)arg2 ;
-(struct CGImage *)cachedImageForKey:(id)arg0 fromLayout:(id)arg1 ;
-(void)_didIdle;
-(void)_didIdleAndShouldWait;
-(void)clearNonPersistentCache;
-(void)commitTransaction;
-(void)dealloc;
-(void)decrementExpectedRender:(id)arg0 ;
-(void)drawCachedImage:(id)arg0 alpha:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)incrementExpectedRender:(id)arg0 ;
-(void)purge;
-(void)updateCacheForInputModes:(id)arg0 ;


@end


#endif