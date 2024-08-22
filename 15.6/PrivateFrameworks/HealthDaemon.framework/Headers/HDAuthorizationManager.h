// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAUTHORIZATIONMANAGER_H
#define HDAUTHORIZATIONMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "_HDAuthorizationRequestGroup.h"

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject>

 {
    NSMutableDictionary *_openAppCompletionHandlersByBundleID;
    NSMutableDictionary *_remoteAuthorizationRecordsByBundleID;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableDictionary *_requestGroupsByBundleIdentifier;
    NSMutableArray *_pendingRequestGroups;
    _HDAuthorizationRequestGroup *_promptingRequestGroup;
    NSMutableDictionary *_pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableDictionary *_activeObjectPromptSessionsBySessionIdentifier;
    NSMutableDictionary *_activeRecalibrateEstimatesRequestSessionsByBundleIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat requestSessionTimeout; // ivar: _requestSessionTimeout
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAuthorizationPrompt; // ivar: _suppressAuthorizationPrompt


-(BOOL)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)arg0 requiredReadTypes:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyProfileAuthorizationForClient:(id)arg0 error:(*id)arg1 ;
-(NSInteger)authorizationRequestStatusForClientBundleIdentifier:(id)arg0 writeTypes:(id)arg1 readTypes:(id)arg2 error:(*id)arg3 ;
-(NSInteger)objectAuthorizationRecordForSource:(id)arg0 objectUUID:(id)arg1 resolveAssociations:(BOOL)arg2 error:(*id)arg3 ;
-(id)diagnosticDescription;
// -(id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg0 writeTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(id)arg3 completion:(unk)arg4  ;
// -(id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)arg0 context:(id)arg1 promptIfNeeded:(BOOL)arg2 authorizationNeededHandler:(id)arg3 completion:(unk)arg4  ;
-(id)fetchAuthorizationContextForPromptSession:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(void)applicationsUninstalledNotification:(id)arg0 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)cancelAuthorizationRequestsWithIdentifiers:(id)arg0 ;
-(void)createRecalibrateEstimatesRequestRecordForSource:(id)arg0 sampleType:(id)arg1 effectiveDate:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 error:(id)arg1 ;
// -(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg0 promptHandler:(id)arg1 completion:(unk)arg2  ;
// -(void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)arg0 promptHandler:(id)arg1 completion:(unk)arg2  ;
-(void)openAppForAuthorization:(id)arg0 sessionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)performObjectAuthorizationForSource:(id)arg0 samples:(id)arg1 associatedWithSamplesOfType:(id)arg2 completion:(id)arg3 ;
// -(void)requestRemoteAuthorizationForRequestRecord:(id)arg0 requestSentHandler:(id)arg1 completion:(unk)arg2  ;
-(void)resetAllAuthorizationRecordsWithCompletion:(id)arg0 ;
-(void)setAuthorizationStatuses:(id)arg0 authorizationModes:(id)arg1 forBundleIdentifier:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)validateRecalibrateEstimatesRequestRecord:(id)arg0 completion:(id)arg1 ;


@end


#endif