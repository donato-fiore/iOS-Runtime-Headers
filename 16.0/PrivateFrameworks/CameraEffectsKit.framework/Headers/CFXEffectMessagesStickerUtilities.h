// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXEFFECTMESSAGESSTICKERUTILITIES_H
#define CFXEFFECTMESSAGESSTICKERUTILITIES_H


#import <Foundation/Foundation.h>


@interface CFXEffectMessagesStickerUtilities : NSObject



+(NSInteger)numberOfStickersForEffectTypeId:(id)arg0 ;
+(id)animatedPreviewFileNameForOverlayID:(id)arg0 ;
+(id)animatedPreviewsDirectory;
+(id)overlayIDFromAnimatedPreviewFileName:(id)arg0 ;
+(id)stickerPropertiesForIndex:(NSInteger)arg0 forEffectTypeId:(id)arg1 ;
+(struct CGSize )JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(NSInteger)arg0 ;
+(void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)arg0 atStickerSize:(NSInteger)arg1 previewDuration:(CGFloat)arg2 previewFrameRate:(NSUInteger)arg3 previewCompletedBlock:(id)arg4 ;


@end


#endif