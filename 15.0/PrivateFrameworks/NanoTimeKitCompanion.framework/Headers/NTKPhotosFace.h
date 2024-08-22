// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPHOTOSFACE_H
#define NTKPHOTOSFACE_H



#import "NTKBasePhotosFace.h"

@interface NTKPhotosFace : NTKBasePhotosFace {
    BOOL _editing;
}




+(BOOL)_customEditMode:(NSInteger)arg0 hasActionForOption:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)_customEditModeIsRows:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)supportsExternalAssets;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
+(id)sortableFaceWithAssets:(id)arg0 ;
-(BOOL)_hasOptionsForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)supportsPigmentEditOption;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSInteger)_customEditModeForUniqueConfiguration;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_localizedStringForExternal:(id)arg0 comment:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)addFaceDetailViewController;
-(id)libraryDetailViewController;
-(void)_cleanupEditOptions;
-(void)_prepareEditOptions;
-(void)companionEditorWithAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif