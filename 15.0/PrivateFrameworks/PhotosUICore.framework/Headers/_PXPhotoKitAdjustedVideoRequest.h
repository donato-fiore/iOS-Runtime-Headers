// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPHOTOKITADJUSTEDVIDEOREQUEST_H
#define _PXPHOTOKITADJUSTEDVIDEOREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, PLPhotoEditRenderer, PHVideoRequestOptions;



@interface _PXPhotoKitAdjustedVideoRequest : PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}


@property (readonly, nonatomic) PHVideoRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 imageManager:(id)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(void)_handlePlayerItem:(id)arg0 error:(id)arg1 ;
-(void)_renderIfNeeded;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)start;


@end


#endif