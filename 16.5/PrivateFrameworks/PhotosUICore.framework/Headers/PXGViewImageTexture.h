// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGVIEWIMAGETEXTURE_H
#define PXGVIEWIMAGETEXTURE_H



#import "PXGImageTexture.h"

@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isOpaque;
}


@property (readonly, nonatomic) *CGImage imageRef; // ivar: _imageRef
@property (readonly, nonatomic) unsigned int orientation; // ivar: _orientation


-(BOOL)isOpaque;
-(NSInteger)estimatedByteSize;
-(id)initWithImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 ;
-(int)presentationType;
-(struct CGSize )pixelSize;
-(void)dealloc;


@end


#endif