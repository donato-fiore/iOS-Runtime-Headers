// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTSTORE_H
#define PLACCOUNTSTORE_H

@class ACAccountStore, ACAccount;
@protocol OS_dispatch_queue;



@interface PLAccountStore : ACAccountStore {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}


@property (readonly, weak) ACAccount *cachedPrimaryAppleAccount;


+(id)pl_sharedAccountStore;
-(id)init;
-(void)accountDidChange:(id)arg0 ;
-(void)clearCachedProperties;
-(void)dealloc;


@end


#endif