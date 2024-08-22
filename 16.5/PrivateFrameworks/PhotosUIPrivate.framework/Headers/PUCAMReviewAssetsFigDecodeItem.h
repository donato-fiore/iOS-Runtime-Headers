// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCAMREVIEWASSETSFIGDECODEITEM_H
#define PUCAMREVIEWASSETSFIGDECODEITEM_H

@class PLFigPreheatItem;
@protocol PUReviewAssetCancelableMediaRequest;



@interface PUCAMReviewAssetsFigDecodeItem : PLFigPreheatItem <PUReviewAssetCancelableMediaRequest>





-(id)decodeSessionOptions;
-(id)initWithImageURL:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(void)cancelRequest;


@end


#endif