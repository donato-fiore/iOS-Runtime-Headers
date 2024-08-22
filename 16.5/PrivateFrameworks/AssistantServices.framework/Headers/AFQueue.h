// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFQUEUE_H
#define AFQUEUE_H

@protocol NSFastEnumeration, AFQueueDelegate;

#import <Foundation/Foundation.h>

#import "AFLinkedListItem.h"

@interface AFQueue : NSObject <NSFastEnumeration>

 {
    AFLinkedListItem *_head;
    AFLinkedListItem *_tail;
    NSUInteger _count;
}


@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<AFQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) id *frontObject;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_objects;
-(id)dequeueAllObjects;
-(id)dequeueObject;
-(id)description;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enqueueObject:(id)arg0 ;
-(void)enqueueObjects:(id)arg0 ;


@end


#endif