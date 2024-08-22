// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLIST_H
#define GKLIST_H


#import <Foundation/Foundation.h>


@interface GKList : NSObject {
    *unsigned int _items;
    NSUInteger _size;
    _opaque_pthread_mutex_t _lock;
}


@property (readonly) NSUInteger count; // ivar: _count


-(BOOL)hasID:(unsigned int)arg0 ;
-(id)allMatchingObjectsFromTable:(id)arg0 ;
-(id)init;
-(id)initWithSize:(NSUInteger)arg0 ;
-(void)addID:(unsigned int)arg0 ;
-(void)addIDsFromList:(id)arg0 ;
-(void)copyItemsInto:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)print;
-(void)removeAllIDs;
-(void)removeID:(unsigned int)arg0 ;
-(void)unlock;


@end


#endif