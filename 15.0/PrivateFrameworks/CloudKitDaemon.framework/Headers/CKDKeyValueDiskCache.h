// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDKEYVALUEDISKCACHE_H
#define CKDKEYVALUEDISKCACHE_H

@class PQLConnection, NSString;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"

@interface CKDKeyValueDiskCache : NSObject

@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) PQLConnection *db; // ivar: _db
@property (nonatomic) CGFloat expirationTimeout; // ivar: _expirationTimeout
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)setupCacheWithError:(*id)arg0 ;
-(id)cachedValueForKey:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 container:(id)arg1 ;
-(void)_garbageCollectExpiredEntries;
-(void)dealloc;
-(void)deleteCachedValuesBecauseOfLowDisk;
-(void)removeCachedValueForKey:(id)arg0 ;
-(void)setCachedValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif