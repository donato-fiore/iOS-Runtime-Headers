// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAUSERSETTINGSCONFIGURATION_H
#define HMDCAMERAUSERSETTINGSCONFIGURATION_H

@class HMFObject;



@interface HMDCameraUserSettingsConfiguration : HMFObject

@property (readonly, getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled; // ivar: _importingFromPhotoLibraryEnabled
@property (readonly, getter=isOwner) BOOL owner; // ivar: _owner
@property (readonly, getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled; // ivar: _sharingFaceClassificationsEnabled


-(id)initWithUser:(id)arg0 ;


@end


#endif