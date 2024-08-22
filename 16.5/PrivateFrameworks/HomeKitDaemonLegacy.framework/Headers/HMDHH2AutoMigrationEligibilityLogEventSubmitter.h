// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2AUTOMIGRATIONELIGIBILITYLOGEVENTSUBMITTER_H
#define HMDHH2AUTOMIGRATIONELIGIBILITYLOGEVENTSUBMITTER_H

@class HMFObject;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;



@interface HMDHH2AutoMigrationEligibilityLogEventSubmitter : HMFObject

@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithLogEventSubmitter:(id)arg0 ;
-(void)submitHH2AutoMigrationEligibilityStatesUsingDataSource:(id)arg0 ;


@end


#endif