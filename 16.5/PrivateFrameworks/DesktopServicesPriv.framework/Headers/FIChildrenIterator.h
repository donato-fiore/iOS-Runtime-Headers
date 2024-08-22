// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FICHILDRENITERATOR_H
#define FICHILDRENITERATOR_H

@class NSArray;


#import "FINodeIterator.h"

@interface FIChildrenIterator : FINodeIterator

@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) BOOL includeInvisible; // ivar: _includeInvisible
@property (nonatomic) NSUInteger index; // ivar: _index


-(BOOL)fullyPopulated;
-(NSUInteger)estimatedSize;
-(id)first;
-(id)initWithChildren:(id)arg0 includingInvisibleItems:(BOOL)arg1 ;
-(id)next;
-(id)rawNext;


@end


#endif