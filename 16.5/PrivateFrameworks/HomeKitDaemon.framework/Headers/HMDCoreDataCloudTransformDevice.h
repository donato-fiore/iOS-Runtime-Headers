// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDTRANSFORMDEVICE_H
#define HMDCOREDATACLOUDTRANSFORMDEVICE_H



#import "HMDCoreDataCloudTransformableLocalModelOnly.h"

@interface HMDCoreDataCloudTransformDevice : HMDCoreDataCloudTransformableLocalModelOnly



+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;


@end


#endif