// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCMOTIONEVENTHIDADAPTER_H
#define _GCMOTIONEVENTHIDADAPTER_H

@class NSString, NSArray;
@protocol _GCMotionEventSource, _GCHIDEventSource;

#import <Foundation/Foundation.h>


@interface _GCMotionEventHIDAdapter : NSObject <_GCMotionEventSource>



@property (retain, nonatomic) id *HIDEventObservation; // ivar: _HIDEventObservation
@property (retain, nonatomic) NSObject<_GCHIDEventSource> *HIDEventSource; // ivar: _HIDEventSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSource:(id)arg0 service:(id)arg1 ;
-(id)observeMotionEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif