// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLEBUFFERREQUESTINTERNAL_H
#define AVSAMPLEBUFFERREQUESTINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVSampleCursor.h"

@interface AVSampleBufferRequestInternal : NSObject {
    AVSampleCursor *startCursor;
    NSInteger direction;
    AVSampleCursor *limitCursor;
    NSInteger preferredMinSampleCount;
    NSInteger maxSampleCount;
    NSInteger mode;
    ? overrideTime;
}






@end


#endif