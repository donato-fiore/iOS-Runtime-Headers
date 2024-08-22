// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSESSIONSETTINGS_H
#define CSSESSIONSETTINGS_H

@class PTSettings, NSString;



@interface CSSessionSettings : PTSettings

@property (nonatomic) BOOL shouldShowPlatter; // ivar: _shouldShowPlatter
@property (nonatomic) NSString *widgetBundleIdentifier; // ivar: _widgetBundleIdentifier
@property (nonatomic) NSString *widgetContainerBundleIdentifier; // ivar: _widgetContainerBundleIdentifier
@property (nonatomic) NSString *widgetKind; // ivar: _widgetKind


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif