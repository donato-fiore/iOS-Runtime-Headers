// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFAPPLEMUSICHOMEACCOUNTMANAGER_H
#define HFAPPLEMUSICHOMEACCOUNTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFAppleMusicHomeAccountManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueryQueue; // ivar: _concurrentQueryQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue; // ivar: _dataModelUpdateQueue
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping; // ivar: _homeIdentifierToActiveAMSQueriesMapping
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToFuturePromiseMapping; // ivar: _homeIdentifierToFuturePromiseMapping
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaAccountMapping; // ivar: _homeIdentifierToMediaAccountMapping


+(id)sharedInstance;
-(id)_fetchMediaAccountForHome:(id)arg0 ;
-(id)_futureForQueryLimitForHome:(id)arg0 ;
-(id)executeHomeMediaAccountFetchForHome:(id)arg0 ;
-(id)init;
-(id)mediaAccountForHomeIdentifier:(id)arg0 ;
-(void)_finishPendingPromisesWithMediaAccountInfo:(id)arg0 forHome:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)executeHomeMediaAccountFetchForAllHomes;
-(void)getHomeMediaAccountForHome:(id)arg0 withCompletion:(id)arg1 ;
-(void)setAMSiTunesAccount:(id)arg0 forHome:(id)arg1 completion:(id)arg2 ;


@end


#endif