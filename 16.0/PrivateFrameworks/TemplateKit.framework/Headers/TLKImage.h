// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKIMAGE_H
#define TLKIMAGE_H

@class NSCache, UIImage;

#import <Foundation/Foundation.h>


@interface TLKImage : NSObject

@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSUInteger cornerRoundingStyle; // ivar: _cornerRoundingStyle
@property (retain) NSCache *imageCache; // ivar: _imageCache
@property (nonatomic) BOOL isTemplate; // ivar: _isTemplate
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) UIImage *uiImage; // ivar: _uiImage
@property (nonatomic) BOOL useFastPathShadow; // ivar: _useFastPathShadow


+(BOOL)imageIsSymbol:(id)arg0 ;
+(id)applyTintColor:(id)arg0 toImage:(id)arg1 ;
+(id)keyForScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;
+(id)templateImageForImage:(id)arg0 ;
-(id)cachedImageForScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;
-(id)init;
-(id)initWithImage:(id)arg0 ;
-(void)cacheImage:(id)arg0 forScale:(CGFloat)arg1 isDarkStyle:(BOOL)arg2 ;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif