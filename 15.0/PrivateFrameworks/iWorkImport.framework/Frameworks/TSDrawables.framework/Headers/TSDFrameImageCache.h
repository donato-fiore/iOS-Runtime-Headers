// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFRAMEIMAGECACHE_H
#define TSDFRAMEIMAGECACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSDFrameImageCache : NSObject {
    NSMutableArray *mEntries;
}




+(id)sharedFrameImageCache;
-(id)init;
-(id)p_newEntryForFrame:(id)arg0 size:(struct CGSize )arg1 viewScale:(CGFloat)arg2 createIfNeeded:(BOOL)arg3 ;
-(struct CGImage *)newCachedImageForFrame:(id)arg0 size:(struct CGSize )arg1 viewScale:(CGFloat)arg2 forCALayer:(BOOL)arg3 mask:(BOOL)arg4 ;
-(struct CGImage *)setCachedImage:(struct CGImage *)arg0 forFrame:(id)arg1 size:(struct CGSize )arg2 viewScale:(CGFloat)arg3 forCALayer:(BOOL)arg4 mask:(BOOL)arg5 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)p_flush;


@end


#endif