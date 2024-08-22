// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAVISIONSERVICEFACEPROCESSINGWORKERJOBKEEPALIVE_H
#define PHAVISIONSERVICEFACEPROCESSINGWORKERJOBKEEPALIVE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHAWorkerJob.h"

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}




-(id)initWithJob:(id)arg0 ;
-(id)job;
-(void)_extendTimeoutAndDispatchAgainIfNecessary;
-(void)start;
-(void)stop;


@end


#endif