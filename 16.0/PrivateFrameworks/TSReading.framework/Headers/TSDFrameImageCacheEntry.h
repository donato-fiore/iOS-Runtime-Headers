// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFRAMEIMAGECACHEENTRY_H
#define TSDFRAMEIMAGECACHEENTRY_H


#import <Foundation/Foundation.h>

#import "TSDFrameSpec.h"

@interface TSDFrameImageCacheEntry : NSObject {
    ? mImages;
}


@property (nonatomic) CGFloat assetScale; // ivar: mAssetScale
@property (nonatomic) TSDFrameSpec *frameSpec; // ivar: mFrameSpec
@property (nonatomic) CGSize size; // ivar: mSize
@property (nonatomic) CGFloat viewScale; // ivar: mViewScale


-(struct CGImage *)newImageForCALayer:(BOOL)arg0 mask:(BOOL)arg1 ;
-(void)dealloc;
-(void)setImage:(struct CGImage *)arg0 forCALayer:(BOOL)arg1 mask:(BOOL)arg2 ;


@end


#endif