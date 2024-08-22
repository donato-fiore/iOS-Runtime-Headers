// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMESSAGEEVENTDISSECTORTRIALCLIENTWRAPPER_H
#define SGMESSAGEEVENTDISSECTORTRIALCLIENTWRAPPER_H

@class _PASLock;


#import "SGTrialClientWrapper.h"

@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(id)eventClassifierModelPath;
-(id)eventClassifierThreshold;
-(id)eventExtractionAssetsPath;
-(id)init;
-(id)messageProcessingLimit;
-(id)rateLimitInterval;
-(void)updateFactors;


@end


#endif