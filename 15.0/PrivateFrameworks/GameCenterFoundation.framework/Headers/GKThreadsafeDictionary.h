// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTHREADSAFEDICTIONARY_H
#define GKTHREADSAFEDICTIONARY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GKThreadsafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary


-(id)allKeys;
-(id)allObjects;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 objectProducerBlock:(id)arg1 ;
-(id)objectForKeyWillReplace:(id)arg0 objectProducerBlock:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)readFromDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)writeToDictionary:(id)arg0 ;


@end


#endif