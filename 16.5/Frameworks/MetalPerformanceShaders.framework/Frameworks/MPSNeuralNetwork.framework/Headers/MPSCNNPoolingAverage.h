// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNPOOLINGAVERAGE_H
#define MPSCNNPOOLINGAVERAGE_H



#import "MPSCNNPooling.h"

@interface MPSCNNPoolingAverage : MPSCNNPooling

@property (nonatomic) NSUInteger zeroPadSizeX; // ivar: _zeroPadSizeX
@property (nonatomic) NSUInteger zeroPadSizeY; // ivar: _zeroPadSizeY


-(BOOL)isResultStateReusedAcrossBatch;
-(BOOL)pluginSupportsBatchEncode;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;
-(id)newPlugin;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif