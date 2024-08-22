// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKFRAME_H
#define VKFRAME_H

@class VNImageRequestHandler;

#import <Foundation/Foundation.h>

#import "VKFrameInfo.h"

@interface VKFrame : NSObject

@property (readonly, nonatomic) *__CVBuffer CVImageBuffer;
@property (readonly, nonatomic) VNImageRequestHandler *imageRequestHandler;
@property (retain, nonatomic) VKFrameInfo *info; // ivar: _info




@end


#endif