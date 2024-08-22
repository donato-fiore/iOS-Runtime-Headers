// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOKCONNECTION_H
#define IOKCONNECTION_H


#import <Foundation/Foundation.h>

#import "IOKService.h"

@interface IOKConnection : NSObject

@property (readonly, nonatomic) unsigned int connection; // ivar: _connection
@property (readonly, copy, nonatomic) IOKService *service;


-(BOOL)callAsyncMethodWithSelector:(unsigned int)arg0 wakePort:(unsigned int)arg1 reference:(*NSUInteger)arg2 referenceCount:(unsigned int)arg3 scalarInputs:(*NSUInteger)arg4 scalarInputCount:(unsigned int)arg5 scalarOutputs:(*NSUInteger)arg6 scalarOutputCount:(*unsigned int)arg7 error:(*id)arg8 ;
-(BOOL)callAsyncMethodWithSelector:(unsigned int)arg0 wakePort:(unsigned int)arg1 reference:(*NSUInteger)arg2 referenceCount:(unsigned int)arg3 scalarInputs:(*NSUInteger)arg4 scalarInputCount:(unsigned int)arg5 structInput:(*void)arg6 structInputSize:(NSUInteger)arg7 scalarOutputs:(*NSUInteger)arg8 scalarOutputCount:(*unsigned int)arg9 structOutput:(*void)arg10 structOutputSize:(*NSUInteger)arg11 error:(*id)arg12 ;
-(BOOL)callAsyncMethodWithSelector:(unsigned int)arg0 wakePort:(unsigned int)arg1 reference:(*NSUInteger)arg2 referenceCount:(unsigned int)arg3 structInput:(*void)arg4 structInputSize:(NSUInteger)arg5 structOutput:(*void)arg6 structOutputSize:(*NSUInteger)arg7 error:(*id)arg8 ;
-(BOOL)callMethodWithSelector:(unsigned int)arg0 scalarInputs:(*NSUInteger)arg1 scalarInputCount:(unsigned int)arg2 scalarOutputs:(*NSUInteger)arg3 scalarOutputCount:(*unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)callMethodWithSelector:(unsigned int)arg0 scalarInputs:(*NSUInteger)arg1 scalarInputCount:(unsigned int)arg2 structInput:(*void)arg3 structInputSize:(NSUInteger)arg4 scalarOutputs:(*NSUInteger)arg5 scalarOutputCount:(*unsigned int)arg6 structOutput:(*void)arg7 structOutputSize:(*NSUInteger)arg8 error:(*id)arg9 ;
-(BOOL)callMethodWithSelector:(unsigned int)arg0 structInput:(*void)arg1 structInputSize:(NSUInteger)arg2 structOutput:(*void)arg3 structOutputSize:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mapMemory64OfType:(unsigned int)arg0 withOptions:(unsigned int)arg1 atAddress:(*NSUInteger)arg2 ofSize:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)setNotificationPort:(id)arg0 ofType:(unsigned int)arg1 withReference:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)setProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)setProperty:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)trap:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 p2:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 p2:(NSUInteger)arg2 p3:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 p2:(NSUInteger)arg2 p3:(NSUInteger)arg3 p4:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 p2:(NSUInteger)arg2 p3:(NSUInteger)arg3 p4:(NSUInteger)arg4 p5:(NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)trap:(unsigned int)arg0 p1:(NSUInteger)arg1 p2:(NSUInteger)arg2 p3:(NSUInteger)arg3 p4:(NSUInteger)arg4 p5:(NSUInteger)arg5 p6:(NSUInteger)arg6 error:(*id)arg7 ;
-(BOOL)unmapMemory64OfType:(unsigned int)arg0 atAddress:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 andType:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif