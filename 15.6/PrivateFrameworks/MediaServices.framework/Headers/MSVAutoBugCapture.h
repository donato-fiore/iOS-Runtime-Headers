// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVAUTOBUGCAPTURE_H
#define MSVAUTOBUGCAPTURE_H


#import <Foundation/Foundation.h>


@interface MSVAutoBugCapture : NSObject



+(BOOL)_isReporterEnabled;
+(void)snapshotWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 context:(id)arg3 triggerThresholdValues:(id)arg4 events:(id)arg5 ;


@end


#endif