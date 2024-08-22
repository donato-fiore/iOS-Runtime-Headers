// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIIMAGE_H
#define SEARCHUIIMAGE_H

@class SFImage, UIImage;



@interface SearchUIImage : SFImage

@property (readonly) CGFloat aspectRatio;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;
@property (nonatomic) BOOL needsTinting; // ivar: _needsTinting
@property (readonly, nonatomic) SFImage *sfImage; // ivar: _sfImage
@property (retain, nonatomic) UIImage *uiImage; // ivar: _uiImage
@property (nonatomic) BOOL useFastPathShadow; // ivar: _useFastPathShadow


+(id)imageWithSFImage:(id)arg0 ;
+(id)imageWithSFImage:(id)arg0 variantForAppIcon:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemplate;
-(BOOL)shouldCropToCircle;
-(CGFloat)cornerRadius;
-(CGFloat)scale;
-(NSUInteger)hash;
-(id)imageData;
-(id)initWithImage:(id)arg0 ;
-(id)initWithSFImage:(id)arg0 ;
-(id)loadImageWithImageData:(id)arg0 scale:(CGFloat)arg1 isDarkStyle:(BOOL)arg2 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;
-(int)cornerRoundingStyle;
-(struct CGSize )size;
-(void)decodeImageData:(id)arg0 scale:(CGFloat)arg1 isDarkStyle:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif