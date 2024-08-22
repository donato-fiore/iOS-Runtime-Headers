// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTRWRETAINEDPOINTERKEYDICTIONARY_H
#define TSTRWRETAINEDPOINTERKEYDICTIONARY_H

@class TSURetainedPointerKeyDictionary;

#import <Foundation/Foundation.h>


@interface TSTRWRetainedPointerKeyDictionary : NSObject {
    _opaque_pthread_rwlock_t _rwLock;
}


@property (retain, nonatomic) TSURetainedPointerKeyDictionary *retainedPointerKeyDictionary; // ivar: _retainedPointerKeyDictionary


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif