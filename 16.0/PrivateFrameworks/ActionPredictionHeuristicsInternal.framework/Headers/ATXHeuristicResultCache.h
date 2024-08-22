// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICRESULTCACHE_H
#define ATXHEURISTICRESULTCACHE_H

@class NSMutableDictionary, NSHashTable, DNDState, NSString;
@protocol DNDStateUpdateListener;

#import <Foundation/Foundation.h>


@interface ATXHeuristicResultCache : NSObject <DNDStateUpdateListener>

 {
    NSMutableDictionary *_cache;
    NSHashTable *_expirerInternTable;
    _opaque_pthread_mutex_t _lock;
    DNDState *_doNotDisturbState;
    int _appRefreshToken;
    int _significantTimeToken;
    int _learnRefreshToken;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)addDNDStateUpdateListener;
+(id)sharedInstance;
+(id)sharedPassLibrary;
-(BOOL)isDNDActiveWithError:(*id)arg0 ;
-(id)_internExpirerLocked:(id)arg0 ;
-(id)firstExpirationDate;
-(id)heuristicsCached;
-(id)init;
-(id)objectForKey:(id)arg0 found:(*BOOL)arg1 ;
-(void)_expire:(id)arg0 postNotification:(BOOL)arg1 ;
-(void)dealloc;
-(void)expire:(id)arg0 ;
-(void)expireAll;
-(void)setObject:(id)arg0 expirers:(id)arg1 forKey:(id)arg2 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif