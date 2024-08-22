// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWALLPAPERVIEW_H
#define HUWALLPAPERVIEW_H

@class UIImageView, UIImage, CAGradientLayer, HFWallpaper;
@protocol HFHomeKitObject><HMApplicationData;



@interface HUWallpaperView : UIImageView

@property (retain, nonatomic) UIImage *currentImage; // ivar: _currentImage
@property (retain, nonatomic) CAGradientLayer *currentLayer; // ivar: _currentLayer
@property (nonatomic) BOOL disableWallpaperUpdate; // ivar: _disableWallpaperUpdate
@property (retain, nonatomic) NSObject<HFHomeKitObject><HMApplicationData> *hkObject; // ivar: _hkObject
@property (retain, nonatomic) HFWallpaper *wallpaper; // ivar: _wallpaper


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)refreshWallpaperForHomeKitObject:(id)arg0 withAnimation:(BOOL)arg1 ;
-(void)populateWallpaper:(id)arg0 withAnimation:(BOOL)arg1 onlyIfNeeded:(BOOL)arg2 ;


@end


#endif