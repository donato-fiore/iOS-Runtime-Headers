// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSTENCILOPDESCRIPTOR_H
#define MPSGRAPHSTENCILOPDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphStencilOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSInteger boundaryMode; // ivar: _boundaryMode
@property (copy, nonatomic) NSArray *dilationRates; // ivar: _dilationRates
@property (copy, nonatomic) NSArray *explicitPadding; // ivar: _explicitPadding
@property (copy, nonatomic) NSArray *offsets; // ivar: _offsets
@property (nonatomic) float paddingConstant; // ivar: _paddingConstant
@property (nonatomic) NSUInteger paddingStyle; // ivar: _paddingStyle
@property (nonatomic) NSUInteger reductionMode; // ivar: _reductionMode
@property (copy, nonatomic) NSArray *strides; // ivar: _strides


+(id)descriptorWithExplicitPadding:(id)arg0 ;
+(id)descriptorWithOffsets:(id)arg0 explicitPadding:(id)arg1 ;
+(id)descriptorWithPaddingStyle:(NSUInteger)arg0 ;
+(id)descriptorWithReductionMode:(NSUInteger)arg0 offsets:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 explicitPadding:(id)arg4 boundaryMode:(NSInteger)arg5 paddingStyle:(NSUInteger)arg6 paddingConstant:(float)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif