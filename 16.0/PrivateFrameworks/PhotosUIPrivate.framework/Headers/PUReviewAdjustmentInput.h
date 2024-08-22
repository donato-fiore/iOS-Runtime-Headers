// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWADJUSTMENTINPUT_H
#define PUREVIEWADJUSTMENTINPUT_H

@class NSURL, UIImage, NSData;

#import <Foundation/Foundation.h>


@interface PUReviewAdjustmentInput : NSObject

@property (nonatomic, setter=_setBaseImageVersion:) NSInteger adjustmentBaseVersion; // ivar: _adjustmentBaseVersion
@property (nonatomic, setter=_setBaseImageFileURL:) NSURL *baseImageFileURL; // ivar: _baseImageFileURL
@property (nonatomic, setter=_setBaseVideoFileURL:) NSURL *baseVideoFileURL; // ivar: _baseVideoFileURL
@property (retain, nonatomic, setter=_setCurrentPreviewImage:) UIImage *currentPreviewImage; // ivar: _currentPreviewImage
@property (retain, nonatomic, setter=_setKnownAdjustmentData:) NSData *knownAdjustmentData; // ivar: _knownAdjustmentData




@end


#endif