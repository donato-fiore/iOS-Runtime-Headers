// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTERLEGACYASSET_H
#define PUWALLPAPERPOSTERLEGACYASSET_H

@class NSString, NSArray, NSURL;
@protocol PFParallaxAsset;

#import <Foundation/Foundation.h>


@interface PUWallpaperPosterLegacyAsset : NSObject <PFParallaxAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) *CGImage proxyImage; // ivar: _proxyImage
@property (readonly, nonatomic) NSURL *segmentationResourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;


-(id)initWithProxyImage:(struct CGImage *)arg0 ;
-(int)loadParallaxResource:(NSInteger)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)loadPetsRegions:(id)arg0 ;
-(void)cancelParallaxResourceRequest:(int)arg0 ;
-(void)cancelPetsRegionsRequest:(int)arg0 ;
-(void)updateSegmentationResource:(id)arg0 ;


@end


#endif