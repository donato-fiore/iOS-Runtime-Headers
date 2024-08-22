// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASEVALUECACHE_H
#define HDDATABASEVALUECACHE_H

@class NSMutableDictionary, NSString;
@protocol HDDiagnosticObject;

#import <Foundation/Foundation.h>


@interface HDDatabaseValueCache : NSObject <HDDiagnosticObject>

 {
    NSMutableDictionary *_cache;
    NSString *_threadLocalKey;
    NSInteger _cacheScope;
    os_unfair_lock_s _lock;
    ? _statistics;
}


@property (readonly) NSInteger cacheScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) ? statistics;
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)fetchObjectForKey:(id)arg0 transaction:(id)arg1 error:(*id)arg2 faultHandler:(id)arg3 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 cacheScope:(NSInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjectsWithTransaction:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 transaction:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 transaction:(id)arg2 ;


@end


#endif