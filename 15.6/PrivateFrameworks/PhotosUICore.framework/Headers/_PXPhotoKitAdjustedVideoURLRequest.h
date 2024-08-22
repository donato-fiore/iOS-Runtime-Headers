// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOKITADJUSTEDVIDEOURLREQUEST_H
#define _PXPHOTOKITADJUSTEDVIDEOURLREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, PLPhotoEditRenderer, PHVideoRequestOptions, NSString;



@interface _PXPhotoKitAdjustedVideoURLRequest : PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}


@property (readonly, nonatomic) PHVideoRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 pairingIdentifier:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(void)_handleExportFinished:(BOOL)arg0 error:(id)arg1 videoURL:(id)arg2 ;
-(void)_renderIfNeeded;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)start;


@end


#endif