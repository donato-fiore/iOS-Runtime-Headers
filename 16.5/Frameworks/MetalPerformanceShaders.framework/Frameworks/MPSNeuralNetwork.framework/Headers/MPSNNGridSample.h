// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNGRIDSAMPLE_H
#define MPSNNGRIDSAMPLE_H



#import "MPSCNNBinaryKernel.h"

@interface MPSNNGridSample : MPSCNNBinaryKernel

@property (nonatomic) BOOL useGridValueAsInputCoordinate; // ivar: _useGridValueAsInputCoordinate


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif