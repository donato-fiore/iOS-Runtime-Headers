// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTINITIALIZATIONCONTEXT_H
#define _GCDEVICEPHYSICALINPUTINITIALIZATIONCONTEXT_H

@protocol _GCDevicePhysicalInputViewInitializationContext;

#import <Foundation/Foundation.h>

#import "_GCDevicePhysicalInputBase.h"

@interface _GCDevicePhysicalInputInitializationContext : NSObject <_GCDevicePhysicalInputViewInitializationContext>

 {
    *__CFArray _views;
    id *_viewProperties;
    id *_viewState;
}


@property (readonly) _GCDevicePhysicalInputBase *implementation; // ivar: _implementation


-(NSUInteger)view:(id)arg0 allocateObjectSlotForTransaction:(BOOL)arg1 withCopyOfValueFromView:(id)arg2 slot:(NSUInteger)arg3 ;
-(NSUInteger)view:(id)arg0 allocatePrimitiveSlotForTransaction:(BOOL)arg1 withCopyOfValueFromView:(id)arg2 slot:(NSUInteger)arg3 ;
-(NSUInteger)view:(id)arg0 makeReferenceToView:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif