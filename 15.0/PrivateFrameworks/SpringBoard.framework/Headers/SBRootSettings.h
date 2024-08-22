// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBROOTSETTINGS_H
#define SBROOTSETTINGS_H

@class UISettings;


#import "SBAttentionAwarenessSettings.h"
#import "SBProximitySettings.h"

@interface SBRootSettings : UISettings

@property (retain) SBAttentionAwarenessSettings *attentionAwarenessSettings; // ivar: _attentionAwarenessSettings
@property (retain) SBProximitySettings *proximitySettings; // ivar: _proximitySettings




@end


#endif