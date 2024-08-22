// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMOVIERENDERINGOPERATION_H
#define TSDMOVIERENDERINGOPERATION_H



#import "TSDSwatchRenderingOperation.h"
#import "TSDMovieInfo.h"

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {
    BOOL mShouldClipVertically;
}


@property (retain) TSDMovieInfo *movieInfo; // ivar: mMovieInfo


-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 movieInfo:(id)arg4 documentRoot:(id)arg5 ;
-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 movieInfo:(id)arg4 documentRoot:(id)arg5 shouldClipVertically:(BOOL)arg6 ;
-(void)dealloc;
-(void)doWorkWithReadLock;


@end


#endif