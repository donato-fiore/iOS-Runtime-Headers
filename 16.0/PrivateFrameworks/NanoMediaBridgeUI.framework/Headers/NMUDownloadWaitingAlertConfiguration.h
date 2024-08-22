// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMUDOWNLOADWAITINGALERTCONFIGURATION_H
#define NMUDOWNLOADWAITINGALERTCONFIGURATION_H



#import "NMUKeepLocalAlertConfiguration.h"

@interface NMUDownloadWaitingAlertConfiguration : NMUKeepLocalAlertConfiguration



-(id)_downloadNowOnCellularActionWithOptions:(id)arg0 ;
-(id)_tryAgainWithOptions:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 status:(NSUInteger)arg1 downloadPauseReason:(NSUInteger)arg2 ;


@end


#endif