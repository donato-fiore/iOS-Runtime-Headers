// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEXTERNALPERSONMANAGERSETTINGSMODEL_H
#define HMDEXTERNALPERSONMANAGERSETTINGSMODEL_H

@class HMBModel, NSNumber, NSUUID;



@interface HMDExternalPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber *importingFromPhotoLibraryEnabled;
@property (retain) NSNumber *sharingFaceClassificationsEnabled;
@property (retain) NSUUID *zoneUUID;


+(id)hmbProperties;
-(id)createSettings;


@end


#endif