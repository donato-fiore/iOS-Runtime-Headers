// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTHREADSAFEMUTABLEDICTIONARY_H
#define FCTHREADSAFEMUTABLEDICTIONARY_H

@class NFUnfairLock, NSMutableDictionary, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCThreadSafeMutableDictionary : NSObject {
    NFUnfairLock *_lock;
    NSMutableDictionary *_dictionary;
}


@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (readonly) NSUInteger count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *readOnlyDictionary;


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)readWithAccessor:(id)arg0 ;
-(void)readWriteWithAccessor:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif