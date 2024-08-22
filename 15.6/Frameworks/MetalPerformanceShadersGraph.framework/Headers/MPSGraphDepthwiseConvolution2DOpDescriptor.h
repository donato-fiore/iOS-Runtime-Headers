// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHDEPTHWISECONVOLUTION2DOPDESCRIPTOR_H
#define MPSGRAPHDEPTHWISECONVOLUTION2DOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphDepthwiseConvolution2DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (nonatomic) NSUInteger weightsLayout; // ivar: _weightsLayout


+(id)descriptorWithDataLayout:(NSUInteger)arg0 weightsLayout:(NSUInteger)arg1 ;
+(id)descriptorWithStrideInX:(NSUInteger)arg0 strideInY:(NSUInteger)arg1 dilationRateInX:(NSUInteger)arg2 dilationRateInY:(NSUInteger)arg3 paddingLeft:(NSUInteger)arg4 paddingRight:(NSUInteger)arg5 paddingTop:(NSUInteger)arg6 paddingBottom:(NSUInteger)arg7 paddingStyle:(NSUInteger)arg8 dataLayout:(NSUInteger)arg9 weightsLayout:(NSUInteger)arg10 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setExplicitPaddingWithPaddingLeft:(NSUInteger)arg0 paddingRight:(NSUInteger)arg1 paddingTop:(NSUInteger)arg2 paddingBottom:(NSUInteger)arg3 ;


@end


#endif