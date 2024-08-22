// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGSTORAGECACHED_H
#define GEOCONFIGSTORAGECACHED_H

@class NSDictionary, NSString;
@protocol GEOConfigStorageReadWrite, GEOConfigStorageReadOnly;

#import <Foundation/Foundation.h>


@interface GEOConfigStorageCached : NSObject <GEOConfigStorageReadWrite>

 {
    NSInteger _source;
    NSUInteger _options;
    os_unfair_recursive_lock_s _cacheLock;
    atomic_flag _isResyncing;
    NSDictionary *_cachedValues;
    id<GEOConfigStorageReadOnly> *_direct;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(id)initForSource:(NSInteger)arg0 ;
-(void)resync;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif