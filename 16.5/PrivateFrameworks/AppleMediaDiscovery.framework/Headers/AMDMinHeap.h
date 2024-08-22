// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDMINHEAP_H
#define AMDMINHEAP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AMDMinHeap : NSObject

@property NSUInteger capacity; // ivar: _capacity
@property (copy) id *comparator; // ivar: _comparator
@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects
@property NSUInteger position; // ivar: _position


-(BOOL)add:(id)arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)size;
-(id)initWithCapacity:(NSUInteger)arg0 comparator:(id)arg1 ;
-(id)poll;
-(id)topN;
-(void)bubbleUp;
-(void)pushDown;
-(void)swap:(NSUInteger)arg0 with:(NSUInteger)arg1 ;


@end


#endif