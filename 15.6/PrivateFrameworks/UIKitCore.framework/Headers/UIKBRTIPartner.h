// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRTIPARTNER_H
#define UIKBRTIPARTNER_H

@class NSUUID, NSString, RTIInputSystemClient, RTIDocumentState, RTIDocumentTraits;
@protocol RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate, UIKBRTIPartnerDelegate;

#import <Foundation/Foundation.h>


@interface UIKBRTIPartner : NSObject <RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate>



@property (nonatomic) BOOL applicationStateIsActiveForRTI; // ivar: _applicationStateIsActiveForRTI
@property (copy, nonatomic) NSUUID *currentSessionIdentifier; // ivar: _currentSessionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputSystemClientEnabled; // ivar: _inputSystemClientEnabled
@property (readonly, nonatomic) BOOL isNotifyingDelegateOfRemoteOutputOperation; // ivar: _isNotifyingDelegateOfRemoteOutputOperation
@property (weak, nonatomic) NSObject<UIKBRTIPartnerDelegate> *partnerDelegate; // ivar: _partnerDelegate
@property (retain, nonatomic) RTIInputSystemClient *rtiClient; // ivar: _rtiClient
@property (retain, nonatomic) RTIDocumentState *rtiDocumentState; // ivar: _rtiDocumentState
@property (retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits; // ivar: _rtiDocumentTraits
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewServiceStateIsActiveForRTI; // ivar: _viewServiceStateIsActiveForRTI


-(id)_defaultRTIMachNames;
-(id)_newRTIConnection;
-(id)delegate;
-(id)init;
-(id)inputDelegate;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_applicationWillSuspend:(id)arg0 ;
-(void)_createRTIClient;
-(void)_createRTIClientIfNecessary;
-(void)_didCreateRTIClient:(id)arg0 ;
-(void)_macWindowChangedKey:(id)arg0 ;
-(void)_performKeyboardOutputOperations:(id)arg0 ;
-(void)_queued_performTextOperations:(id)arg0 ;
-(void)_screenModeDidChange:(id)arg0 ;
-(void)_updateRTIAllowedAndNotify:(BOOL)arg0 withReason:(id)arg1 ;
-(void)_updateRTIStateIfNecessary;
-(void)_updateRTITraitsIfNecessary;
-(void)_viewServiceHostDidBecomeActive:(id)arg0 ;
-(void)_viewServiceHostWillResignActive:(id)arg0 ;
-(void)applyRemoteDocumentStateIfNecessary:(id)arg0 force:(BOOL)arg1 ;
-(void)applyRemoteDocumentTraitsIfNecessary:(id)arg0 force:(BOOL)arg1 ;
-(void)beginAllowingRemoteTextInput:(id)arg0 ;
-(void)beginInputSessionWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)documentStateChanged;
-(void)documentTraitsChanged;
-(void)endAllowingRemoteTextInput:(id)arg0 ;
-(void)endInputSessionWithIdentifier:(id)arg0 ;
-(void)ensureRTIConnection;
-(void)inputSession:(id)arg0 documentStateDidChange:(id)arg1 ;
-(void)inputSession:(id)arg0 documentTraitsDidChange:(id)arg1 ;
-(void)performTextOperations:(id)arg0 ;
-(void)restartCurrentSession;
-(void)updateState;


@end


#endif