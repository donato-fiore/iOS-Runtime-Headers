// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTBASE_H
#define _GCDEVICEPHYSICALINPUTBASE_H

@class NSDictionary, NSString;
@protocol _GCDevicePhysicalInputViewState, GCDevice;

#import <Foundation/Foundation.h>

#import "_GCDevicePhysicalInputElementsArray.h"
#import "_GCDevicePhysicalInputElementsCollection.h"
#import "_GCDevicePhysicalInputStateTable.h"
#import "_GCDevicePhysicalInputFacade.h"

@interface _GCDevicePhysicalInputBase : NSObject <_GCDevicePhysicalInputViewState>

 {
    id<GCDevice> *_device;
    NSUInteger _elementCount;
    *id _indexedElements;
    NSDictionary *_elementIndexByAlias;
    *__CFArray _additionalViews;
    _GCDevicePhysicalInputElementsArray *_indexedElementViews;
    _GCDevicePhysicalInputElementsCollection *_elementCollection;
    _GCDevicePhysicalInputStateTable *_viewProperties;
    _GCDevicePhysicalInputStateTable *_viewState;
    _GCDevicePhysicalInputFacade *_facade;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<GCDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastEventLatency;
@property (readonly) CGFloat lastEventTimestamp;
@property (readonly, getter=isSnapshot) BOOL snapshot;
@property (readonly) Class superclass;


-(NSUInteger)view:(id)arg0 primitiveValueForSlot:(*NSUInteger)arg1 ;
-(id)_initWithFacadeTemplate:(id)arg0 elementsTemplates:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)view:(id)arg0 objectValueForSlot:(*NSUInteger)arg1 ;
-(id)view:(id)arg0 viewForSlot:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)view:(id)arg0 setObjectValue:(id)arg1 forSlot:(*NSUInteger)arg2 policy:(NSUInteger)arg3 ;
-(void)view:(id)arg0 setPrimitiveValue:(NSUInteger)arg1 forSlot:(*NSUInteger)arg2 ;


@end


#endif