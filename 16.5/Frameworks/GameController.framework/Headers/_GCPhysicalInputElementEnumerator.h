// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCPHYSICALINPUTELEMENTENUMERATOR_H
#define _GCPHYSICALINPUTELEMENTENUMERATOR_H

@class NSEnumerator;


#import "GCPhysicalInputElementCollection.h"

@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection *_collection;
    NSUInteger _currentIndex;
}




-(id)init;
-(id)nextObject;


@end


#endif