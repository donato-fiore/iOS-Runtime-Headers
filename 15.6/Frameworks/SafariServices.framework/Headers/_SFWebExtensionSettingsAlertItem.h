// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFWEBEXTENSIONSETTINGSALERTITEM_H
#define _SFWEBEXTENSIONSETTINGSALERTITEM_H

@class SFSettingsAlertItem, WBSWebExtensionData;



@interface _SFWebExtensionSettingsAlertItem : SFSettingsAlertItem

@property (readonly, nonatomic) WBSWebExtensionData *extension; // ivar: _extension


+(id)buttonWithTitle:(id)arg0 textStyle:(id)arg1 icon:(id)arg2 extension:(id)arg3 handler:(id)arg4 ;


@end


#endif