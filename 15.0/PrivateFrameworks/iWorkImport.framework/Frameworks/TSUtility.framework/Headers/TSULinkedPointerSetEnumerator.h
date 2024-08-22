// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSULINKEDPOINTERSETENUMERATOR_H
#define TSULINKEDPOINTERSETENUMERATOR_H

@class NSEnumerator;


#import "TSULinkedPointerSetEntry.h"

@interface TSULinkedPointerSetEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mLastUsed;
}




-(id)initWithFirstEntry:(id)arg0 ;
-(id)nextObject;


@end


#endif