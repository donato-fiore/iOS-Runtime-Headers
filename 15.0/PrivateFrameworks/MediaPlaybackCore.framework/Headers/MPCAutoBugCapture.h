// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCAUTOBUGCAPTURE_H
#define MPCAUTOBUGCAPTURE_H


#import <Foundation/Foundation.h>


@interface MPCAutoBugCapture : NSObject



+(BOOL)_isReporterEnabled;
+(void)snapshotWithType:(id)arg0 subType:(id)arg1 context:(id)arg2 triggerThresholdValues:(id)arg3 events:(id)arg4 ;


@end


#endif