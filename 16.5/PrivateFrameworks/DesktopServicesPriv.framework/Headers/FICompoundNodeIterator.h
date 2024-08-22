// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FICOMPOUNDNODEITERATOR_H
#define FICOMPOUNDNODEITERATOR_H



#import "FINodeIterator.h"

@interface FICompoundNodeIterator : FINodeIterator {
    vector<FINodeIterator *, std::allocator<FINodeIterator *>> _subIterators;
    NSUInteger fCurrentIterator;
}




-(BOOL)fullyPopulated;
-(NSUInteger)estimatedSize;
-(id)first;
-(id)initWithFINodes:(id)arg0 iteratorIncludingInvisibleItems:(BOOL)arg1 ;
-(id)next;


@end


#endif