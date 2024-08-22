// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHCHECKER_H
#define WBSPASSWORDBREACHCHECKER_H


#import <Foundation/Foundation.h>

#import "WBSPasswordBreachContext.h"
#import "WBSPasswordBreachQueuedPasswordBagManager.h"
#import "WBSPasswordBreachRequestManager.h"

@interface WBSPasswordBreachChecker : NSObject {
    WBSPasswordBreachContext *_context;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
    WBSPasswordBreachRequestManager *_requestManager;
}




-(id)initWithContext:(id)arg0 bagManager:(id)arg1 ;
-(void)_checkHighFrequencyBucketForPasswords:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_checkLowFrequencyBatchesWithBagManager:(id)arg0 completionHandler:(id)arg1 ;
-(void)_mergeResultsByUUID:(id)arg0 intoResultsByPersistentIdentifier:(id)arg1 usingQueuedPasswordsbyUUID:(id)arg2 ;
-(void)checkPasswordBatchesWithCompletionHandler:(id)arg0 ;


@end


#endif