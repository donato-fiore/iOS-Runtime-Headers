// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAPROFILESETTINGSCOREDATAADAPTER_H
#define HMDCAMERAPROFILESETTINGSCOREDATAADAPTER_H

@class HMFObject, NSUUID, NSString;
@protocol HMFLogging;



@interface HMDCameraProfileSettingsCoreDataAdapter : HMFObject <HMFLogging>



@property (readonly) NSUUID *cameraProfileSettingsModelID; // ivar: _cameraProfileSettingsModelID
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *derivedPropertiesModelID; // ivar: _derivedPropertiesModelID
@property (readonly, copy) NSString *description;
@property (readonly) NSUUID *hapAccessoryUUID; // ivar: _hapAccessoryUUID
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)fetchCameraProfileSettingsModelWithError:(*id)arg0 ;
-(id)fetchDerivedPropertiesModelWithError:(*id)arg0 ;
-(id)initWithHAPAccessory:(id)arg0 cameraProfileSettingsModelID:(id)arg1 derivedPropertiesModelID:(id)arg2 ;
-(id)logIdentifier;
-(void)updateCameraProfileSettingsModel:(id)arg0 completion:(id)arg1 ;
-(void)updateDerivedPropertiesModel:(id)arg0 completion:(id)arg1 ;


@end


#endif