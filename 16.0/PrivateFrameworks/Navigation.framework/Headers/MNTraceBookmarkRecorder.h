// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEBOOKMARKRECORDER_H
#define MNTRACEBOOKMARKRECORDER_H


#import <Foundation/Foundation.h>

#import "MNTrace.h"

@interface MNTraceBookmarkRecorder : NSObject {
    MNTrace *_trace;
}




-(id)initWithTrace:(id)arg0 ;
-(void)recordBookmarkAtTime:(CGFloat)arg0 withScreenshotData:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif