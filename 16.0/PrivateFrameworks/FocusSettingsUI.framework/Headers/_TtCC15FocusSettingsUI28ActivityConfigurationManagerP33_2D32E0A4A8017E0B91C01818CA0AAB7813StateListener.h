// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC15FOCUSSETTINGSUI28ACTIVITYCONFIGURATIONMANAGERP33_2D32E0A4A8017E0B91C01818CA0AAB7813STATELISTENER_H
#define _TTCC15FOCUSSETTINGSUI28ACTIVITYCONFIGURATIONMANAGERP33_2D32E0A4A8017E0B91C01818CA0AAB7813STATELISTENER_H

@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface _TtCC15FocusSettingsUI28ActivityConfigurationManagerP33_2D32E0A4A8017E0B91C01818CA0AAB7813StateListener : NSObject <DNDModeConfigurationServiceListener>

 {
    ? stateDidChange;
}




-(id)init;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif