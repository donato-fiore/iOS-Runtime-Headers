// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVIDEOEDITSOURCE_H
#define PLVIDEOEDITSOURCE_H

@class NSURL;


#import "PLEditSource.h"

@interface PLVideoEditSource : PLEditSource

@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(id)initWithVideoURL:(id)arg0 ;


@end


#endif