// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUTOBUGCAPTUREREPORTER_H
#define HDAUTOBUGCAPTUREREPORTER_H


#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDAutoBugCaptureReporter : NSObject

@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (copy, nonatomic) id *unitTesting_didReportHandler; // ivar: _unitTesting_didReportHandler


+(void)reportNotFinalSeriesSampleWithClass:(Class)arg0 count:(NSInteger)arg1 datumCount:(NSInteger)arg2 reason:(id)arg3 ;
-(id)initWithDaemon:(id)arg0 ;
-(void)reportApplyDataFailure:(Class)arg0 duringSyncFromStore:(id)arg1 error:(id)arg2 ;
-(void)reportCorruptionForDatabase:(id)arg0 resultCode:(int)arg1 ;
-(void)reportDataCollectionSeriesProblem:(id)arg0 quantityType:(id)arg1 ;
-(void)reportDatabaseMigrationFailureWithContext:(id)arg0 ;
-(void)reportJournalFailureWithErrorDescription:(id)arg0 provenance:(id)arg1 error:(id)arg2 ;
-(void)reportMissingSource:(id)arg0 duringSyncFromStore:(id)arg1 ;
-(void)reportQueryDurationWithServer:(id)arg0 dataCount:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)reportSummarySharingInvitationFailureForOperation:(id)arg0 error:(id)arg1 ;


@end


#endif