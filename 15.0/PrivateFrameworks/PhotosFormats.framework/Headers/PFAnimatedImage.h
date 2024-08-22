// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFANIMATEDIMAGE_H
#define PFANIMATEDIMAGE_H


#import <Foundation/Foundation.h>

#import "PFFrameCache.h"

@interface PFAnimatedImage : NSObject {
    *CGImageSource _imageSource;
    *CGFloat _frameDelayTimes;
}


@property (nonatomic) NSInteger cacheStrategy;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) PFFrameCache *frameCache; // ivar: _frameCache
@property (readonly, nonatomic) NSUInteger frameCount; // ivar: _frameCount
@property (readonly, nonatomic) NSUInteger loopCount; // ivar: _loopCount
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize


-(CGFloat)frameDelayAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 cachingStrategy:(NSInteger)arg1 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 cachingStrategy:(NSInteger)arg1 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 cachingStrategy:(NSInteger)arg1 useGlobalDecodeQueue:(BOOL)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 cachingStrategy:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 cachingStrategy:(NSInteger)arg1 useGlobalDecodeQueue:(BOOL)arg2 ;
-(void)_preloadDelayTimes;
-(void)dealloc;


@end


#endif