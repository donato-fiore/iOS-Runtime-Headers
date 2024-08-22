// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEPHOTOSPERSONMANAGERSETTINGS_H
#define HMMUTABLEPHOTOSPERSONMANAGERSETTINGS_H



#import "HMPhotosPersonManagerSettings.h"

@interface HMMutablePhotosPersonManagerSettings : HMPhotosPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setSharingFaceClassificationsAllowed:(BOOL)arg0 ;


@end


#endif