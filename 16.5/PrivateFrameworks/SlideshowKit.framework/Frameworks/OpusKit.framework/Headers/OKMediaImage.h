// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAIMAGE_H
#define OKMEDIAIMAGE_H


#import <Foundation/Foundation.h>


@interface OKMediaImage : NSObject {
    *CGImage _cgImageRef;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


+(id)mediaImageWithCGImage:(struct CGImage *)arg0 ;
+(id)mediaImageWithUIImage:(id)arg0 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 imageOrientation:(NSInteger)arg1 scale:(CGFloat)arg2 ;
-(id)initWithUIImage:(id)arg0 ;
-(struct CGImage *)createComposedImage:(BOOL)arg0 colorSpace:(id)arg1 ;
-(void)dealloc;


@end


#endif