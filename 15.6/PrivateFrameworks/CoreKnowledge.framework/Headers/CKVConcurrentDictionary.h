// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVCONCURRENTDICTIONARY_H
#define CKVCONCURRENTDICTIONARY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;



@interface CKVConcurrentDictionary : NSMutableDictionary {
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif