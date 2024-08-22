// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBLOGSTATECAPTUREENTRY_H
#define RBLOGSTATECAPTUREENTRY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RBLogStateCaptureEntry : NSObject {
    NSString *_title;
    id *_captureBlock;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif