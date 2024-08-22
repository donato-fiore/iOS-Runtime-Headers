// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKJSDATADICTIONARYEXPORTER_H
#define _IKJSDATADICTIONARYEXPORTER_H

@class NSMutableArray;


#import "IKJSObject.h"
#import "IKHandle.h"
#import "IKJSDataObservable.h"

@interface _IKJSDataDictionaryExporter : IKJSObject {
    IKHandle *_dataDictionaryHandle;
    NSMutableArray *_touchedPropertyPaths;
}


@property (readonly, weak, nonatomic) IKJSDataObservable *dataObservable; // ivar: _dataObservable


+(id)_dataDictionaryObjectFromObject:(id)arg0 forAccessorSequence:(id)arg1 ;
+(id)_dataDictionaryObjectFromValue:(id)arg0 inContext:(id)arg1 ;
+(id)_dataDictionaryObjectFromValueRef:(struct OpaqueJSValue *)arg0 inContextRef:(struct OpaqueJSContext *)arg1 ;
+(id)_updatedDataDictionaryObject:(id)arg0 fromValue:(id)arg1 forPropertyPaths:(id)arg2 inContext:(id)arg3 ;
-(id)dataDictionaryObject;
-(id)initWithAppContext:(id)arg0 dataObservable:(id)arg1 ;
-(void)touchPropertyPath:(id)arg0 ;


@end


#endif