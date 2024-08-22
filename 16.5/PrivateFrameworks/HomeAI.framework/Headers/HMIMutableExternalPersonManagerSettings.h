// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMUTABLEEXTERNALPERSONMANAGERSETTINGS_H
#define HMIMUTABLEEXTERNALPERSONMANAGERSETTINGS_H



#import "HMIExternalPersonManagerSettings.h"

@interface HMIMutableExternalPersonManagerSettings : HMIExternalPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif