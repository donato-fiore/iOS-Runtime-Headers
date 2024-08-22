// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRECIPEMATERIALSETTINGS_H
#define MTRECIPEMATERIALSETTINGS_H

@class NSString, NSDictionary;
@protocol MTRecipeMaterialSettingsProviding, MTTinting><MTMaterialFiltering><MTUserInfoProviding;

#import <Foundation/Foundation.h>


@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding>



@property (readonly, nonatomic) NSObject<MTTinting><MTMaterialFiltering><MTUserInfoProviding> *baseMaterialSettings; // ivar: _baseMaterialSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger materialSettingsVersion; // ivar: _materialSettingsVersion
@property (readonly, copy, nonatomic) NSString *recipeName; // ivar: _recipeName
@property (retain, nonatomic) NSDictionary *styles; // ivar: _styles
@property (readonly) Class superclass;


+(id)styleSetNameForStyleSetFromRecipeWithName:(id)arg0 ;
-(id)_newVisualStyleSet;
-(id)_platformColorsStyleSetName;
-(id)_visualStyleSetDescription;
-(id)initWithRecipeName:(id)arg0 andDescription:(id)arg1 descendantDescriptions:(id)arg2 bundle:(id)arg3 ;
-(id)styleNameForCategory:(id)arg0 ;


@end


#endif