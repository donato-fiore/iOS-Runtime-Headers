// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKBASEPHOTOSFACE_H
#define NTKBASEPHOTOSFACE_H

@class NSString;


#import "NTKFace.h"

@interface NTKBasePhotosFace : NTKFace {
    NSString *_cachedResourceDirectorySnapshotKey;
}




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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_migrateLegibility;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;


@end


#endif