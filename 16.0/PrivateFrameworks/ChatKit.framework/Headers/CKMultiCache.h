// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMULTICACHE_H
#define CKMULTICACHE_H

@class IMMultiDict;



@interface CKMultiCache : IMMultiDict

@property (nonatomic) BOOL cacheEligibleForPrewarm; // ivar: _cacheEligibleForPrewarm
@property (nonatomic) NSUInteger limit; // ivar: _limit


-(id)init;
-(void)dealloc;
-(void)markCacheAsPrewarmed;
-(void)pushObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;


@end


#endif