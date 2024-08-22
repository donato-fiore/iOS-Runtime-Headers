// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSYNCTELEMETRYREPORTERINTERNAL_H
#define IMDSYNCTELEMETRYREPORTERINTERNAL_H


#import <Foundation/Foundation.h>


@interface IMDSyncTelemetryReporterInternal : NSObject {
    ? reportingQueue;
    ? reporter;
}




-(BOOL)postMessage:(id)arg0 category:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif