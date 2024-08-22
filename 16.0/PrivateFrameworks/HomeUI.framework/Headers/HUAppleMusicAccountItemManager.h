// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUAPPLEMUSICACCOUNTITEMMANAGER_H
#define HUAPPLEMUSICACCOUNTITEMMANAGER_H

@class HFItemManager;
@protocol HFMediaProfileContainer;


#import "HUAppleMusicAccountModule.h"
#import "HUPrimaryUserSettingsItemModule.h"

@interface HUAppleMusicAccountItemManager : HFItemManager

@property (retain, nonatomic) HUAppleMusicAccountModule *appleMusicAccountModule; // ivar: _appleMusicAccountModule
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) HUPrimaryUserSettingsItemModule *primaryUserSettingsItemModule; // ivar: _primaryUserSettingsItemModule
@property (nonatomic) BOOL shouldDisableUpdates; // ivar: _shouldDisableUpdates


-(BOOL)_showAppleMusicSettings;
-(BOOL)_showPrimaryUserSettings;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 delegate:(id)arg1 ;
-(void)_moduleStateDidChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;


@end


#endif