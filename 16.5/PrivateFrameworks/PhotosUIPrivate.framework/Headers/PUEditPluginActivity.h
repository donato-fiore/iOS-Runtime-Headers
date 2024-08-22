// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUEDITPLUGINACTIVITY_H
#define PUEDITPLUGINACTIVITY_H

@class UIActivity;


#import "PUEditPlugin.h"

@interface PUEditPluginActivity : UIActivity

@property (readonly, nonatomic) PUEditPlugin *plugin; // ivar: _plugin


+(NSInteger)activityCategory;
-(BOOL)_isHiddenByDefault;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithPlugin:(id)arg0 ;


@end


#endif