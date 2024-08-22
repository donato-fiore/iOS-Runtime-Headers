// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMULTIDICT_H
#define CKMULTIDICT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKMultiDict : NSObject {
    NSUInteger _count;
}


@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // ivar: _lockQueue


-(NSUInteger)count;
-(id)allKeys;
-(id)dequeueObjectForKey:(id)arg0 ;
-(id)description;
-(id)headObjectForKey:(id)arg0 ;
-(id)init;
-(id)objectsForKey:(id)arg0 ;
-(id)peekObjectForKey:(id)arg0 ;
-(id)popObjectForKey:(id)arg0 ;
-(void)enqueueObject:(id)arg0 forKey:(id)arg1 ;
-(void)pushObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectsForKey:(id)arg0 ;


@end


#endif