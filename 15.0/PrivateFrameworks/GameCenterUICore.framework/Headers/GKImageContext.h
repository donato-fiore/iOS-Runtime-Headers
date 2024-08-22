// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKIMAGECONTEXT_H
#define GKIMAGECONTEXT_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface GKImageContext : NSObject

@property (readonly, nonatomic) *CGContext CGContext; // ivar: _CGContext
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size


+(id)contextDrawnWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3 ;
+(id)imageDrawnWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3 ;
+(id)imageFromRawPixelsAtURL:(id)arg0 ;
-(BOOL)writeRawPixelsToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(unsigned int)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(unsigned int)arg2 data:(*void)arg3 ;
-(void)dealloc;


@end


#endif