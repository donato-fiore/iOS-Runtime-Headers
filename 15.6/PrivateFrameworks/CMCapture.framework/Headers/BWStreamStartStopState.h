// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTREAMSTARTSTOPSTATE_H
#define BWSTREAMSTARTSTOPSTATE_H

@class NSArray;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BWFigVideoCaptureStream.h"
#import "BWStreamStartStopState.h"

@interface BWStreamStartStopState : NSObject {
    BWFigVideoCaptureStream *_stream;
    NSObject<OS_dispatch_group> *_hasStartedGroup;
    BOOL _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> *_dependentsHaveStoppedGroup;
    BWStreamStartStopState *_blockingMasterState;
    NSArray *_blockingSlaveStates;
    float _timeoutInSeconds;
    BOOL _waitForMasterAEToSettle;
}




-(id)description;
-(void)dealloc;


@end


#endif