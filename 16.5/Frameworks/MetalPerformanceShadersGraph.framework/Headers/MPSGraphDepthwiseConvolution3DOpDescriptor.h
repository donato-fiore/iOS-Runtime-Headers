// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHDEPTHWISECONVOLUTION3DOPDESCRIPTOR_H
#define MPSGRAPHDEPTHWISECONVOLUTION3DOPDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphDepthwiseConvolution3DOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSInteger channelDimensionIndex; // ivar: _channelDimensionIndex
@property (copy, nonatomic) NSArray *dilationRates; // ivar: _dilationRates
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (copy, nonatomic) NSArray *paddingValues; // ivar: _paddingValues
@property (copy, nonatomic) NSArray *strides; // ivar: _strides


+(id)descriptorWithPaddingStyle:(NSUInteger)arg0 ;
+(id)descriptorWithStrides:(id)arg0 dilationRates:(id)arg1 paddingValues:(id)arg2 paddingStyle:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif