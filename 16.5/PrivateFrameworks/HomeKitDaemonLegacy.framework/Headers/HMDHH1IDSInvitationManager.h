// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH1IDSINVITATIONMANAGER_H
#define HMDHH1IDSINVITATIONMANAGER_H

@class NSString, IDSInvitationManager;
@protocol IDSInvitationManagerDelegate;

#import <Foundation/Foundation.h>

#import "HMDHomeManager.h"

@interface HMDHH1IDSInvitationManager : NSObject <IDSInvitationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) IDSInvitationManager *idsInvitationManager; // ivar: _idsInvitationManager
@property (readonly) Class superclass;


-(id)initWithHomeManager:(id)arg0 workQueue:(id)arg1 ;
-(void)manager:(id)arg0 incomingInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidAcceptInvitation:(id)arg1 ;
-(void)manager:(id)arg0 receiverDidDeclineInvitation:(id)arg1 ;
-(void)manager:(id)arg0 senderDidCancelInvitation:(id)arg1 ;


@end


#endif