// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCGAMEPADEVENTGAMEPADHIDADAPTER_H
#define _GCGAMEPADEVENTGAMEPADHIDADAPTER_H

@class NSString, NSArray;
@protocol _GCGamepadEventSource, _GCHIDEventSource;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventGamepadHIDAdapter : NSObject <_GCGamepadEventSource>



@property (retain, nonatomic) id *HIDEventObservation; // ivar: _HIDEventObservation
@property (retain, nonatomic) NSObject<_GCHIDEventSource> *HIDEventSource; // ivar: _HIDEventSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSource:(id)arg0 service:(id)arg1 ;
-(id)observeGamepadEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif