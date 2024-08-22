// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUFAKEPROGRESS_H
#define OITSUFAKEPROGRESS_H

@protocol OS_dispatch_queue;


#import "OITSUBasicProgress.h"

@interface OITSUFakeProgress : OITSUBasicProgress {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _currentStage;
    NSUInteger _numberOfStages;
    BOOL _stopped;
}




-(id)initWithMaxValue:(CGFloat)arg0 numberOfStages:(NSUInteger)arg1 ;
-(void)advanceToStage:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)p_slowlyAdvanceToNextStage;
-(void)start;
-(void)stop;


@end


#endif