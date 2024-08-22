// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHPOOLING2DOPDESCRIPTOR_H
#define MPSGRAPHPOOLING2DOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphPooling2DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL ceilMode; // ivar: _ceilMode
@property (nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) BOOL includeZeroPadToAverage; // ivar: _includeZeroPadToAverage
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (nonatomic) unsigned int returnIndicesDataType; // ivar: _returnIndicesDataType
@property (nonatomic) NSUInteger returnIndicesMode; // ivar: _returnIndicesMode
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY


+(id)descriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 strideInX:(NSUInteger)arg2 strideInY:(NSUInteger)arg3 dilationRateInX:(NSUInteger)arg4 dilationRateInY:(NSUInteger)arg5 paddingLeft:(NSUInteger)arg6 paddingRight:(NSUInteger)arg7 paddingTop:(NSUInteger)arg8 paddingBottom:(NSUInteger)arg9 paddingStyle:(NSUInteger)arg10 dataLayout:(NSUInteger)arg11 ;
+(id)descriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 strideInX:(NSUInteger)arg2 strideInY:(NSUInteger)arg3 paddingStyle:(NSUInteger)arg4 dataLayout:(NSUInteger)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setExplicitPaddingWithPaddingLeft:(NSUInteger)arg0 paddingRight:(NSUInteger)arg1 paddingTop:(NSUInteger)arg2 paddingBottom:(NSUInteger)arg3 ;


@end


#endif