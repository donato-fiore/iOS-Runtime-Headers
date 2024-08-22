// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAVIDEOADJUSTMENTSTACKSERIALIZER_V10_H
#define IPAVIDEOADJUSTMENTSTACKSERIALIZER_V10_H



#import "IPAVideoAdjustmentStackSerializer.h"

@interface IPAVideoAdjustmentStackSerializer_v10 : IPAVideoAdjustmentStackSerializer



-(id)archiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)dataFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)dataFromVideoAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)videoAdjustmentFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)videoAdjustmentStackFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif