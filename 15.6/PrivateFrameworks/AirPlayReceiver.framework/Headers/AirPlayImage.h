// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIRPLAYIMAGE_H
#define AIRPLAYIMAGE_H


#import <Foundation/Foundation.h>


@interface AirPlayImage : NSObject {
    CGSize _unadjustedSize;
    *CGImage _image;
    *void _ioSurface;
    int _imageOrientation;
    CGSize _scale;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) int imageOrientation;
@property (readonly, nonatomic) *void ioSurface;
@property (readonly, nonatomic) id *layerContents;
@property (nonatomic) CGSize scale;
@property (readonly, nonatomic) CGSize size;


-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 decode:(BOOL)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 decode:(BOOL)arg1 ;
-(struct CGAffineTransform )contentsTransformForLayer:(id)arg0 ;
-(struct CGSize )_unadjustedContentSize;
-(void)_setIOSurface:(*void)arg0 ;
-(void)dealloc;


@end


#endif