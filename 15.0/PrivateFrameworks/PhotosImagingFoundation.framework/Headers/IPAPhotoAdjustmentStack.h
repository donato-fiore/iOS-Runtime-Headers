// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAPHOTOADJUSTMENTSTACK_H
#define IPAPHOTOADJUSTMENTSTACK_H



#import "IPAAdjustmentStack.h"
#import "IPAPhotoAdjustmentPipeline.h"

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack

@property (nonatomic) PFIntSize_st inputSize; // ivar: _inputSize
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline; // ivar: _pipeline


-(id)_debugDescriptionSuffix;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)maskUUIDs;
-(id)minimumVersionForFormat:(id)arg0 ;


@end


#endif