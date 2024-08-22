// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDRTCREPORTINGSESSION_H
#define FPDRTCREPORTINGSESSION_H

@class NSString, NSMutableDictionary;
@protocol FPDRTCReportingObserver;

#import <Foundation/Foundation.h>

#import "FPDRTCReportingSessionManager.h"

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    NSString *_providerVersion;
    FPDRTCReportingSessionManager *_backingManager;
    id<FPDRTCReportingObserver> *_observer;
    NSString *_trialExperiment;
    NSString *_trialTreatment;
    NSMutableDictionary *_categoryHooks;
}




-(BOOL)flushMessagesSynchronouslyWithError:(*id)arg0 ;
-(id)description;
-(id)initWithProviderID:(id)arg0 version:(id)arg1 manager:(id)arg2 ;
-(id)truncateProviderVersion:(id)arg0 ;
-(void)executeModifyDecoratedPayloadHook:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 error:(id)arg3 decoratedPayload:(id)arg4 ;
-(void)flushMessagesWithCompletion:(id)arg0 ;
-(void)postReportWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 error:(id)arg3 ;
// -(void)setModifyDecoratedPayloadHook:(id)arg0 forCategory:(unk)arg1  ;
-(void)setObserver:(id)arg0 ;


@end


#endif