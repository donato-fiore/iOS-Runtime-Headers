// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIADISPATCHER_H
#define HFMEDIADISPATCHER_H

@class NSHashTable, ACAccountStore, NSArray;

#import <Foundation/Foundation.h>


@interface HFMediaDispatcher : NSObject

@property (retain, nonatomic) NSHashTable *appleMusicAccountObservers; // ivar: _appleMusicAccountObservers
@property (readonly, nonatomic) ACAccountStore *appleMusicAccountStore; // ivar: _appleMusicAccountStore
@property (copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts; // ivar: _appleMusicMagicAuthCapableAccounts
@property (readonly, nonatomic) BOOL isUsingiCloud;


+(id)sharedDispatcher;
-(BOOL)_reloadAppleMusicMagicAuthCapableAccounts;
-(id)init;
-(void)_accountsStoreWasUpdated:(id)arg0 ;
-(void)_setupAppleMusicAccountStoreIfNecessary;
-(void)addAppleMusicAccountObserver:(id)arg0 ;
-(void)removeAppleMusicAccountObserver:(id)arg0 ;


@end


#endif