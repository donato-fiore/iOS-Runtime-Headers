// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONCONSTANTVALUESINTERNAL_H
#define MTLFUNCTIONCONSTANTVALUESINTERNAL_H

@protocol MTLFunctionConstantSPI;


#import "MTLFunctionConstantValues.h"

@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI>

 {
    *void _constantStorage;
}




-(*void)constantValueWithFunctionConstant:(id)arg0 ;
-(*void)serializedConstantDataForFunction:(id)arg0 dataSize:(*NSUInteger)arg1 errorMessage:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)newIndexedConstantArray;
-(id)newNamedConstantArray;
-(void)dealloc;
-(void)reset;
-(void)setConstantValue:(*void)arg0 type:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setConstantValue:(*void)arg0 type:(NSUInteger)arg1 withName:(id)arg2 ;
-(void)setConstantValues:(*void)arg0 type:(NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;


@end


#endif