// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIVEFSRBTREE_H
#define LIVEFSRBTREE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface LiveFSRBTree : NSObject {
    id *ourComparitor;
    *rb_tree btree;
    *? btOps;
}


@property (retain) NSMutableArray *ourData; // ivar: _ourData


+(id)newWithComparitor:(id)arg0 ;
-(NSUInteger)count;
-(id)extractItemsInRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(id)initWithComparitor:(id)arg0 ;
-(void)addDataBuffer:(id)arg0 ;
-(void)addEntry:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif