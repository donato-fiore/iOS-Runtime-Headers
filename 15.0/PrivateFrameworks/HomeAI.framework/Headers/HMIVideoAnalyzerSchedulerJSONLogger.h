// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERSCHEDULERJSONLOGGER_H
#define HMIVIDEOANALYZERSCHEDULERJSONLOGGER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIVideoAnalyzerSchedulerJSONLogger : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;


@end


#endif