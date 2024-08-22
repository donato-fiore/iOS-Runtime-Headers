// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSLOGSTATECAPTUREENTRY_H
#define BSLOGSTATECAPTUREENTRY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BSLogStateCaptureEntry : NSObject

@property (readonly, copy, nonatomic) id *captureBlock; // ivar: _captureBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *title; // ivar: _title




@end


#endif