// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKWATCHFACEIMAGEBALLOONVIEW_H
#define CKWATCHFACEIMAGEBALLOONVIEW_H

@class LPLinkMetadata;


#import "CKLinkBalloonView.h"

@interface CKWatchfaceImageBalloonView : CKLinkBalloonView {
    BOOL _isIrisAsset;
}


@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata


-(BOOL)isIrisAsset;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setIsIrisAsset:(BOOL)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif