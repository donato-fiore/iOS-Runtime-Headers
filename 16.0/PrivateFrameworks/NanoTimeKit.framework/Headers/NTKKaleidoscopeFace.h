// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKKALEIDOSCOPEFACE_H
#define NTKKALEIDOSCOPEFACE_H

@class NSString;


#import "NTKFace.h"

@interface NTKKaleidoscopeFace : NTKFace {
    NSString *_cachedResourceDirectorySnapshotKey;
}




+(BOOL)_customEditMode:(NSInteger)arg0 hasActionForOption:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)supportsExternalAssets;
+(Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)arg0 ;
+(id)_complicationSlotDescriptors;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_sortableFaceOfStyle:(NSInteger)arg0 withAssets:(id)arg1 ;
+(id)sortableFaceWithAssets:(id)arg0 ;
-(BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sanitizeFaceConfiguration:(*id)arg0 ;
-(BOOL)_shouldIncludeResourceDirectoryForSharing;
-(BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
-(BOOL)isUsingCustomAsset;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 resourceDirectoryExists:(BOOL)arg1 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_resourceDirectorySnapshotKey;
-(id)addFaceDetailViewController;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)editOptionThatHidesAllComplications;
-(id)libraryDetailViewController;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;
-(void)companionEditorWithAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif