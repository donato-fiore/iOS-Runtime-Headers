// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREVIEWADJUSTMENTOUTPUT_H
#define PUREVIEWADJUSTMENTOUTPUT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PUReviewAdjustmentOutput : NSObject

@property (nonatomic, setter=_setAdjustmentInputBaseVersion:) NSInteger _adjustmentInputBaseVersion; // ivar: __adjustmentInputBaseVersion
@property (retain, nonatomic, setter=_setBaseImageURL:) NSURL *_baseImageURL; // ivar: __baseImageURL
@property (retain, nonatomic, setter=_setBaseVideoURL:) NSURL *_baseVideoURL; // ivar: __baseVideoURL
@property (retain, nonatomic, setter=_setRenderedImageFileURL:) NSURL *renderedImageFileURL; // ivar: _renderedImageFileURL
@property (retain, nonatomic, setter=_setRenderedVideoFileURL:) NSURL *renderedVideoFileURL; // ivar: _renderedVideoFileURL




@end


#endif