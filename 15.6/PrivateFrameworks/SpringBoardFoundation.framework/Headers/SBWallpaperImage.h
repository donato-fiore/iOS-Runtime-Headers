// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWALLPAPERIMAGE_H
#define SBWALLPAPERIMAGE_H

@class UIImage, NSURL;



@interface SBWallpaperImage : UIImage

@property (readonly, copy, nonatomic) NSURL *wallpaperFileURL; // ivar: _wallpaperFileURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 wallpaperFileURL:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlatColor:(id)arg0 ;
-(id)initWithFlatColor:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif