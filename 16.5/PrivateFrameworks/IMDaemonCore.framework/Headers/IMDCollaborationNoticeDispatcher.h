// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCOLLABORATIONNOTICEDISPATCHER_H
#define IMDCOLLABORATIONNOTICEDISPATCHER_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, IMDCollaborationNoticeDispatcherDelegate;

#import <Foundation/Foundation.h>

#import "IMDCollaborationClearNoticeRateLimiter.h"
#import "IMDCollaborationNoticeRateLimiter.h"

@interface IMDCollaborationNoticeDispatcher : NSObject <IDSServiceDelegate>



@property (retain, nonatomic) IMDCollaborationClearNoticeRateLimiter *clearRateLimiter; // ivar: _clearRateLimiter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMDCollaborationNoticeDispatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IDSService *gelatoService; // ivar: _gelatoService
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMDCollaborationNoticeRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (readonly) Class superclass;


+(Class)_SWCollaborationClearNoticeTransmissionMessageClass;
+(Class)_SWCollaborationNoticeTransmissionMessageClass;
+(NSUInteger)noticeFanoutThreshold;
+(id)unarchiveNoticeTransmissionEvent:(id)arg0 ;
-(id)_handlesMinusSenderServiceAccountID:(id)arg0 ;
-(id)_senderServiceAccountIDFrom:(id)arg0 ;
-(id)init;
-(id)senderLoginIDs;
-(void)dealloc;
-(void)handleIncomingNoticeProtobuf:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)reflectDismissalForNoticeGUIDs:(id)arg0 ;
-(void)sendClearNotice:(id)arg0 toHandles:(id)arg1 ;
-(void)sendNotice:(id)arg0 toHandles:(id)arg1 fromHandle:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif