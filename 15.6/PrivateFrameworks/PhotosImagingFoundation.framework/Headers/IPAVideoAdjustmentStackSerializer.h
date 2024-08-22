// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAVIDEOADJUSTMENTSTACKSERIALIZER_H
#define IPAVIDEOADJUSTMENTSTACKSERIALIZER_H



#import "IPAAdjustmentStackSerializer.h"

@interface IPAVideoAdjustmentStackSerializer : IPAAdjustmentStackSerializer



-(id)_adjustmentStackFromData:(id)arg0 error:(*id)arg1 ;
-(id)_dataFromAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)dataFromVideoAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)videoAdjustmentStackFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif