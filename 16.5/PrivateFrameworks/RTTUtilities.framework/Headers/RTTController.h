// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTTCONTROLLER_H
#define RTTCONTROLLER_H

@class AXUIClient, NSMutableDictionary, AXDispatchTimer, NSString, NSMutableArray;
@protocol RTTCallDelegate, TUCallCapabilitiesDelegate, AXUIClientDelegate, RTTTranscriptionControllerDelegate, OS_dispatch_queue, HCHeardControllerProtocol;

#import <Foundation/Foundation.h>

#import "RTTTranscriptionController.h"

@interface RTTController : NSObject <RTTCallDelegate, TUCallCapabilitiesDelegate, AXUIClientDelegate, RTTTranscriptionControllerDelegate>

 {
    AXUIClient *_actionUIClient;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
}


@property (copy, nonatomic) id *actionCompletionBlock; // ivar: _actionCompletionBlock
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HCHeardControllerProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *rttCalls; // ivar: _rttCalls
@property (copy, nonatomic) id *serverInvalidateCallback; // ivar: _serverInvalidateCallback
@property (nonatomic) BOOL shouldSuppressIncomingNotification; // ivar: _shouldSuppressIncomingNotification
@property (readonly) Class superclass;
@property (retain, nonatomic) RTTTranscriptionController *transcriber; // ivar: _transcriber


+(id)sharedController;
-(BOOL)invalidateServerCaches:(id)arg0 ;
-(id)_callForUUIDWithoutRefresh:(id)arg0 ;
-(id)actionClient;
-(id)callForUUID:(id)arg0 ;
-(id)displayCallPrompt:(id)arg0 ;
-(id)handleDatabaseRequest:(id)arg0 ;
-(id)handleDictionaryRequest:(id)arg0 ;
-(id)handleIncomingNotificationSuppressionChange:(id)arg0 ;
-(id)handleMediaAction:(id)arg0 ;
-(id)handleRTTControllerIsVisible:(id)arg0 ;
-(id)handleSettingsRequest:(id)arg0 ;
-(id)init;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_handlePreferredRelayNumberUpdate;
-(void)_refreshCurrentCallList;
-(void)_refreshCurrentCallListWithExistingCalls:(id)arg0 ;
-(void)_requestNotificationAuthorization;
-(void)_requestNotificationAuthorizationIfNecessary;
-(void)_updateConversationControllerWithTranscription:(id)arg0 type:(NSInteger)arg1 callUUID:(id)arg2 ;
-(void)callDidConnect:(id)arg0 ;
-(void)clientRemoved:(id)arg0 ;
-(void)dealloc;
-(void)didChangeTelephonyCallingSupport;
-(void)dismissRTTFirstUseAlert;
-(void)displayRTTFirstUseAlert;
-(void)handleUpdatedCalls:(id)arg0 ;
-(void)transcriptionDidStart:(id)arg0 forCallUUID:(id)arg1 ;
-(void)transcriptionDidUpdate:(id)arg0 forCallUUID:(id)arg1 ;
-(void)ttyCall:(id)arg0 didReceiveString:(id)arg1 forUtterance:(id)arg2 ;
-(void)ttyCall:(id)arg0 didSendRemoteString:(id)arg1 forUtterance:(id)arg2 ;
-(void)ttyCall:(id)arg0 setVisible:(BOOL)arg1 serviceUpdate:(id)arg2 ;


@end


#endif