// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPEXTERNALIMAGELOADER_H
#define TVPEXTERNALIMAGELOADER_H

@class NSString, NSMutableSet, NSMutableDictionary;
@protocol TVPPlaybackImageLoader;

#import <Foundation/Foundation.h>

#import "TVPExternalImageConfig.h"

@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader>



@property (retain, nonatomic) TVPExternalImageConfig *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstImageTime;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *imageProxies; // ivar: _imageProxies
@property (retain, nonatomic) NSMutableDictionary *imageProxyMappings; // ivar: _imageProxyMappings
@property (readonly, nonatomic) CGFloat lastImageTime;
@property (retain, nonatomic) NSMutableSet *loadedImageActualTimes; // ivar: _loadedImageActualTimes
@property (readonly) Class superclass;


-(BOOL)imageIsLoadedForTime:(CGFloat)arg0 ;
-(CGFloat)closestImageTimeForTime:(CGFloat)arg0 ;
-(CGFloat)closestImageTimeForTime:(CGFloat)arg0 imageInterval:(CGFloat)arg1 ;
-(NSUInteger)_closestImageIndexForTime:(CGFloat)arg0 actualTime:(*CGFloat)arg1 imageInterval:(CGFloat)arg2 ;
-(id)_closestURLForImageTime:(CGFloat)arg0 actualTime:(*CGFloat)arg1 ;
-(id)initWithConfig:(id)arg0 ;
-(id)loadImagesForTimes:(id)arg0 maxSize:(struct CGSize )arg1 withHandler:(id)arg2 ;
-(id)loadedImageForTime:(CGFloat)arg0 ;
-(void)cancelImageLoadingForIdentifiers:(id)arg0 ;
-(void)invalidate;


@end


#endif