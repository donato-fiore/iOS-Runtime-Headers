// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNRESIZEBILINEAR_H
#define MPSNNRESIZEBILINEAR_H



#import "MPSCNNKernel.h"

@interface MPSNNResizeBilinear : MPSCNNKernel

@property (readonly, nonatomic) BOOL alignCorners; // ivar: _alignCorners
@property (readonly, nonatomic) NSUInteger resizeHeight; // ivar: _resizeHeight
@property (readonly, nonatomic) NSUInteger resizeWidth; // ivar: _resizeWidth


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 resizeWidth:(NSUInteger)arg1 resizeHeight:(NSUInteger)arg2 alignCorners:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif