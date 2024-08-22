// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEMORYUTILIZATIONTRACKER_H
#define HMDMEMORYUTILIZATIONTRACKER_H

@class NSString;
@protocol HMFLogging, HMMLogEventSubmitting;

#import <Foundation/Foundation.h>


@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithLogEventSubmitter:(id)arg0 ;
-(void)trackMemoryUsageWithReason:(id)arg0 ;


@end


#endif