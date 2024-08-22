// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINODEITERATORWITHEXTRACHILDREN_H
#define FINODEITERATORWITHEXTRACHILDREN_H



#import "FINodeIterator.h"

@interface FINodeIteratorWithExtraChildren : FINodeIterator

@property (retain, nonatomic) FINodeIterator *baseIterator; // ivar: _baseIterator
@property (nonatomic) BOOL baseIteratorDone; // ivar: _baseIteratorDone
@property (retain, nonatomic) FINodeIterator *extraIterator; // ivar: _extraIterator


-(BOOL)fullyPopulated;
-(NSUInteger)estimatedSize;
-(id)first;
-(id)initWithContainer:(id)arg0 extraChildren:(id)arg1 synchronous:(BOOL)arg2 includingInvisibleItems:(BOOL)arg3 ;
-(id)next;


@end


#endif