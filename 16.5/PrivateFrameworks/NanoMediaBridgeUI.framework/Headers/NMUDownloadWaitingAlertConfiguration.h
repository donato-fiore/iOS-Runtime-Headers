// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMUDOWNLOADWAITINGALERTCONFIGURATION_H
#define NMUDOWNLOADWAITINGALERTCONFIGURATION_H



#import "NMUKeepLocalAlertConfiguration.h"

@interface NMUDownloadWaitingAlertConfiguration : NMUKeepLocalAlertConfiguration

@property (nonatomic) NSUInteger reason; // ivar: _reason


-(id)_downloadNowOnCellularActionWithOptions:(id)arg0 ;
-(id)_tryAgainWithOptions:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 status:(NSUInteger)arg1 downloadPauseReason:(NSUInteger)arg2 options:(id)arg3 ;


@end


#endif