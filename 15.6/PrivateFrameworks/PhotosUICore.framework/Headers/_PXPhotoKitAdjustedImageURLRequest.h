// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOKITADJUSTEDIMAGEURLREQUEST_H
#define _PXPHOTOKITADJUSTEDIMAGEURLREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, PLPhotoEditRenderer, PHImageRequestOptions, NSString;



@interface _PXPhotoKitAdjustedImageURLRequest : PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
}


@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 pairingIdentifier:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(void)_handleExportFinished:(id)arg0 ;
-(void)_renderIfNeeded;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)start;


@end


#endif