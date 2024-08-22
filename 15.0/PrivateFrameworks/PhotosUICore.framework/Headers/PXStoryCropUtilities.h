// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCROPUTILITIES_H
#define PXSTORYCROPUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXStoryCropUtilities : NSObject



+(struct CGRect )suggestedCropWithAspectRatio:(CGFloat)arg0 forAssetWithSize:(struct CGSize )arg1 faceCount:(NSInteger)arg2 faceRects:(struct CGRect *)arg3 featuredFaceCount:(NSInteger)arg4 ;


@end


#endif