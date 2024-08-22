// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIDSSERVICECONNECTIONINVITATIONOUTBOX_H
#define CATIDSSERVICECONNECTIONINVITATIONOUTBOX_H

@class NSMutableDictionary, NSMutableArray;
@protocol CATAssertionProviding, OS_dispatch_queue, CATIDSServiceConnectionInvitationOutboxDelegate;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionInvitationOutbox : NSObject {
    id<CATAssertionProviding> *mAssertionProvider;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;
    NSMutableArray *mInvitationRequestQueue;
    BOOL mIsActive;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionInvitationOutboxDelegate> *delegate; // ivar: _delegate


-(id)initWithAssertionProvider:(id)arg0 workQueue:(id)arg1 ;
-(void)beginInvitationWithIdentifier:(id)arg0 appleID:(id)arg1 userInfo:(id)arg2 ;
-(void)cancelAllInvitations;
-(void)cancelAllPowerAssertions;
-(void)cancelInvitationWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)receiveAcceptForInvitation:(id)arg0 connectionIdentifier:(id)arg1 senderAddress:(id)arg2 messagingVersion:(NSUInteger)arg3 ;
-(void)receiveRejectForInvitation:(id)arg0 connectionIdentifier:(id)arg1 senderAddress:(id)arg2 error:(id)arg3 ;
-(void)resume;
-(void)serviceInvitationQueue;
-(void)suspend;


@end


#endif