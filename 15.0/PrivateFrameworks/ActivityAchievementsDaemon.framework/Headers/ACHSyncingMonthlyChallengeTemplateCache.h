// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHSYNCINGMONTHLYCHALLENGETEMPLATECACHE_H
#define ACHSYNCINGMONTHLYCHALLENGETEMPLATECACHE_H

@class HDDatabaseTransactionContext, NSCalendar, HDKeyValueDomain, HDProfile;

#import <Foundation/Foundation.h>


@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject

@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // ivar: _databaseContext
@property (copy, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)cacheTemplate:(id)arg0 error:(*id)arg1 ;
-(id)allCachedTemplatesWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)templateForDateComponents:(id)arg0 error:(*id)arg1 ;


@end


#endif