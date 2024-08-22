// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16HEALTHEXPERIENCE22OPERATIONQUEUEOBSERVER_H
#define _TTC16HEALTHEXPERIENCE22OPERATIONQUEUEOBSERVER_H

@class SwiftObject;
@protocol _TtP16HealthExperience18DebuggingResponder_;



@interface _TtC16HealthExperience22OperationQueueObserver : SwiftObject <_TtP16HealthExperience18DebuggingResponder_>

 {
    ? queue;
    ? lock;
    ? currentOperations;
}




-(void)debuggingInfoRequestedWithNote:(id)arg0 ;


@end


#endif