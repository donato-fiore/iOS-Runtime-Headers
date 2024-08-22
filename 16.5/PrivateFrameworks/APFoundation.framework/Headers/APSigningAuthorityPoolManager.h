// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGAUTHORITYPOOLMANAGER_H
#define APSIGNINGAUTHORITYPOOLMANAGER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol APSigningAuthorityPoolManagement, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APSigningAuthority.h"
#import "APUnfairLock.h"
#import "APSigningContextsStorage.h"

@interface APSigningAuthorityPoolManager : NSObject <APSigningAuthorityPoolManagement>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority; // ivar: _currentSigningAuthority
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (nonatomic) int poolSize; // ivar: _poolSize
@property (nonatomic) BOOL refillDisabled; // ivar: _refillDisabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *retryQueue; // ivar: _retryQueue
@property (nonatomic) NSInteger rotationClosureTokenCounter; // ivar: _rotationClosureTokenCounter
@property (retain, nonatomic) NSMutableDictionary *rotationClosures; // ivar: _rotationClosures
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool; // ivar: _signingAuthorityPool
@property (retain, nonatomic) APSigningContextsStorage *signingContextsStorage; // ivar: _signingContextsStorage
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) int successfulSigningAuthorities; // ivar: _successfulSigningAuthorities
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timerInterval; // ivar: _timerInterval


-(BOOL)_rotateWithError:(*id)arg0 ;
-(BOOL)rotateWithError:(*id)arg0 ;
-(id)init;
-(id)initWithPoolSize:(int)arg0 ;
-(id)initWithPoolSize:(int)arg0 completionHandler:(id)arg1 ;
-(id)registerHandlerForRotation:(id)arg0 ;
-(id)signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signatureForRawData:(id)arg0 error:(*id)arg1 ;
-(int)_numSigningAuthoritiesToCreate;
-(void)_addSigningAuthorityToPool:(id)arg0 ;
-(void)_evaluatePoolSize:(int)arg0 ;
-(void)_evaluateRotationEntitlement;
-(void)_handleFailedSigningAuthority:(id)arg0 ;
-(void)_handleSuccessfulSigningAuthority:(id)arg0 ;
-(void)_refillSigningAuthorityPool;
-(void)_refillSigningAuthorityPoolFromStashedContexts;
-(void)_removeAllSigningAuthorities;
-(void)_removeNotificationObserverForSigningAuthority:(id)arg0 ;
-(void)_removeSigningAuthority:(id)arg0 shouldRefill:(BOOL)arg1 ;
-(void)_signingAuthorityStateChanged:(id)arg0 ;
-(void)_validateSigningAuthority:(id)arg0 ;
-(void)dealloc;
-(void)removeHandlerForRotation:(id)arg0 ;


@end


#endif