// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSULINKEDPOINTERSETREVERSEENUMERATOR_H
#define OITSULINKEDPOINTERSETREVERSEENUMERATOR_H

@class NSEnumerator;


#import "OITSULinkedPointerSetEntry.h"

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry *mTail;
    OITSULinkedPointerSetEntry *mLastUsed;
}




-(id)initWithLastEntry:(id)arg0 ;
-(id)nextObject;


@end


#endif