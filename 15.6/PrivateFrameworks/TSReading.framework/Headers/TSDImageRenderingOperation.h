// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDIMAGERENDERINGOPERATION_H
#define TSDIMAGERENDERINGOPERATION_H



#import "TSDSwatchRenderingOperation.h"
#import "TSDImageInfo.h"

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation {
    BOOL mShouldClipVertically;
}


@property (retain) TSDImageInfo *imageInfo; // ivar: mImageInfo


-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 imageInfo:(id)arg4 documentRoot:(id)arg5 ;
-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 imageInfo:(id)arg4 documentRoot:(id)arg5 shouldClipVertically:(BOOL)arg6 ;
-(void)dealloc;
-(void)doWorkWithReadLock;


@end


#endif