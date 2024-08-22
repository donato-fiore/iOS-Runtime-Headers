// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLEGACYV0MODEL_H
#define HMDLEGACYV0MODEL_H

@class NSData, NSNumber;


#import "HMDLegacyModel.h"

@interface HMDLegacyV0Model : HMDLegacyModel

@property (retain, nonatomic) NSData *cloudBlob;
@property (retain, nonatomic) NSData *cloudBlobV2;
@property (retain, nonatomic) NSNumber *cloudBlobsReadOnly;


+(id)createWithLegacyRecord:(id)arg0 modelContainer:(id)arg1 error:(*id)arg2 ;
+(id)properties;
-(id)encodeWithExistingRecord:(id)arg0 cloudZone:(id)arg1 modelContainer:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif