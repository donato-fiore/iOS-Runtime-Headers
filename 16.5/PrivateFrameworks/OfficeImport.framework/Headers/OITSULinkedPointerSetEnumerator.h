// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSULINKEDPOINTERSETENUMERATOR_H
#define OITSULINKEDPOINTERSETENUMERATOR_H

@class NSEnumerator;


#import "OITSULinkedPointerSetEntry.h"

@interface OITSULinkedPointerSetEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mLastUsed;
}




-(id)initWithFirstEntry:(id)arg0 ;
-(id)nextObject;


@end


#endif