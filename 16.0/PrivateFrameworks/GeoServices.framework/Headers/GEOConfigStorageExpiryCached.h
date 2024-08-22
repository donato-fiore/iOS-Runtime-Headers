// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGEEXPIRYCACHED_H
#define GEOCONFIGSTORAGEEXPIRYCACHED_H

@class NSDictionary;
@protocol GEOConfigStorageExpiry;

#import <Foundation/Foundation.h>


@interface GEOConfigStorageExpiryCached : NSObject <GEOConfigStorageExpiry>

 {
    NSUInteger _options;
    os_unfair_lock_s _lock;
    NSDictionary *_cachedValues;
}




-(BOOL)getConfigKeyExpiry:(id)arg0 date:(*id)arg1 osVersion:(*id)arg2 ;
-(BOOL)getConfigKeyIsExpired:(id)arg0 ;
-(id)_expiryForKey:(id)arg0 ;
-(id)getAllExpiringKeys;
-(id)initForSource:(NSInteger)arg0 ;
-(void)clearConfigKeyExpiry:(id)arg0 ;
-(void)resync;
-(void)setConfigKeyExpiry:(id)arg0 date:(id)arg1 osVersion:(id)arg2 ;


@end


#endif