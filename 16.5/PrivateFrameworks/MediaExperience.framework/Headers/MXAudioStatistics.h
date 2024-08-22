// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXAUDIOSTATISTICS_H
#define MXAUDIOSTATISTICS_H


#import <Foundation/Foundation.h>


@interface MXAudioStatistics : NSObject {
    *unk mSendSingleMessage;
}




+(id)sharedInstance;
-(id)initInternal;
-(void)sendSinglePerformanceMessageForRoutine:(char *)arg0 operationTime:(NSInteger)arg1 details:(id)arg2 ;


@end


#endif