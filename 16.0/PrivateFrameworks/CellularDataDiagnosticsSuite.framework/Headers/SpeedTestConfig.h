// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPEEDTESTCONFIG_H
#define SPEEDTESTCONFIG_H

@class NPTPerformanceTest;

#import <Foundation/Foundation.h>


@interface SpeedTestConfig : NSObject {
    BOOL inProgress;
    NPTPerformanceTest *performanceTest;
}




-(BOOL)inProgress;
-(id)init;
-(void)abort;
-(void)dealloc;
-(void)startDownloadTest:(id)arg0 ;


@end


#endif