// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLANIMATEDIMAGE_H
#define QLANIMATEDIMAGE_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "QLImageData.h"

@interface QLAnimatedImage : NSObject {
    QLImageData *_imageData;
    NSUInteger _durationsCount;
    *QLFrameDurationInformation _durations;
    CGFloat _duration;
    UIImage *_lastImage;
    NSUInteger _lastImageIndex;
}




-(BOOL)time:(CGFloat)arg0 belongsToIndex:(NSUInteger)arg1 ;
-(CGFloat)duration;
-(NSInteger)indexForTime:(CGFloat)arg0 ;
-(NSUInteger)frameCount;
-(id)frameAtTime:(CGFloat)arg0 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(void)dealloc;
-(void)generateDurations;


@end


#endif