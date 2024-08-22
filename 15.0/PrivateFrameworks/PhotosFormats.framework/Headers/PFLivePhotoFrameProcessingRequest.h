// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLIVEPHOTOFRAMEPROCESSINGREQUEST_H
#define PFLIVEPHOTOFRAMEPROCESSINGREQUEST_H

@class CIImage;

#import <Foundation/Foundation.h>


@interface PFLivePhotoFrameProcessingRequest : NSObject

@property (retain, nonatomic) CIImage *image; // ivar: _image
@property (nonatomic) CGFloat renderScale; // ivar: _renderScale
@property (nonatomic) ? time; // ivar: _time
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif