// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCONVOLUTION3DOPDESCRIPTOR_H
#define MPSGRAPHCONVOLUTION3DOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphConvolution3DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) NSUInteger dilationRateInZ; // ivar: _dilationRateInZ
@property (nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) NSUInteger paddingBack; // ivar: _paddingBack
@property (nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (nonatomic) NSUInteger paddingFront; // ivar: _paddingFront
@property (nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (nonatomic) NSUInteger strideInZ; // ivar: _strideInZ
@property (nonatomic) NSUInteger weightsLayout; // ivar: _weightsLayout


+(id)descriptorWithStrideInX:(NSUInteger)arg0 strideInY:(NSUInteger)arg1 strideInZ:(NSUInteger)arg2 dilationRateInX:(NSUInteger)arg3 dilationRateInY:(NSUInteger)arg4 dilationRateInZ:(NSUInteger)arg5 groups:(NSUInteger)arg6 paddingLeft:(NSUInteger)arg7 paddingRight:(NSUInteger)arg8 paddingTop:(NSUInteger)arg9 paddingBottom:(NSUInteger)arg10 paddingFront:(NSUInteger)arg11 paddingBack:(NSUInteger)arg12 paddingStyle:(NSUInteger)arg13 dataLayout:(NSUInteger)arg14 weightsLayout:(NSUInteger)arg15 ;
+(id)descriptorWithStrideInX:(NSUInteger)arg0 strideInY:(NSUInteger)arg1 strideInZ:(NSUInteger)arg2 dilationRateInX:(NSUInteger)arg3 dilationRateInY:(NSUInteger)arg4 dilationRateInZ:(NSUInteger)arg5 groups:(NSUInteger)arg6 paddingStyle:(NSUInteger)arg7 dataLayout:(NSUInteger)arg8 weightsLayout:(NSUInteger)arg9 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setExplicitPaddingWithPaddingLeft:(NSUInteger)arg0 paddingRight:(NSUInteger)arg1 paddingTop:(NSUInteger)arg2 paddingBottom:(NSUInteger)arg3 paddingFront:(NSUInteger)arg4 paddingBack:(NSUInteger)arg5 ;


@end


#endif