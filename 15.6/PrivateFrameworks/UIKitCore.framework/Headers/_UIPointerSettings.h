// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTERSETTINGS_H
#define _UIPOINTERSETTINGS_H

@class PTSettings;


#import "_UIPointerSBAppIconEffectSettings.h"
#import "_UIBeamPointerSettings.h"
#import "_UIButtonBehaviorSettings.h"
#import "_UIFreeformPointerSettings.h"
#import "_UIPointerHighlightEffectSettings.h"
#import "_UIPointerHoverEffectSettings.h"
#import "_UIPointerLiftEffectSettings.h"
#import "_UILinkPointerSettings.h"
#import "_UINavigationAndToolbarBehaviorSettings.h"
#import "_UISearchBarBehaviorSettings.h"
#import "_UIPointerEffectSizeRuleSettings.h"
#import "_UITabBarBehaviorSettings.h"
#import "_UIPointerTextBehaviorSettings.h"

@interface _UIPointerSettings : PTSettings

@property (retain, nonatomic) _UIPointerSBAppIconEffectSettings *SBAppIconEffectSettings; // ivar: _SBAppIconEffectSettings
@property (retain, nonatomic) _UIBeamPointerSettings *beamSettings; // ivar: _beamSettings
@property (retain, nonatomic) _UIButtonBehaviorSettings *buttonSettings; // ivar: _buttonSettings
@property (retain, nonatomic) _UIFreeformPointerSettings *freeformPointerSettings; // ivar: _freeformPointerSettings
@property (retain, nonatomic) _UIPointerHighlightEffectSettings *highlightEffectSettings; // ivar: _highlightEffectSettings
@property (retain, nonatomic) _UIPointerHoverEffectSettings *hoverEffectSettings; // ivar: _hoverEffectSettings
@property (retain, nonatomic) _UIPointerLiftEffectSettings *liftEffectSettings; // ivar: _liftEffectSettings
@property (retain, nonatomic) _UILinkPointerSettings *linkPointerSettings; // ivar: _linkPointerSettings
@property (retain, nonatomic) _UINavigationAndToolbarBehaviorSettings *navigationAndToolbarSettings; // ivar: _navigationAndToolbarSettings
@property (retain, nonatomic) _UISearchBarBehaviorSettings *searchBarSettings; // ivar: _searchBarSettings
@property (nonatomic) BOOL showEffectPlatter; // ivar: _showEffectPlatter
@property (nonatomic) BOOL showRegions; // ivar: _showRegions
@property (retain, nonatomic) _UIPointerEffectSizeRuleSettings *sizeRuleSettings; // ivar: _sizeRuleSettings
@property (retain, nonatomic) _UITabBarBehaviorSettings *tabBarSettings; // ivar: _tabBarSettings
@property (retain, nonatomic) _UIPointerTextBehaviorSettings *textSettings; // ivar: _textSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif