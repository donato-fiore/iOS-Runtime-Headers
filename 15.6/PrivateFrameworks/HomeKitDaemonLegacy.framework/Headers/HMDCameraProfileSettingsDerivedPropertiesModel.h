// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAPROFILESETTINGSDERIVEDPROPERTIESMODEL_H
#define HMDCAMERAPROFILESETTINGSDERIVEDPROPERTIESMODEL_H

@class HMBModel, NSDate, NSNumber;



@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property NSUInteger currentAccessMode;
@property (retain) NSDate *currentAccessModeChangeDate;
@property NSInteger currentAccessModeChangeReason;
@property (retain) NSNumber *currentAccessModeChangeReasonField;
@property (retain) NSNumber *currentAccessModeField;


+(id)hmbProperties;


@end


#endif