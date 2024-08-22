// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTVIEW_H
#define _GCDEVICEPHYSICALINPUTVIEW_H

@class NSString;
@protocol _GCDevicePhysicalInputViewState, _GCDevicePhysicalInputViewInitializationContext;

#import <Foundation/Foundation.h>

#import "_GCDevicePhysicalInputBase.h"

@interface _GCDevicePhysicalInputView : NSObject <_GCDevicePhysicalInputViewState, _GCDevicePhysicalInputViewInitializationContext>

 {
    id<_GCDevicePhysicalInputViewState> *_storage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) _GCDevicePhysicalInputBase *implementation;
@property (readonly) Class superclass;


-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(NSUInteger)retainCount;
-(NSUInteger)view:(id)arg0 allocateObjectSlotForTransaction:(BOOL)arg1 withCopyOfValueFromView:(id)arg2 slot:(NSUInteger)arg3 ;
-(NSUInteger)view:(id)arg0 allocatePrimitiveSlotForTransaction:(BOOL)arg1 withCopyOfValueFromView:(id)arg2 slot:(NSUInteger)arg3 ;
-(NSUInteger)view:(id)arg0 makeReferenceToView:(id)arg1 ;
-(NSUInteger)view:(id)arg0 primitiveValueForSlot:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)retain;
-(id)view:(id)arg0 objectValueForSlot:(*NSUInteger)arg1 ;
-(id)view:(id)arg0 viewForSlot:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)release;
-(void)view:(id)arg0 setObjectValue:(id)arg1 forSlot:(*NSUInteger)arg2 policy:(NSUInteger)arg3 ;
-(void)view:(id)arg0 setPrimitiveValue:(NSUInteger)arg1 forSlot:(*NSUInteger)arg2 ;


@end


#endif