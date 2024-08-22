// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTTRANSACTION_H
#define _GCDEVICEPHYSICALINPUTTRANSACTION_H

@class GCDevicePhysicalInputBase;


#import "_GCDevicePhysicalInput.h"
#import "_GCDevicePhysicalInputChangedElementsEnumerator.h"

@interface _GCDevicePhysicalInputTransaction : GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_implementation;
    CGFloat _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}




-(BOOL)allowsWeakReference;
-(BOOL)isSnapshot;
-(CGFloat)lastEventTimestamp;
-(id)description;
-(void)dealloc;


@end


#endif