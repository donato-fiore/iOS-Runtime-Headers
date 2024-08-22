// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHQUEUEDPASSWORDBAGMANAGER_H
#define WBSPASSWORDBREACHQUEUEDPASSWORDBAGMANAGER_H

@class NSMutableDictionary, NSDictionary;
@protocol WBSPasswordBreachCredentialSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSPasswordBreachContext.h"
#import "WBSPasswordBreachResults.h"

@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject {
    WBSPasswordBreachContext *_context;
    WBSPasswordBreachResults *_results;
    id<WBSPasswordBreachCredentialSource> *_credentialSource;
    NSMutableDictionary *_queuedPasswordsByUUID;
    NSInteger _fillState;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy, nonatomic) NSDictionary *allNonbreachedPasswords;
@property (readonly, nonatomic) NSInteger fillState;


-(id)_constructBagOnInternalQueueWithCredentials:(id)arg0 ensureFakePasswordGeneration:(BOOL)arg1 ;
-(id)_constructNewBagOnInternalQueueEnsuringFakePasswordGeneration:(BOOL)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_passwordBagFromDictionaryRepresentation:(id)arg0 ;
-(id)_unbreachedCredentials;
-(id)description;
-(id)initWithContext:(id)arg0 results:(id)arg1 passwordSource:(id)arg2 ;
-(void)getPasswordsForNextBatchWithCompletionHandler:(id)arg0 ;
-(void)reportPasswordCheckBatchResults:(id)arg0 ;
-(void)saveBagToStore;


@end


#endif