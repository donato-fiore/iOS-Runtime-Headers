// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEORETIMER_H
#define HMIVIDEORETIMER_H

@class NSString;
@protocol HMFLogging, HMIVideoRetimerDelegate;


#import "HMIVideoProcessingNode.h"

@interface HMIVideoRetimer : HMIVideoProcessingNode <HMFLogging>

 {
    *opaqueCMSampleBuffer _lastSample;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoRetimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)flushWithNextSamplePTS:(struct ? )arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif