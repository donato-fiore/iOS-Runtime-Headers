// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAPHOTOADJUSTMENTSTACKSERIALIZER_H
#define IPAPHOTOADJUSTMENTSTACKSERIALIZER_H



#import "IPAAdjustmentStackSerializer.h"

@interface IPAPhotoAdjustmentStackSerializer : IPAAdjustmentStackSerializer



-(id)_adjustmentStackFromData:(id)arg0 error:(*id)arg1 ;
-(id)_dataFromAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)dataFromPhotoAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)photoAdjustmentStackFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif