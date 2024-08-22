// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMESSAGEEVENTDISSECTORTRIALCLIENTWRAPPERGUARDEDDATA_H
#define SGMESSAGEEVENTDISSECTORTRIALCLIENTWRAPPERGUARDEDDATA_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface SGMessageEventDissectorTrialClientWrapperGuardedData : NSObject {
    NSString *_trialEventExtractionAssetsPath;
    NSString *_trialEventClassifierModelPath;
    NSNumber *_trialEventClassifierThreshold;
    NSNumber *_trialMessageProcessingLimit;
    NSNumber *_trialRateLimitInterval;
}






@end


#endif