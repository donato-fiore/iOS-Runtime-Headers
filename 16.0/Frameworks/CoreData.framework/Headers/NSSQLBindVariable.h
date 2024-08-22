// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLBINDVARIABLE_H
#define NSSQLBINDVARIABLE_H


#import <Foundation/Foundation.h>

#import "NSPropertyDescription.h"

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id *_value;
    NSPropertyDescription *_propertyDescription;
    NSPropertyDescription *_tombstonedPropertyDescription;
    NSInteger _int64;
}




-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)allowsCoercion;
-(BOOL)hasObjectValue;
-(NSInteger)int64;
-(NSUInteger)retainCount;
-(id)initWithInt64:(NSInteger)arg0 sqlType:(unsigned char)arg1 ;
-(id)initWithUnsignedInt:(unsigned int)arg0 sqlType:(unsigned char)arg1 ;
-(id)initWithValue:(id)arg0 sqlType:(unsigned char)arg1 propertyDescription:(id)arg2 ;
-(id)initWithValue:(id)arg0 sqlType:(unsigned char)arg1 propertyDescription:(id)arg2 allowCoercion:(BOOL)arg3 ;
-(id)propertyDescription;
-(id)retain;
-(id)tombstonedPropertyDescription;
-(id)value;
-(unsigned char)sqlType;
-(unsigned int)index;
-(unsigned int)unsignedInt;
-(void)dealloc;
-(void)release;
-(void)setIndex:(unsigned int)arg0 ;
-(void)setInt64:(NSInteger)arg0 ;
-(void)setSQLType:(unsigned char)arg0 ;
-(void)setTombstonedPropertyDescription:(id)arg0 ;
-(void)setUnsignedInt:(unsigned int)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif