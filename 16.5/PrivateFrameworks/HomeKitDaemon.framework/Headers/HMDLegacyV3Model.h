// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLEGACYV3MODEL_H
#define HMDLEGACYV3MODEL_H

@class NSData;


#import "HMDLegacyModel.h"

@interface HMDLegacyV3Model : HMDLegacyModel

@property (retain, nonatomic) NSData *cloudBlob;


+(id)createWithLegacyRecord:(id)arg0 modelContainer:(id)arg1 error:(*id)arg2 ;
+(id)properties;
-(id)encodeWithExistingRecord:(id)arg0 cloudZone:(id)arg1 modelContainer:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif