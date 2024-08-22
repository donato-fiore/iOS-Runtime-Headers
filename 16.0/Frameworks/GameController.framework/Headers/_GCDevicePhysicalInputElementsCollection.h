// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTELEMENTSCOLLECTION_H
#define _GCDEVICEPHYSICALINPUTELEMENTSCOLLECTION_H



#import "GCPhysicalInputElementCollection.h"
#import "_GCDevicePhysicalInputBase.h"

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}




-(BOOL)allowsWeakReference;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)elementForAlias:(id)arg0 ;
-(id)retain;
-(void)release;


@end


#endif