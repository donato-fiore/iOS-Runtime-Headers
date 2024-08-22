// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCONVOLUTION2DOPDESCRIPTOR_H
#define MPSGRAPHCONVOLUTION2DOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphConvolution2DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (nonatomic) NSUInteger weightsLayout; // ivar: _weightsLayout


+(id)descriptorWithStrideInX:(NSUInteger)arg0 strideInY:(NSUInteger)arg1 dilationRateInX:(NSUInteger)arg2 dilationRateInY:(NSUInteger)arg3 groups:(NSUInteger)arg4 paddingLeft:(NSUInteger)arg5 paddingRight:(NSUInteger)arg6 paddingTop:(NSUInteger)arg7 paddingBottom:(NSUInteger)arg8 paddingStyle:(NSUInteger)arg9 dataLayout:(NSUInteger)arg10 weightsLayout:(NSUInteger)arg11 ;
+(id)descriptorWithStrideInX:(NSUInteger)arg0 strideInY:(NSUInteger)arg1 dilationRateInX:(NSUInteger)arg2 dilationRateInY:(NSUInteger)arg3 groups:(NSUInteger)arg4 paddingStyle:(NSUInteger)arg5 dataLayout:(NSUInteger)arg6 weightsLayout:(NSUInteger)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setExplicitPaddingWithPaddingLeft:(NSUInteger)arg0 paddingRight:(NSUInteger)arg1 paddingTop:(NSUInteger)arg2 paddingBottom:(NSUInteger)arg3 ;


@end


#endif