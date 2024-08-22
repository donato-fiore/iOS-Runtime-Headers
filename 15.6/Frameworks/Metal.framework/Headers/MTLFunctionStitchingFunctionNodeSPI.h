// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLFUNCTIONSTITCHINGFUNCTIONNODESPI_H
#define MTLFUNCTIONSTITCHINGFUNCTIONNODESPI_H



#import "MTLFunctionStitchingFunctionNode.h"

@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode

@property (nonatomic) BOOL isEarlyReturn; // ivar: _isEarlyReturn


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 arguments:(id)arg1 controlDependencies:(id)arg2 isEarlyReturn:(BOOL)arg3 ;


@end


#endif