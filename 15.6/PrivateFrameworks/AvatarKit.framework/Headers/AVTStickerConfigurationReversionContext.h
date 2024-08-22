// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERCONFIGURATIONREVERSIONCONTEXT_H
#define AVTSTICKERCONFIGURATIONREVERSIONCONTEXT_H

@class SCNScene, NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"

@interface AVTStickerConfigurationReversionContext : NSObject {
    SCNScene *_scene;
    AVTAvatar *_avatar;
    NSMutableArray *_presetOverrides;
    NSMutableArray *_morpherOverrides;
    NSMapTable *_shaderModifiers;
    NSMapTable *_customMaterialProperties;
    NSMutableArray *_singleSidedMaterials;
    NSMutableArray *_blocks;
}




-(id)init;
-(void)resetForAvatar:(id)arg0 ;
-(void)revertChanges;
-(void)saveBlock:(id)arg0 ;
-(void)saveCustomMaterialPropertyNamed:(id)arg0 forMaterial:(id)arg1 ;
-(void)saveMorpherOverride:(id)arg0 ;
-(void)savePresetOverride:(id)arg0 ;
-(void)saveShaderModifiers:(id)arg0 forMaterial:(id)arg1 ;
-(void)saveSingleSidedForMaterial:(id)arg0 ;


@end


#endif