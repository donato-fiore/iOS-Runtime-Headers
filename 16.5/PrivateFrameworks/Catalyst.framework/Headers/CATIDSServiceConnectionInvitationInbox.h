// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATIDSSERVICECONNECTIONINVITATIONINBOX_H
#define CATIDSSERVICECONNECTIONINVITATIONINBOX_H

@class NSMutableDictionary;
@protocol CATTimerSource, CATAssertionProviding, OS_dispatch_queue, CATIDSServiceConnectionInvitationInboxDelegate;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionInvitationInbox : NSObject {
    id<CATTimerSource> *mTimerSource;
    id<CATAssertionProviding> *mAssertionProvider;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    CGFloat mAcknowledgeTimeout;
    NSMutableDictionary *mInvitationsByInvitationID;
    NSMutableDictionary *mAcknowledgeTimersByInvitationID;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionInvitationInboxDelegate> *delegate; // ivar: _delegate


+(id)acknowledgeTimerIdentifier;
-(id)initWithTimerSource:(id)arg0 assertionProvider:(id)arg1 workQueue:(id)arg2 acknowledgeTimeout:(CGFloat)arg3 ;
-(void)acknowledgeTimerFiredWithInvitationIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)receiveAcknowledgeForInvitationIdentifier:(id)arg0 connectionIdentifier:(id)arg1 ;
-(void)receiveInvitationWithIdentifier:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 messagingVersion:(NSUInteger)arg3 userInfo:(id)arg4 ;


@end


#endif