// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPOWERLOGREPORTER_H
#define BRCPOWERLOGREPORTER_H

@class NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"

@interface BRCPowerLogReporter : NSObject {
    BRCAccountSession *_session;
    NSMutableDictionary *_deepScanReasonsToReport;
    NSObject<OS_dispatch_source> *_reporterTimer;
    NSObject<OS_dispatch_queue> *_reporterQueue;
}




-(CGFloat)statsReportInterval;
-(CGFloat)timeUntilNextReport;
-(id)initWithSession:(id)arg0 ;
-(void)_reportStats;
-(void)reportDeepScanReason:(id)arg0 forAppLibraryID:(id)arg1 ;


@end


#endif