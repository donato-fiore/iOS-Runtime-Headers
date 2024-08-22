// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHANIMATEDIMAGE_H
#define PHANIMATEDIMAGE_H

@class PFAnimatedImage;

#import <Foundation/Foundation.h>


@interface PHAnimatedImage : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger frameCount; // ivar: _frameCount
@property (readonly, nonatomic) NSUInteger loopCount; // ivar: _loopCount
@property (readonly, nonatomic) PFAnimatedImage *pf_animatedImage; // ivar: _pf_animatedImage
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth


+(NSInteger)requestAnimatedImageWithURL:(id)arg0 completion:(id)arg1 ;
+(NSInteger)requestAnimatedImageWithURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)cancelAnimatedImageRequest:(NSInteger)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 cachingStrategy:(NSInteger)arg1 useSharedDecoding:(BOOL)arg2 ;
-(void)_initializePropertiesWithAnimatedImage:(id)arg0 ;


@end


#endif