// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAPHOTOADJUSTMENTSTACKSERIALIZER_V10_H
#define IPAPHOTOADJUSTMENTSTACKSERIALIZER_V10_H



#import "IPAPhotoAdjustmentStackSerializer.h"

@interface IPAPhotoAdjustmentStackSerializer_v10 : IPAPhotoAdjustmentStackSerializer



-(id)archiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)dataFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)dataFromPhotoAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)photoAdjustmentFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)photoAdjustmentStackFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif