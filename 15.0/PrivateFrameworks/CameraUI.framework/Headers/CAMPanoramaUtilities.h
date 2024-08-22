// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPANORAMAUTILITIES_H
#define CAMPANORAMAUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMPanoramaUtilities : NSObject



+(CGFloat)singlePreviewFrameWidthForPreviewHeight:(CGFloat)arg0 ;
+(struct CGSize )bufferSize;
+(struct CGSize )defaultPreviewSize;
+(struct CGSize )panoramaViewSizeForCaptureSize:(struct CGSize )arg0 availableWidth:(CGFloat)arg1 layoutStyle:(NSInteger)arg2 ;
+(struct CGSize )previewStripSizeForCaptureSize:(struct CGSize )arg0 availableWidth:(CGFloat)arg1 layoutStyle:(NSInteger)arg2 ;
+(struct UIEdgeInsets )panoramaViewLayoutInsetsForLayoutStyle:(NSInteger)arg0 ;
+(struct UIEdgeInsets )panoramaViewPreviewStripInsetsForLayoutStyle:(NSInteger)arg0 ;


@end


#endif