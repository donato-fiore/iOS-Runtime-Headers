// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRASHREPORTOUTLET_H
#define CRASHREPORTOUTLET_H



#import "CaseReportOutlet.h"

@interface CrashReportOutlet : CaseReportOutlet



-(BOOL)publishReportForCase:(id)arg0 options:(id)arg1 ;
-(id)descriptiveFilenameWithPrefix:(id)arg0 domain:(id)arg1 process:(id)arg2 ;


@end


#endif