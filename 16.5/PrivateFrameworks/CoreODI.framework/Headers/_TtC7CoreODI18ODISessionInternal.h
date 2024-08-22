// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7COREODI18ODISESSIONINTERNAL_H
#define _TTC7COREODI18ODISESSIONINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC7CoreODI18ODISessionInternal : NSObject {
    ? _pendingFeedback;
    ? _odnator;
    ? _odnAtorSessionId;
    ? _bindingsManager;
    ? _lastAssessmentTimedOut;
    ? _triggerAssessmentCallback;
    ? _armandDataFiller;
    ? _armandDataInitialized;
    ? _emptyPayload;
    ? _emptyPayloadSessionId;
    ? _assessmentTriggered;
    ? _serviceIdentifier;
    ? _dsidType;
    ? _assessmentTiming;
    ? sessionIdentifier;
    ? logger;
    ? setODNAtorTask;
    ? CORE_ODI_MAX_INIT_TIME;
    ? CORE_ODI_MAX_WAIT_TIME;
    ? CORE_ODI_MIN_WAIT_TIME;
    ? CORE_ODI_RAW_WAIT_TIME;
    ? CORE_ODI_BAA_CERT_MAX_TIME;
    ? CORE_ODI_SEND_OTD_AFTER_SECONDS_IF_NO_ASSESSMENT;
    ? dispatchQueue;
    ? authorizedServices;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithServiceIdentifier:(id)arg0 forDSIDType:(NSUInteger)arg1 locationBundle:(id)arg2 andLocationBundleIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)getAssessment:(id)arg0 ;
-(void)provideFeedbackOnPayloadOutcome:(NSUInteger)arg0 ;
-(void)updateWithAdditionalAttributes:(id)arg0 ;


@end


#endif