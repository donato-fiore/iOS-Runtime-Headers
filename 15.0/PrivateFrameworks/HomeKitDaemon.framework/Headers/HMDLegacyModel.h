// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLEGACYMODEL_H
#define HMDLEGACYMODEL_H

@class HMBModel;



@interface HMDLegacyModel : HMBModel



+(id)createWithLegacyRecord:(id)arg0 modelContainer:(id)arg1 error:(*id)arg2 ;
-(id)encodeWithExistingRecord:(id)arg0 cloudZone:(id)arg1 modelContainer:(id)arg2 error:(*id)arg3 ;


@end


#endif