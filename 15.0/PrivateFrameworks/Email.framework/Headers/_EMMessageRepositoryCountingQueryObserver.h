// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EMMESSAGEREPOSITORYCOUNTINGQUERYOBSERVER_H
#define _EMMESSAGEREPOSITORYCOUNTINGQUERYOBSERVER_H

@class EFQuery, EFCancelationToken, NSString, EFPair;
@protocol EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver, EMMessageRepositoryCountQueryObserver;

#import <Foundation/Foundation.h>

#import "EMMessageRepository.h"
#import "EMMailboxScope.h"

@interface _EMMessageRepositoryCountingQueryObserver : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver>

 {
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMMailboxScope *_serverCountMailboxScope;
    id<EMMessageRepositoryCountQueryObserver> *_observer;
    EFCancelationToken *_token;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) EFPair *queryIdentifier; // ivar: _queryIdentifier
@property (readonly) Class superclass;


-(id)initWithRepository:(id)arg0 queryIdentifier:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 observer:(id)arg3 ;
-(void)_performQueryWithRemoteConnection:(id)arg0 forRecovery:(BOOL)arg1 ;
-(void)cancel;
-(void)countDidChange:(NSInteger)arg0 acknowledgementToken:(id)arg1 ;
-(void)dealloc;
-(void)performQueryWithRemoteConnection:(id)arg0 ;
-(void)recoverQueryWithRemoteConnection:(id)arg0 ;


@end


#endif