// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSERNOTIFICATIONIMAGEDEFINITION_H
#define SBSUSERNOTIFICATIONIMAGEDEFINITION_H



#import "SBSUserNotificationAssetDefinition.h"

@interface SBSUserNotificationImageDefinition : SBSUserNotificationAssetDefinition



+(id)definitionWithImageCatalogPath:(id)arg0 catalogImageKey:(id)arg1 ;
+(id)definitionWithImagePath:(id)arg0 ;
+(id)definitionWithSystemImageName:(id)arg0 ;
+(id)definitionWithSystemImageName:(id)arg0 tintColor:(id)arg1 ;
+(id)definitionWithSystemImageName:(id)arg0 tintColorDefinition:(id)arg1 ;
+(id)definitionWithSystemImageName:(id)arg0 tintColorName:(id)arg1 ;


@end


#endif