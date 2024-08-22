// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLFUNCTIONCONSTANTVALUES_H
#define MTLFUNCTIONCONSTANTVALUES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLFunctionConstantValues : NSObject <NSCopying>





+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;
-(void)setConstantValue:(*void)arg0 type:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setConstantValue:(*void)arg0 type:(NSUInteger)arg1 withName:(id)arg2 ;
-(void)setConstantValues:(*void)arg0 type:(NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;


@end


#endif