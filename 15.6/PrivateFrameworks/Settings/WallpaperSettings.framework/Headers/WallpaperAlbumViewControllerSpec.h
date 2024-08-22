// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WALLPAPERALBUMVIEWCONTROLLERSPEC_H
#define WALLPAPERALBUMVIEWCONTROLLERSPEC_H

@class PUPhotosGridViewControllerSpec;

#import <Foundation/Foundation.h>


@interface WallpaperAlbumViewControllerSpec : NSObject

@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // ivar: _gridSpec


-(id)init;
-(void)configureCollectionViewGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureFactoryGridLayout:(id)arg0 forWidth:(CGFloat)arg1 andThumbnailSize:(struct CGSize )arg2 ;


@end


#endif