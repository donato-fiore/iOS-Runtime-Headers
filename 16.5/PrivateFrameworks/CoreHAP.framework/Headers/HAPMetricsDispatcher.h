// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETRICSDISPATCHER_H
#define HAPMETRICSDISPATCHER_H

@class HMFObject;
@protocol HMMLogEventSubmitting;



@interface HAPMetricsDispatcher : HMFObject

@property (retain, nonatomic) NSObject<HMMLogEventSubmitting> *logDispatcher; // ivar: _logDispatcher


+(id)sharedInstance;
-(void)submitLogEvent:(id)arg0 ;


@end


#endif