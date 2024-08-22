// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAVIDEOADJUSTMENTSTACKSERIALIZER_SLM_V11_H
#define IPAVIDEOADJUSTMENTSTACKSERIALIZER_SLM_V11_H



#import "IPAVideoAdjustmentStackSerializer.h"

@interface IPAVideoAdjustmentStackSerializer_SLM_v11 : IPAVideoAdjustmentStackSerializer



-(id)archiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)dataFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)dataFromVideoAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)videoAdjustmentStackFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif