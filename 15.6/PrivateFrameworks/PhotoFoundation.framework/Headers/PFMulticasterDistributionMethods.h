// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMULTICASTERDISTRIBUTIONMETHODS_H
#define PFMULTICASTERDISTRIBUTIONMETHODS_H


#import <Foundation/Foundation.h>


@interface PFMulticasterDistributionMethods : NSObject



-(void)distribute:(id)arg0 ;
-(void)distribute:(id)arg0 boolArg:(BOOL)arg1 ;
-(void)distribute:(id)arg0 doubleArg:(CGFloat)arg1 ;
-(void)distribute:(id)arg0 double_Arg:(CGFloat)arg1 double_Arg:(CGFloat)arg2 ;
-(void)distribute:(id)arg0 double_Arg:(CGFloat)arg1 object_Arg:(id)arg2 ;
-(void)distribute:(id)arg0 int32t_Arg:(int)arg1 double_Arg:(CGFloat)arg2 ;
-(void)distribute:(id)arg0 int32t_Arg:(int)arg1 int32t_Arg:(int)arg2 ;
-(void)distribute:(id)arg0 int32t_Arg:(int)arg1 object_Arg:(id)arg2 ;
-(void)distribute:(id)arg0 int64t_Arg:(NSInteger)arg1 int64t_Arg:(NSInteger)arg2 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 BOOLArg:(BOOL)arg2 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 BOOLArg:(BOOL)arg2 BOOLArg:(BOOL)arg3 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 objectArg:(id)arg2 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 objectArg:(id)arg2 objectArg:(id)arg3 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 uint64_tArg:(NSUInteger)arg2 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 uint64_tArg:(NSUInteger)arg2 uint64_tArg:(NSUInteger)arg3 ;
-(void)distribute:(id)arg0 objectArg:(id)arg1 uint64_tArg:(NSUInteger)arg2 uint64_tArg:(NSUInteger)arg3 uint64_tArg:(NSUInteger)arg4 ;
-(void)distribute:(id)arg0 pfIntSizeArg:(struct PFIntSize_st )arg1 pfIntSizeArg:(struct PFIntSize_st )arg2 ;
-(void)distribute:(id)arg0 uint64_tArg:(NSUInteger)arg1 ;
-(void)distribute:(id)arg0 uint64_tArg:(NSUInteger)arg1 objectArg:(id)arg2 ;
-(void)distribute:(id)arg0 uint64_tArg:(NSUInteger)arg1 objectArg:(id)arg2 objectArg:(id)arg3 ;
-(void)distribute:(id)arg0 uint64_tArg:(NSUInteger)arg1 uint64_tArg:(NSUInteger)arg2 ;
-(void)distribute:(id)arg0 uint64_tArg:(NSUInteger)arg1 uint64_tArg:(NSUInteger)arg2 uint64_tArg:(NSUInteger)arg3 ;
-(void)distribute:(id)arg0 unsignedIntArg:(unsigned int)arg1 unsignedIntArg:(unsigned int)arg2 ;
-(void)distributeBOOL:(BOOL)arg0 ;
-(void)distributeDispatchBlock:(id)arg0 ;
-(void)distributeDouble:(CGFloat)arg0 ;
-(void)distributeFloat:(float)arg0 ;
-(void)distributeNSInteger:(NSInteger)arg0 ;
-(void)distributeNSUInteger:(NSUInteger)arg0 ;
-(void)distributeNoArg;


@end


#endif