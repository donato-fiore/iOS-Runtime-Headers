// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLEGACYV4MODEL_H
#define HMDLEGACYV4MODEL_H



#import "HMDLegacyModel.h"

@interface HMDLegacyV4Model : HMDLegacyModel



+(Class)hmbModelClassForHMDModelClass:(Class)arg0 ;
+(id)createWithLegacyRecord:(id)arg0 modelContainer:(id)arg1 error:(*id)arg2 ;
+(id)hmbProperties;
-(id)convertToHMDModelObject;
-(id)encodeWithExistingRecord:(id)arg0 cloudZone:(id)arg1 modelContainer:(id)arg2 error:(*id)arg3 ;
-(id)hmbType;


@end


#endif