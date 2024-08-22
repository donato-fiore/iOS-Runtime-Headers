// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUIMAGE_H
#define OITSUIMAGE_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "TSUOnce.h"

@interface OITSUImage : NSObject {
    *CGImage mCachedSliceableImage;
    *__CFDictionary mImageSlices;
    TSUOnce *mImageSlicesOnce;
    id *mCachedSystemImage;
    TSUOnce *mCachedImageOnce;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)imageNamed:(id)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
+(id)imageWithContentsOfFile:(id)arg0 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithUIImage:(id)arg0 ;
+(id)noisePatternWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 factor:(CGFloat)arg2 ;
-(BOOL)isEmpty;
-(id)JPEGRepresentationWithCompressionQuality:(CGFloat)arg0 ;
-(id)PNGRepresentation;
-(id)TIFFRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithImageSourceRef:(struct CGImageSource *)arg0 ;
-(id)initWithUIImage:(id)arg0 ;
-(id)stretchedImageOfSize:(struct CGSize )arg0 leftCapWidth:(CGFloat)arg1 rightCapWidth:(CGFloat)arg2 topCapHeight:(CGFloat)arg3 bottomCapHeight:(CGFloat)arg4 ;
-(struct CGImage *)CGImageForContentsScale:(CGFloat)arg0 ;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 stretchingCenterWidthBy:(CGFloat)arg2 ;
-(void)drawInRect:(struct CGRect )arg0 fromRect:(struct CGRect )arg1 isFlipped:(BOOL)arg2 ;


@end


#endif