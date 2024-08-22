// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTCHANGEDELEMENTSENUMERATOR_H
#define _GCDEVICEPHYSICALINPUTCHANGEDELEMENTSENUMERATOR_H

@class NSEnumerator;


#import "_GCDevicePhysicalInputTransaction.h"

@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator {
    _GCDevicePhysicalInputTransaction *_implementation;
    NSUInteger _currentIndex;
}




-(id)nextObject;
-(id)retain;
-(void)release;


@end


#endif