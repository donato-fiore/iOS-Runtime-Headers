// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CATARBITRATORWAITTOKEN_H
#define _CATARBITRATORWAITTOKEN_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _CATArbitratorWaitToken : NSObject {
    uint8_t mState;
    NSMutableDictionary *mTokenByKey;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSObject<OS_dispatch_group> *mGroup;
    id *mCompletionBlock;
}




-(BOOL)whenStateIs:(int)arg0 atomicallySwapWith:(int)arg1 ;
-(id)initWithDelegateQueue:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancel;
-(void)performCompletionBlock;
-(void)resume;
-(void)waitForRegistrationEntry:(id)arg0 forKey:(id)arg1 exclusive:(BOOL)arg2 ;


@end


#endif