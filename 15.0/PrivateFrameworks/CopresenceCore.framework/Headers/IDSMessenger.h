// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMESSENGER_H
#define IDSMESSENGER_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegatePrivate, OS_os_log, IDSGroupSessionObserver;

#import <Foundation/Foundation.h>

#import "CPIDSHelper.h"

@interface IDSMessenger : NSObject <IDSServiceDelegatePrivate>

 {
    IDSService *_service;
    CPIDSHelper *_helper;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_messageHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<IDSGroupSessionObserver> *groupSessionObserver; // ivar: _groupSessionObserver
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_validateMessage:(id)arg0 payload:(*id)arg1 objectGUID:(*id)arg2 type:(*id)arg3 ;
-(BOOL)sendIDSMessage:(id)arg0 ;
-(id)initWithIDSService:(id)arg0 delegateQueue:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantDataUpdate:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantUpdate:(id)arg2 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)setMessageHandler:(id)arg0 forMessageType:(id)arg1 ;


@end


#endif