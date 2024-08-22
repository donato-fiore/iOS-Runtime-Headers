// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PREVIEWSFOUNDATION19CRASHREPORTLISTENER_H
#define _TTC18PREVIEWSFOUNDATION19CRASHREPORTLISTENER_H

@protocol OSADiagnosticObserver;

#import <Foundation/Foundation.h>


@interface _TtC18PreviewsFoundation19CrashReportListener : NSObject <OSADiagnosticObserver>

 {
    ? types;
    ? state;
}




-(id)init;
-(void)didWriteDiagnosticLog:(id)arg0 logId:(id)arg1 logFilePath:(id)arg2 logInfo:(id)arg3 error:(id)arg4 ;
-(void)willWriteDiagnosticLog:(id)arg0 logId:(id)arg1 logInfo:(id)arg2 ;


@end


#endif