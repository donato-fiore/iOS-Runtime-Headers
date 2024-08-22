// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERCONFIGURATIONREVERSIONCONTEXT_H
#define AVTSTICKERCONFIGURATIONREVERSIONCONTEXT_H

@class SCNScene, NSMutableArray, NSMapTable, SCNNode, NSNumber;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"
#import "AVTAvatarEnvironment.h"

@interface AVTStickerConfigurationReversionContext : NSObject {
    SCNScene *_scene;
    AVTAvatar *_avatar;
    NSMutableArray *_presetOverrides;
    NSMutableArray *_morpherOverrides;
    NSMapTable *_shaderModifiers;
    NSMapTable *_customMaterialProperties;
    NSMutableArray *_singleSidedMaterials;
    SCNNode *_extraCameraNode;
    SCNNode *_extraPropsNode;
    NSNumber *_showMemojiBody;
    AVTAvatarEnvironment *_environmentForPointOfViewUpdateFromFramingMode;
}




-(id)init;
-(void)resetForAvatar:(id)arg0 ;
-(void)revertChangesWithScope:(NSUInteger)arg0 animationDuration:(CGFloat)arg1 ;
-(void)saveCustomMaterialPropertyNamed:(id)arg0 forMaterial:(id)arg1 ;
-(void)saveExtraCameraNode:(id)arg0 ;
-(void)saveExtraPropsNode:(id)arg0 ;
-(void)saveMorpherOverride:(id)arg0 ;
-(void)savePresetOverride:(id)arg0 ;
-(void)saveShaderModifiers:(id)arg0 forMaterial:(id)arg1 ;
-(void)saveShowMemojiBody:(BOOL)arg0 ;
-(void)saveSingleSidedForMaterial:(id)arg0 ;
-(void)saveUpdatePointOfViewFromFramingModeInEnvironment:(id)arg0 ;


@end


#endif