// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNESPRESSOTENSORSHAPE_H
#define VNESPRESSOTENSORSHAPE_H



#import "VNTensorShape.h"

@interface VNEspressoTensorShape : VNTensorShape

@property (readonly, nonatomic) NSUInteger batchNumber;
@property (readonly, nonatomic) NSUInteger channels;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic) NSUInteger width;


+(id)shapeForBlobDimensions:(struct ? *)arg0 ;


@end


#endif