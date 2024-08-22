// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTSTATETABLE_H
#define _GCDEVICEPHYSICALINPUTSTATETABLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _GCDevicePhysicalInputStateTable : NSObject <NSCopying>

 {
    os_unfair_lock_s _stateLock;
    NSUInteger _primitiveStateGeneration;
    NSUInteger _objectStateGeneration;
    *PrimitiveStateEntry _primitiveState;
    *ObjectStateEntry _objectState;
}


@property (readonly) unsigned short magic; // ivar: _magic
@property (readonly) unsigned int objectSlotCount; // ivar: _objectSlotCount
@property (readonly) unsigned int primitiveSlotCount; // ivar: _primitiveSlotCount


-(NSUInteger)primitiveValueAtIndex:(unsigned int)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)objectValueAtIndex:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setObjectValue:(id)arg0 atIndex:(unsigned int)arg1 policy:(NSUInteger)arg2 ;
-(void)setPrimitiveValue:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;


@end


#endif