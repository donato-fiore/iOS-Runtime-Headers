// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHPOOLING4DOPDESCRIPTOR_H
#define MPSGRAPHPOOLING4DOPDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphPooling4DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL ceilMode; // ivar: _ceilMode
@property (copy, nonatomic) NSArray *dilationRates; // ivar: _dilationRates
@property (nonatomic) BOOL includeZeroPadToAverage; // ivar: _includeZeroPadToAverage
@property (copy, nonatomic) NSArray *kernelSizes; // ivar: _kernelSizes
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (copy, nonatomic) NSArray *paddingValues; // ivar: _paddingValues
@property (nonatomic) unsigned int returnIndicesDataType; // ivar: _returnIndicesDataType
@property (nonatomic) NSUInteger returnIndicesMode; // ivar: _returnIndicesMode
@property (copy, nonatomic) NSArray *strides; // ivar: _strides


+(id)descriptorWithKernelSizes:(id)arg0 paddingStyle:(NSUInteger)arg1 ;
+(id)descriptorWithKernelSizes:(id)arg0 strides:(id)arg1 dilationRates:(id)arg2 paddingValues:(id)arg3 paddingStyle:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif