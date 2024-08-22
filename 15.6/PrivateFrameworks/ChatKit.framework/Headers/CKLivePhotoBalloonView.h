// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLIVEPHOTOBALLOONVIEW_H
#define CKLIVEPHOTOBALLOONVIEW_H

@class PHLivePhoto, PHLivePhotoView;


#import "CKImageBalloonView.h"

@interface CKLivePhotoBalloonView : CKImageBalloonView {
    BOOL _isIrisAsset;
}


@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (retain, nonatomic) PHLivePhotoView *livePhotoView; // ivar: _livePhotoView


-(BOOL)isIrisAsset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)setIsIrisAsset:(BOOL)arg0 ;


@end


#endif