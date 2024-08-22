// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JTIMAGE_H
#define JTIMAGE_H

@class UIImage, PVImageBuffer;

#import <Foundation/Foundation.h>


@interface JTImage : NSObject

@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) PVImageBuffer *pvImageBuffer; // ivar: _pvImageBuffer


+(id)jtImageWithUIImage:(id)arg0 ;
-(BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
-(id)bluredImageWithFlippedXAxis:(BOOL)arg0 ;
-(id)initWithPVImage:(id)arg0 ;
-(id)initWithUIImage:(id)arg0 ;


@end


#endif