// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHARINGSETTINGS_H
#define WFSHARINGSETTINGS_H


#import <Foundation/Foundation.h>


@interface WFSharingSettings : NSObject



+(BOOL)isPrivateSharingEnabled;
+(BOOL)sharingEnabled;
+(BOOL)shortcutFileSharingEnabled;
+(id)privateSharingDisabledAlertWithShortcutName:(id)arg0 ;
+(id)privateSharingDisabledErrorWithShortcutName:(id)arg0 ;
+(id)sharingDisabledAlertWithShortcutName:(id)arg0 ;
+(id)sharingDisabledAlertWithWorkflowName:(id)arg0 ;
+(id)shortcutFileSharingDisabledAlert;
+(id)shortcutFileSharingDisabledError;


@end


#endif