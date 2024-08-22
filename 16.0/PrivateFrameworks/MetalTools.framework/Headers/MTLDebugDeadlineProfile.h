// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGDEADLINEPROFILE_H
#define MTLDEBUGDEADLINEPROFILE_H



#import "MTLToolsDeadlineProfile.h"
#import "MTLDebugCommandQueue.h"

@interface MTLDebugDeadlineProfile : MTLToolsDeadlineProfile {
    MTLDebugCommandQueue *_commandQueue;
}




-(void)validateCommandQueue:(id)arg0 ;


@end


#endif