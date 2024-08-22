// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCRACINGWHEELINPUT_H
#define GCRACINGWHEELINPUT_H

@class NSString;
@protocol GCDevicePhysicalInput, GCDevice;


#import "GCRacingWheelInputState.h"
#import "GCPhysicalInputElementCollection.h"

@interface GCRacingWheelInput : GCRacingWheelInputState <GCDevicePhysicalInput>



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




@end


#endif