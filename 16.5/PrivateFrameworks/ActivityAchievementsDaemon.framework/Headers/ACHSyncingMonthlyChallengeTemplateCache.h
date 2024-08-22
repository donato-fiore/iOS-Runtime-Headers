// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHSYNCINGMONTHLYCHALLENGETEMPLATECACHE_H
#define ACHSYNCINGMONTHLYCHALLENGETEMPLATECACHE_H

@class HDDatabaseTransactionContext, NSCalendar, HKHealthStore, HDKeyValueDomain, HKKeyValueDomain, HDProfile;

#import <Foundation/Foundation.h>


@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // ivar: _databaseContext
@property (copy, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (retain, nonatomic) HKKeyValueDomain *kvDomain; // ivar: _kvDomain
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)_daemon_cacheTemplate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_store_cacheTemplate:(id)arg0 error:(*id)arg1 ;
-(BOOL)cacheTemplate:(id)arg0 error:(*id)arg1 ;
-(id)_daemon_allCachedTemplatesWithError:(*id)arg0 ;
-(id)_daemon_templateForDateComponents:(id)arg0 error:(*id)arg1 ;
-(id)_store_allCachedTemplatesWithError:(*id)arg0 ;
-(id)_store_templateForDateComponents:(id)arg0 error:(*id)arg1 ;
-(id)allCachedTemplatesWithError:(*id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)templateForDateComponents:(id)arg0 error:(*id)arg1 ;


@end


#endif