// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDARRAYITERATOR_H
#define WDARRAYITERATOR_H

@class NSArray;


#import "WDIterator.h"

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}




-(BOOL)hasNext;
-(id)initWithArray:(id)arg0 ;
-(id)next;


@end


#endif