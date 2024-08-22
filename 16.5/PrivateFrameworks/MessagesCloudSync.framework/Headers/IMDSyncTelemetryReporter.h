// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSYNCTELEMETRYREPORTER_H
#define IMDSYNCTELEMETRYREPORTER_H


#import <Foundation/Foundation.h>

#import "IMDSyncTelemetryReporterInternal.h"

@interface IMDSyncTelemetryReporter : NSObject {
    IMDSyncTelemetryReporterInternal *_telemetryReporter;
}




-(id)init;
-(void)postMessage:(id)arg0 category:(NSInteger)arg1 ;


@end


#endif