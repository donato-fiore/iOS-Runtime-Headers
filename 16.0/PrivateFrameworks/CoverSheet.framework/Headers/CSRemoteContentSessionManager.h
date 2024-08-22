// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTECONTENTSESSIONMANAGER_H
#define CSREMOTECONTENTSESSIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol CSRemoteContentSessionPreferencesProvider, OS_dispatch_queue, SBFAuthenticationStatusProvider, CSRemoteContentSessionHostDelegate;

#import <Foundation/Foundation.h>


@interface CSRemoteContentSessionManager : NSObject <CSRemoteContentSessionPreferencesProvider>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
    NSMutableDictionary *_serviceNameToPreferences;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CSRemoteContentSessionHostDelegate> *forwardingHostDelegate; // ivar: _forwardingHostDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_queue_createSessionWithDefinition:(id)arg0 ;
-(id)_queue_existingSessions;
-(id)_queue_existingSessionsWithDefinition:(id)arg0 ;
-(id)createSessionWithDefinition:(id)arg0 ;
-(id)existingSessions;
-(id)existingSessionsWithDefinition:(id)arg0 ;
-(id)initWithAuthenticationStatusProvider:(id)arg0 ;
-(id)preferencesForRemoteContentSession:(id)arg0 ;
-(void)didInvalidateSessionWithSessionID:(id)arg0 ;
-(void)remoteContentSession:(id)arg0 didUpdateWithPreferences:(id)arg1 ;


@end


#endif