// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHORTCUTSSECURITYSETTINGS_H
#define WFSHORTCUTSSECURITYSETTINGS_H


#import <Foundation/Foundation.h>


@interface WFShortcutsSecuritySettings : NSObject



+(BOOL)allowsDeletingLargeAmountsOfData;
+(BOOL)allowsDeletingWithoutConfirmation;
+(BOOL)allowsSharingLargeAmountsOfData;
+(BOOL)areScriptingActionsEnabled;
+(id)allSecuritySettingPreferenceKeys;
+(id)scripingActionDisabledErrorWithActionName:(id)arg0 ;


@end


#endif