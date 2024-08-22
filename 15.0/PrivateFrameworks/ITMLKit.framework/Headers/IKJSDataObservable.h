// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSDATAOBSERVABLE_H
#define IKJSDATAOBSERVABLE_H

@class JSManagedValue, NSMutableArray, NSArray, JSValue;
@protocol IKJSDataObservable;


#import "IKJSEventListenerObject.h"
#import "_IKJSDataDictionaryExporter.h"
#import "IKJSDataObservable.h"

@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable>

 {
    JSManagedValue *_managedTargetValue;
    NSMutableArray *_observerRecords;
    _IKJSDataDictionaryExporter *_exporter;
}


@property (readonly, nonatomic) BOOL isBoxed; // ivar: _isBoxed
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL observersEnabled; // ivar: _observersEnabled
@property (readonly, weak, nonatomic) IKJSDataObservable *parent; // ivar: _parent
@property (readonly, copy, nonatomic) NSArray *parentAccessorSequence; // ivar: _parentAccessorSequence
@property (readonly, weak, nonatomic) JSValue *targetValue;


+(id)_proxyHandlerForValue:(id)arg0 boxed:(BOOL)arg1 context:(id)arg2 ;
+(id)jsExportedProperties;
+(id)toDataObservable:(id)arg0 ;
+(id)toDataObservable:(id)arg0 proxy:(*id)arg1 ;
-(id)_initWithTargetValue:(id)arg0 boxed:(BOOL)arg1 ;
-(id)dataDictionaryObject;
-(id)exportValue;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg0 extraInfo:(id)arg1 ;
-(id)getPropertyPath:(id)arg0 ;
-(id)init;
-(id)initWithTargetValue:(id)arg0 ;
-(id)valueForAccessorSequence:(id)arg0 closestParent:(*id)arg1 accessorSequenceFromClosestParent:(*id)arg2 ;
-(id)valueForPropertyPath:(id)arg0 boxed:(BOOL)arg1 ;
-(void)_updateValueAtPropertyPath:(id)arg0 touch:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)addObserver:(id)arg0 forPropertyPathWithString:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetValueForPropertyPath:(id)arg0 ;
-(void)setPropertyPath:(id)arg0 ;
-(void)setValue:(id)arg0 forPropertyPath:(id)arg1 ;
-(void)touchPathWithAccessorSequence:(id)arg0 extraInfo:(id)arg1 ;
-(void)touchPropertyPath:(id)arg0 ;


@end


#endif