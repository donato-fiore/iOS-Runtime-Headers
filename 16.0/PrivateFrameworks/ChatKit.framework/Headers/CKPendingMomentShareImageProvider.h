// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPENDINGMOMENTSHAREIMAGEPROVIDER_H
#define CKPENDINGMOMENTSHAREIMAGEPROVIDER_H

@class PXUIMediaProvider;



@interface CKPendingMomentShareImageProvider : PXUIMediaProvider



-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif