// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FATFIELD_H
#define FATFIELD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FATField.h"

@interface FATField : NSObject

@property unsigned int index; // ivar: _index
@property (retain, nonatomic) FATField *keyField; // ivar: _keyField
@property (retain, nonatomic) NSString *name; // ivar: _name
@property BOOL optional; // ivar: _optional
@property (nonatomic) Class structClass; // ivar: _structClass
@property unsigned int type; // ivar: _type
@property (retain, nonatomic) FATField *valueField; // ivar: _valueField


+(id)fieldWithIndex:(unsigned int)arg0 type:(unsigned int)arg1 optional:(BOOL)arg2 name:(id)arg3 ;
+(id)fieldWithIndex:(unsigned int)arg0 type:(unsigned int)arg1 optional:(BOOL)arg2 name:(id)arg3 keyField:(id)arg4 valueField:(id)arg5 ;
+(id)fieldWithIndex:(unsigned int)arg0 type:(unsigned int)arg1 optional:(BOOL)arg2 name:(id)arg3 structClass:(Class)arg4 ;
+(id)fieldWithIndex:(unsigned int)arg0 type:(unsigned int)arg1 optional:(BOOL)arg2 name:(id)arg3 valueField:(id)arg4 ;
+(id)nameForFatFieldType:(unsigned int)arg0 ;
-(id)description;


@end


#endif