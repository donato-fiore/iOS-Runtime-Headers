// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTMUTABLESTATETABLE_H
#define _GCDEVICEPHYSICALINPUTMUTABLESTATETABLE_H

@class NSPointerArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _GCDevicePhysicalInputMutableStateTable : NSObject <NSCopying>

 {
    NSPointerArray *_primitiveState;
    NSPointerArray *_objectPolicyState;
    NSPointerArray *_objectState;
}


@property (readonly) unsigned short magic; // ivar: _magic
@property (readonly) unsigned int objectSlotCount;
@property (readonly) unsigned int primitiveSlotCount;


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