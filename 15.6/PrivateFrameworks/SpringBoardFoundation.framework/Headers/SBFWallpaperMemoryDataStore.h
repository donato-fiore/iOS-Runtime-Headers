// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFWALLPAPERMEMORYDATASTORE_H
#define SBFWALLPAPERMEMORYDATASTORE_H

@class NSMutableDictionary, NSString;
@protocol SBFWallpaperDataStore, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>

 {
    NSMutableDictionary *_images;
    NSMutableDictionary *_originalImages;
    NSMutableDictionary *_thumbnails;
    NSMutableDictionary *_hashes;
    NSMutableDictionary *_proceduralInfo;
    NSMutableDictionary *_videoURLs;
    NSMutableDictionary *_originalVideoURLs;
    NSMutableDictionary *_wallpaperOptions;
    NSMutableDictionary *_colors;
    NSMutableDictionary *_colorNames;
    NSMutableDictionary *_gradients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfStoredImages;
@property (readonly) Class superclass;


-(BOOL)hasWallpaperImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(BOOL)setOriginalVideoURL:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setProceduralWallpaperInfo:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setVideoURL:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperColor:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperImage:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperImageHashData:(id)arg0 forVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperOptions:(id)arg0 forVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperOriginalImage:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperThumbnailData:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)proceduralWallpaperInfoForVariant:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unverifiedVideoURLForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)verifiedOriginalVideoURLForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)verifiedVideoURLForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperColorForVariant:(NSInteger)arg0 ;
-(id)wallpaperColorNameForVariant:(NSInteger)arg0 ;
-(id)wallpaperGradientForVariant:(NSInteger)arg0 ;
-(id)wallpaperImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperImageHashDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperOptionsForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperOriginalImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperThumbnailDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(void)moveWallpaperImageDataTypes:(NSUInteger)arg0 fromVariant:(NSInteger)arg1 toVariant:(NSInteger)arg2 ;
-(void)removeProceduralWallpaperForVariants:(NSInteger)arg0 ;
-(void)removeVideoForVariant:(NSInteger)arg0 ;
-(void)removeWallpaperColorForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperGradientForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperImageDataTypes:(NSUInteger)arg0 forVariants:(NSInteger)arg1 ;
-(void)removeWallpaperImageHashDataForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperOptionsForVariants:(NSInteger)arg0 ;


@end


#endif