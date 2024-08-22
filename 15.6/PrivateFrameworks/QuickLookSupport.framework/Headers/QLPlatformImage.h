// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPLATFORMIMAGE_H
#define QLPLATFORMIMAGE_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface QLPlatformImage : NSObject {
    *CGImage _cgImage;
}


@property *CGImage CGImage;
@property (readonly) UIImage *UIImage;
@property (copy, nonatomic) id *cleanupDataBlock; // ivar: _cleanupDataBlock
@property unsigned int orientation; // ivar: _orientation
@property CGFloat scale; // ivar: _scale
@property CGSize size; // ivar: _size


+(id)imageWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(unsigned int)arg2 ;
+(id)imageWithUIImage:(id)arg0 ;
-(void)dealloc;


@end


#endif