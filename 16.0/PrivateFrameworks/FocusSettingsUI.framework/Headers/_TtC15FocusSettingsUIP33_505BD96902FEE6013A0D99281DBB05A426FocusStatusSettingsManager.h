// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15FOCUSSETTINGSUIP33_505BD96902FEE6013A0D99281DBB05A426FOCUSSTATUSSETTINGSMANAGER_H
#define _TTC15FOCUSSETTINGSUIP33_505BD96902FEE6013A0D99281DBB05A426FOCUSSTATUSSETTINGSMANAGER_H

@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface _TtC15FocusSettingsUIP33_505BD96902FEE6013A0D99281DBB05A426FocusStatusSettingsManager : NSObject <DNDModeConfigurationServiceListener>

 {
    ? clientIdentifier;
    ? isListeningToModeConfigurationService;
    ? isListeningToGlobalConfigurationService;
    ? modeConfigurationService;
    ? globalConfigurationService;
    ? cachedModes;
    ? cachedConfigurations;
}




-(id)init;
-(void)dealloc;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif