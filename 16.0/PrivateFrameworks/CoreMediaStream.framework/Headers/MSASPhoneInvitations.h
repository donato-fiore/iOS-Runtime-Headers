// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASPHONEINVITATIONS_H
#define MSASPHONEINVITATIONS_H

@class NSString, IDSService, NSMutableDictionary;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>

#import "MSASAlbum.h"
#import "MSASStateMachine.h"

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>



@property (retain, nonatomic) MSASAlbum *album; // ivar: _album
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *idsService; // ivar: _idsService
@property (retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone; // ivar: _sendMessageIdentifierToPhone
@property (retain, nonatomic) MSASStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(id)init;
-(void)addPendingPhoneInvitations:(id)arg0 toOwnedAlbum:(id)arg1 inStateMachin:(id)arg2 ;
-(void)removeSharingRelationships:(id)arg0 forAlbum:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;


@end


#endif