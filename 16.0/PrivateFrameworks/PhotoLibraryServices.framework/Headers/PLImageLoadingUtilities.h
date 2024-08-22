// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLIMAGELOADINGUTILITIES_H
#define PLIMAGELOADINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLImageLoadingUtilities : NSObject



+(?)synchronousImageForAsset:(?)arg0 withFormat:(?)arg1 allowPlaceholder:(?)arg2 optimalSourcePixelSize:(?)arg3 networkAccessAllowed:(?)arg4 networkAccessForced:(?)arg5 trackCPLDownload:(?)arg6 outImageProperties:(?)arg7 outImageDataInfooutCPLDownloadContext;
+(BOOL)canAccessImageForAsset:(id)arg0 ;
+(id)synchronousImageForAsset:(id)arg0 withFormat:(unsigned short)arg1 allowPlaceholder:(BOOL)arg2 outImageProperties:(struct __CFDictionary **)arg3 outDeliveredPlaceholder:(*BOOL)arg4 ;
// +(void)_assetsdImageForAsset:(id)arg0 withFormat:(id)arg1 allowPlaceholder:(BOOL)arg2 optimalSourcePixelSize:(struct CGSize )arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 sync:(BOOL)arg6 isCanceledHandler:(id)arg7 completion:(unk)arg8  ;
// +(void)imageForAsset:(id)arg0 withFormat:(unsigned short)arg1 allowPlaceholder:(BOOL)arg2 optimalSourcePixelSize:(struct CGSize )arg3 networkAccessAllowed:(BOOL)arg4 networkAccessForced:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 isCanceledHandler:(id)arg7 completion:(unk)arg8 sync:(id)arg9  ;


@end


#endif