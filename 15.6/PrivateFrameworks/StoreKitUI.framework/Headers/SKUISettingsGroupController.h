// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISETTINGSGROUPCONTROLLER_H
#define SKUISETTINGSGROUPCONTROLLER_H

@class NSMutableArray;
@protocol SKUISettingsGroupControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUISettingsGroupDescription.h"

@interface SKUISettingsGroupController : NSObject

@property (weak, nonatomic) NSObject<SKUISettingsGroupControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *settingDescriptions; // ivar: _settingDescriptions
@property (retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription; // ivar: _settingsGroupDescription


-(id)_viewForSettingDescription:(id)arg0 ;
-(void)_reloadSettingDescription:(id)arg0 ;
-(void)attachSettingDescription:(id)arg0 ;


@end


#endif