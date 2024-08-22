// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOKITADJUSTEDLIVEPHOTOURLSREQUEST_H
#define _PXPHOTOKITADJUSTEDLIVEPHOTOURLSREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, PLPhotoEditRenderer, PHImageRequestOptions, NSString;



@interface _PXPhotoKitAdjustedLivePhotoURLsRequest : PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}


@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 pairingIdentifier:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(void)_handleExportFinishedWithImageURL:(id)arg0 videoURL:(id)arg1 error:(id)arg2 ;
-(void)_renderIfNeeded;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)start;


@end


#endif