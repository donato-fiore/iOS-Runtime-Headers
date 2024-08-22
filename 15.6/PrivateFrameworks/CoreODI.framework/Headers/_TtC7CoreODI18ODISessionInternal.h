// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7COREODI18ODISESSIONINTERNAL_H
#define _TTC7COREODI18ODISESSIONINTERNAL_H


#import <Foundation/Foundation.h>


@interface _TtC7CoreODI18ODISessionInternal : NSObject {
    ? _pendingFeedback;
    ? _odnator;
    ? _bindingsManager;
    ? _triggerAssessmentCallback;
    ? _armandDataFiller;
    ? _emptyPayload;
    ? _serviceIdentifier;
    ? _assessmentTiming;
    ? CORE_ODI_MAX_WAIT_TIME;
    ? CORE_ODI_MIN_WAIT_TIME;
    ? CORE_ODI_RAW_WAIT_TIME;
    ? CORE_ODI_SEND_OTD_AFTER_SECONDS_IF_NO_ASSESSMENT;
    ? dispatchQueue;
    ? authorizedServices;
}




-(id)init;
-(id)initWithServiceIdentifier:(id)arg0 forDSIDType:(NSUInteger)arg1 locationBundle:(id)arg2 andLocationBundleIdentifier:(id)arg3 ;
-(void)getAssessment:(id)arg0 ;
-(void)provideFeedbackOnPayloadOutcome:(NSUInteger)arg0 ;
-(void)updateWithAdditionalAttributes:(id)arg0 ;


@end


#endif