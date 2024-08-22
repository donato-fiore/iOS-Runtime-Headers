// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTABLE_H
#define GKTABLE_H


#import <Foundation/Foundation.h>


@interface GKTable : NSObject {
    *_gktableitem _items;
    NSUInteger _size;
    _opaque_pthread_mutex_t _lock;
}


@property (readonly) NSUInteger count; // ivar: _count


-(id)allObjects;
-(id)init;
-(id)initWithSize:(NSUInteger)arg0 ;
-(id)objectForKey:(unsigned int)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)print;
-(void)removeAllObjects;
-(void)removeObjectForKey:(unsigned int)arg0 ;
-(void)setObject:(id)arg0 forKey:(unsigned int)arg1 ;
-(void)touchObject:(id)arg0 ;
-(void)touchObjectForKey:(unsigned int)arg0 ;
-(void)unlock;


@end


#endif