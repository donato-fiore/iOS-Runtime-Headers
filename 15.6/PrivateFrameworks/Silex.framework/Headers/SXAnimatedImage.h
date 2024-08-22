// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXANIMATEDIMAGE_H
#define SXANIMATEDIMAGE_H

@class NSString, NSArray;
@protocol SXAnimatedImageViewCacheDelegate, SXAnimatedImageDelegate;

#import <Foundation/Foundation.h>

#import "SXAnimatedImageViewCache.h"

@interface SXAnimatedImage : NSObject <SXAnimatedImageViewCacheDelegate>



@property (readonly, nonatomic) SXAnimatedImageViewCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXAnimatedImageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) *CGImageSource imageSource; // ivar: _imageSource
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) BOOL invalidFile; // ivar: _invalidFile
@property (readonly, nonatomic) NSUInteger loopCount; // ivar: _loopCount
@property (readonly, nonatomic) NSUInteger numberOfFrames; // ivar: _numberOfFrames
@property (readonly, nonatomic) NSInteger preloadType; // ivar: _preloadType
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uncompressedByteSizePerFrame; // ivar: _uncompressedByteSizePerFrame


+(id)animatedImageWithData:(id)arg0 scale:(CGFloat)arg1 size:(struct CGSize )arg2 ;
+(id)animatedImageWithData:(id)arg0 size:(struct CGSize )arg1 ;
+(id)animatedImageWithURL:(id)arg0 scale:(CGFloat)arg1 type:(NSInteger)arg2 ;
+(id)animatedImageWithURL:(id)arg0 type:(NSInteger)arg1 ;
-(id)frameAtIndex:(NSUInteger)arg0 ;
-(id)frameAtIndex:(NSUInteger)arg0 returnNearestPreloaded:(BOOL)arg1 ;
-(id)initWithDataProvider:(struct CGDataProvider *)arg0 scale:(CGFloat)arg1 type:(NSInteger)arg2 size:(struct CGSize )arg3 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 scale:(CGFloat)arg1 type:(NSInteger)arg2 size:(struct CGSize )arg3 ;
-(void)animatedImageViewCache:(id)arg0 didCacheImageForFrameIndex:(NSUInteger)arg1 ;
-(void)capturePropertiesForType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)generateFrames;
-(void)resumePreloading;
-(void)suspendPreloading;


@end


#endif