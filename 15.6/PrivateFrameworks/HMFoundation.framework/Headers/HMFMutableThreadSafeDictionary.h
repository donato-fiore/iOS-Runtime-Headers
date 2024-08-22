// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFMUTABLETHREADSAFEDICTIONARY_H
#define HMFMUTABLETHREADSAFEDICTIONARY_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol HMFMutableAssociativeCollection, NSCopying;

#import <Foundation/Foundation.h>


@interface HMFMutableThreadSafeDictionary : NSObject <HMFMutableAssociativeCollection, NSCopying>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_dictionary;
}


@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) NSUInteger count;
@property (readonly, copy) NSDictionary *rawDictionarySnapshot;


+(id)threadSafeDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif