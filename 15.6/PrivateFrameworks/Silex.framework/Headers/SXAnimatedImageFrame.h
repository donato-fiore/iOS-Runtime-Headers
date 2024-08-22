// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXANIMATEDIMAGEFRAME_H
#define SXANIMATEDIMAGEFRAME_H


#import <Foundation/Foundation.h>

#import "SXAnimatedImageViewCache.h"

@interface SXAnimatedImageFrame : NSObject {
    SXAnimatedImageViewCache *_cache;
    *CGImageSource _imageSource;
    CGFloat _duration;
    NSUInteger _index;
    NSInteger _imageType;
}




-(void)dealloc;


@end


#endif