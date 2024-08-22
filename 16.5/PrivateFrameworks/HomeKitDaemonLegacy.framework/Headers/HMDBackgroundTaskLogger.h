// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDTASKLOGGER_H
#define HMDBACKGROUNDTASKLOGGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMMLogEventSubmitting;



@interface HMDBackgroundTaskLogger : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *submitter; // ivar: _submitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithLogEventSubmitter:(id)arg0 ;
-(void)submitLogEventForTask:(id)arg0 ;
-(void)submitNotFiredLogEventForTask:(id)arg0 ;


@end


#endif