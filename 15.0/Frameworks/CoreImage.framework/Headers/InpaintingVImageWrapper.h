// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INPAINTINGVIMAGEWRAPPER_H
#define INPAINTINGVIMAGEWRAPPER_H


#import <Foundation/Foundation.h>


@interface InpaintingVImageWrapper : NSObject {
    BOOL freeWhenDone;
    int _bpp;
}


@property (readonly, getter=getBytesPerPixel) int bytesPerPixel;
@property (readonly, getter=getBytesPerRow) int bytesPerRow;
@property (readonly, getter=getData) *void data;
@property (readonly, getter=getHeight) int height;
@property (readonly) *vImage_Buffer image; // ivar: _image
@property (readonly, getter=getWidth) int width;


+(id)createVImageWrapperForProcessorInput:(id)arg0 thatMatchesOutput:(id)arg1 ;
+(id)vImageWrapperByCroppingWrapper:(id)arg0 toRect:(struct CGRect )arg1 ;
-(id)initWithShapeOf:(id)arg0 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 bpp:(int)arg2 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 bpp:(int)arg2 bpr:(int)arg3 bytes:(*void)arg4 freeBytesWhenDone:(BOOL)arg5 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 bpp:(int)arg2 bytes:(*void)arg3 freeBytesWhenDone:(BOOL)arg4 ;
-(void)dealloc;
-(void)free;


@end


#endif