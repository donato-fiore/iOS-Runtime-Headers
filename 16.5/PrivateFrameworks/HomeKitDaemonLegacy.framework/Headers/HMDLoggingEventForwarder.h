// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGGINGEVENTFORWARDER_H
#define HMDLOGGINGEVENTFORWARDER_H

@class HMFObject;
@protocol HMEEventForwarder, HMMLogEventSubmitting;



@interface HMDLoggingEventForwarder : HMFObject <HMEEventForwarder>

 {
    id<HMEEventForwarder> *_eventForwarder;
    id<HMMLogEventSubmitting> *_metricDispatcher;
}




-(id)initWithEventForwarder:(id)arg0 metricDispatcher:(id)arg1 ;
-(void)forwardEvent:(id)arg0 topic:(id)arg1 completion:(id)arg2 ;


@end


#endif