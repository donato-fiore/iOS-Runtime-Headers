// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBASEPHOTOSFACE_H
#define NTKBASEPHOTOSFACE_H



#import "NTKFace.h"

@interface NTKBasePhotosFace : NTKFace



+(BOOL)_customEditModeIsRows:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
-(BOOL)_allowsEditing;
-(BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sanitizeFaceConfiguration:(*id)arg0 ;
-(BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
-(id)_localizedNameForComplicationSlot:(id)arg0 ;
-(id)_resourceDirectorySnapshotKey;
-(void)_migrateLegibility;


@end


#endif