// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMMESSAGEREPOSITORYMAILBOXPREDICTIONOBSERVER_H
#define _EMMESSAGEREPOSITORYMAILBOXPREDICTIONOBSERVER_H

@class EFCancelationToken, NSString, NSArray;
@protocol EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver;

#import <Foundation/Foundation.h>


@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver>



@property (readonly, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *messageObjectIDs; // ivar: _messageObjectIDs
@property (readonly) Class superclass;


-(id)initWithMessageObjectIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performQueryWithRemoteConnection:(id)arg0 forRecovery:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)mailboxWasPredicted:(id)arg0 ;
-(void)performQueryWithRemoteConnection:(id)arg0 ;
-(void)recoverQueryWithRemoteConnection:(id)arg0 ;


@end


#endif