// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERSHORTCUTSPLAYGROUNDSETTINGS_H
#define PUWALLPAPERSHORTCUTSPLAYGROUNDSETTINGS_H

@class PXSettings, NSString;
@protocol PHPickerViewControllerDelegate;



@interface PUWallpaperShortcutsPlaygroundSettings : PXSettings <PHPickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL previewEnabled; // ivar: _previewEnabled
@property (retain, nonatomic) NSString *selectedAssetIdentifier; // ivar: _selectedAssetIdentifier
@property (retain, nonatomic) NSString *selectedConfigurationUUID; // ivar: _selectedConfigurationUUID
@property (nonatomic) BOOL smartCropEnabled; // ivar: _smartCropEnabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAssetURL; // ivar: _useAssetURL


+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)_runActionWithModuleController:(id)arg0 photoLibrary:(id)arg1 ;
-(id)parentSettings;
-(void)_handleLoadFileURL:(id)arg0 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)setDefaultValues;


@end


#endif