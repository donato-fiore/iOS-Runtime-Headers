// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXTHREADSAFEDICTIONARY_H
#define JFXTHREADSAFEDICTIONARY_H

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXThreadSafeDictionary : NSObject

@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (readonly) NSUInteger count;
@property (retain, nonatomic) NSMutableDictionary *dict; // ivar: _dict


-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif