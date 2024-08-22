// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUCGIMAGE_H
#define OITSUCGIMAGE_H



#import "OITSUImage.h"

@interface OITSUCGImage : OITSUImage {
    *CGImage mCGImage;
    NSInteger mOrientation;
    CGFloat mScale;
}




-(CGFloat)scale;
-(NSInteger)imageOrientation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
-(struct CGImage *)CGImage;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 ;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif