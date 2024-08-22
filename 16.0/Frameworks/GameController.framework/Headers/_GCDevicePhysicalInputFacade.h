// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTFACADE_H
#define _GCDEVICEPHYSICALINPUTFACADE_H

@class GCDevicePhysicalInputView, NSString;
@protocol GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff, GCDevice;


#import "_GCDevicePhysicalInputBase.h"
#import "GCPhysicalInputElementCollection.h"

@interface _GCDevicePhysicalInputFacade : GCDevicePhysicalInputView <GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff>

 {
    _GCDevicePhysicalInputBase *_impl;
}


@property (readonly) GCPhysicalInputElementCollection *axes;
@property (readonly) GCPhysicalInputElementCollection *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) NSObject<GCDevice> *device;
@property (readonly) GCPhysicalInputElementCollection *dpads;
@property (copy) id *elementValueDidChangeHandler;
@property (readonly) GCPhysicalInputElementCollection *elements;
@property (readonly) NSUInteger hash;
@property (copy) id *inputStateAvailableHandler;
@property NSInteger inputStateQueueDepth;
@property (readonly) CGFloat lastEventLatency;
@property (readonly) CGFloat lastEventTimestamp;
@property (readonly) Class superclass;
@property (readonly) GCPhysicalInputElementCollection *switches;


-(NSInteger)changeForElement:(id)arg0 ;
-(id)capture;
-(id)changedElements;
-(id)init;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)nextInputState;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif